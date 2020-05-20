#include "burgos.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int initTrabajos(eTrabajo* trabajos,int arrayLength){

    int i;

    for(i=0;i<arrayLength;i++)
    {
        trabajos[i].trabajoIsEmpty=1;
    }
    return 0;
}

int altaTrabajo(eTrabajo* trabajos,eMascota* mascotas,eServicio* servicios,int *banderaAlta)
{
    int auxInt,i,auxId,j;

    char buff[100];
    time_t now = time(0);
    struct tm now_t = *localtime(&now);
    strftime (buff, 100, "%d-%m-%Y %H:%M:%S", &now_t);

    printf("\n\nIngrese el ID de la mascota: ");
    scanf("%d",&auxInt);
    fflush(stdin);

    for(i=0;i<50;i++)
    {
        if(auxInt==mascotas[i].mascotaId && mascotas[i].mascotaIsEmpty==0)
        {
            listarServicios(servicios);
            printf("\n\nIngrese el ID del servicio:  ");
            scanf("%d",&auxId);
            fflush(stdin);
            if((auxId==2000 || auxId==2001) || auxId==2002)
            {
                for(j=0;j<10;j++)
                {
                    if(trabajos[j].trabajoIsEmpty==1)
                    {
                        trabajos[j].trabajoFecha.fechaAnio = now_t.tm_year + 1900; // years since 1900
                        trabajos[j].trabajoFecha.fechaMes = now_t.tm_mon + 4;  // months since January [0-11]
                        trabajos[j].trabajoFecha.fechaDia = now_t.tm_mday;  // day of month [1-31]
                        trabajos[j].trabajoIsEmpty=0;
                        trabajos[j].trabajoIdServicio=auxId;
                        trabajos[j].trabajoIdMascota=auxInt;
                        *banderaAlta=*banderaAlta+1;
                        trabajos[j].trabajoId=*banderaAlta;
                        printf("\n\nLos datos se han cargado con exito.\n\n");
                        system("pause");
                        return 0;
                    }
                }
            }
            printf("\n\nEl id ingresado no coincide con ninguno de los servicios disponibles.\n\n");
            system("pause");
            return -1;
        }
    }
    printf("\n\nEl id ingresado no coincide con ninguno de las mascotas ingresadas.\n\n");
    system("pause");
    return -1;
}

int listarTrabajos(eTrabajo* trabajos,eMascota* mascotas,eServicio* servicios)
{
    int i;

    printf("\nID Trabajo|ID Mascota|ID Servicio| Fecha\n");
    for(i=0;i<10;i++)
    {
        if(trabajos[i].trabajoIsEmpty==0)
        {
            printf("%d         |%d         |%d       |%d/%d/%d\n",trabajos[i].trabajoId,trabajos[i].trabajoIdMascota,trabajos[i].trabajoIdServicio,trabajos[i].trabajoFecha.fechaAnio,trabajos[i].trabajoFecha.fechaMes,trabajos[i].trabajoFecha.fechaDia);
        }
    }
    system("pause");
    return 0;
}
