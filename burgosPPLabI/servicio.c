#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "servicio.h"

int listarServicios(eServicio* servicios)
{
    int i;

    printf("\n| Servicios     |  ID  | Precio\n");
    for(i=0;i<3;i++)
    {
        printf("| %s | %d |  $%.2f\n",servicios[i].servicioDescripcion,servicios[i].servicioId,servicios[i].servicioPrecio);

    }
    printf("\n");
    return 0;
}

