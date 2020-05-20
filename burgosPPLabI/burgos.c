
#include "Burgos.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>


int mainMenu()
{
    int respuesta;
    system("cls");

    printf("MENU DE OPCIONES\n\n1)Alta mascota\n2)Modificar mascota\n3)Baja mascota\n4)Listar mascotas\n5)Listar tipos\n6)Listar colores\n7)Listar servicios\n8)Alta trabajo\n9)Listar trabajos\n\n0)SALIR");
    printf("\n\nIngrese la opcion que desee realizar: ");
    scanf("%d", &respuesta);
    fflush(stdin);

    return respuesta;
}

int hardcodeoEstructuras(eTipo* tipos,eColor* colores,eServicio* servicios)
{
    strcpy(tipos[0].tipoDescripcion,"Ave   ");
    strcpy(tipos[1].tipoDescripcion,"Perro ");
    strcpy(tipos[2].tipoDescripcion,"Gato  ");
    strcpy(tipos[3].tipoDescripcion,"Roedor");
    strcpy(tipos[4].tipoDescripcion,"Pez   ");

    tipos[0].tipoId=1000;
    tipos[1].tipoId=1001;
    tipos[2].tipoId=1002;
    tipos[3].tipoId=1003;
    tipos[4].tipoId=1004;

    strcpy(colores[0].colorNombre,"Negro ");
    strcpy(colores[1].colorNombre,"Blanco");
    strcpy(colores[2].colorNombre,"Gris  ");
    strcpy(colores[3].colorNombre,"Rojo  ");
    strcpy(colores[4].colorNombre,"Azul  ");

    colores[0].colorId=5000;
    colores[1].colorId=5001;
    colores[2].colorId=5002;
    colores[3].colorId=5003;
    colores[4].colorId=5004;

    strcpy(servicios[0].servicioDescripcion,"Corte        ");
    strcpy(servicios[1].servicioDescripcion,"Desparasitado");
    strcpy(servicios[2].servicioDescripcion,"Castrado     ");

    servicios[0].servicioId=2000;
    servicios[1].servicioId=2001;
    servicios[2].servicioId=2002;

    servicios[0].servicioPrecio=250;
    servicios[1].servicioPrecio=300;
    servicios[2].servicioPrecio=400;
    return 0;
}
