#include "color.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int listarColores(eColor* colores)
{
    int i;
    system("cls");
    printf("\nColores\n\n");
    for(i=0;i<5;i++)
    {
        printf("%s\n",colores[i].colorNombre);

    }
    printf("\n");
    system("pause");
    return 0;
}
