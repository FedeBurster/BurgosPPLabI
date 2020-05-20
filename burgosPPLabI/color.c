#include "color.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int listarColores(eColor* colores)
{
    int i;
    system("cls");
    printf("\n Colores| ID\n\n");
    for(i=0;i<5;i++)
    {
        printf("  %s| %d\n",colores[i].colorNombre,colores[i].colorId);
    }
    printf("\n");
    system("pause");
    return 0;
}
