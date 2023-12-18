#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define Filas 3
#define Columnas 3


int main()
{
    int matriz[Filas][Columnas];
    int fi,co;
    srand(time(NULL));
    for(fi=0;fi<Filas;fi++){
        for(co=0;co<Columnas;co++){
            printf("Coordenada[%d][%d]: ",fi,co);
            matriz[fi][co] = rand()%(100-1+1)+1;
        }
    }

    printf("\nMatriz 3x3\n");
    for(fi=0;fi<Filas;fi++){
        for(co=0;co<Columnas;co++){
            printf("%d ",matriz[fi][co]);
        }
        printf("\n");
    }
    return 0;
}
