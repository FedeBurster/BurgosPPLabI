#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "burgos.h"
#define TAM 50

int main()
{
    int respuesta=33;
    int banderaIdMascotas=1;
    int banderaAlta=0;
    eMascota mascotas[TAM];
    eTipo tipos[5];
    eColor colores[5];
    eServicio servicios[3];

    hardcodeoEstructuras(tipos,colores,servicios);
    initMascotas(mascotas,TAM);

    do{
            respuesta=mainMenu();
            switch(respuesta)
            {
                case 1:
                    altaMascota(mascotas,TAM,&banderaIdMascotas,&banderaAlta,tipos,colores);
                    break;
                case 2:
                    if(banderaAlta<1)
                    {
                        printf("\nPara modificar los datos primero se debe completar el alta.\n");
                        system("pause");
                        break;
                    }
                    modificarMascota(mascotas,TAM,tipos,colores);
                    break;
                case 3:
                    if(banderaAlta<1)
                    {
                        printf("\nPara dar de baja primero se debe completar el alta.\n");
                        system("pause");
                        break;
                    }
                    bajaMascota(mascotas,TAM,&banderaAlta);
                    break;
                case 4:
                    if(banderaAlta<1)
                    {
                        printf("\nPara dar de baja primero se debe completar el alta.\n");
                        system("pause");
                        break;
                    }
                    listarMascotas(mascotas,TAM,tipos,colores);
                    break;
                case 5:
                    listarTipos(tipos);
                    break;
                case 6:
                    listarColores(colores);
                    break;
                case 7:
                    break;
                case 8:
                    break;
                case 9:
                    break;
                case 0:
                    break;
                default:
                    break;
            }



    }while(respuesta!=0);
    return 0;
}
