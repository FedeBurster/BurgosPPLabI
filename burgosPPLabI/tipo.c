#include "tipo.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int listarTipos(eTipo* tipos)
{
    int i;

    system("cls");
    printf("\nTipos\n\n");
    for(i=0;i<5;i++)
    {
        printf("%s\n",tipos[i].tipoDescripcion);

    }
    printf("\n");
    system("pause");
    return 0;
}
