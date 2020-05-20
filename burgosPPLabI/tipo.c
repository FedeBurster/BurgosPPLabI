#include "tipo.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int listarTipos(eTipo* tipos)
{
    int i;

    system("cls");
    printf("\n| Tipos  |   ID\n\n");
    for(i=0;i<5;i++)
    {
        printf("| %s |  %d\n",tipos[i].tipoDescripcion,tipos[i].tipoId);

    }
    printf("\n");
    system("pause");
    return 0;
}
