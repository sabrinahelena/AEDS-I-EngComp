#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matrizA[10][10], valor, diagonal[10], matrizTRA[10][10], somaA = 0, mediaA;

    for (int i = 0; i<10; i++){
        for(int j = 0; j<10; j++){
            valor = i + (2 * j);
            matrizA[i][j] = valor;
            somaA += valor;
        }
    }

    for (int i = 0; i<10; i++){
        for(int j = 0; j<10; j++){
            if(i == j){
                diagonal[i] =matrizA[i][j];
            }
        }
    }

    for (int i = 0; i<10; i++){
        for(int j = 0; j<10; j++){
                matrizTRA[i][j] = matrizA[j][i];

        }
    }

    mediaA = somaA / 100;

    for (int i = 0; i<10; i++){
        for(int j = 0; j<10; j++){
           printf("   %d", matrizA[i][j]);
            }
        printf("\n");
    }

    for(int i = 0; i<10; i++){
        printf("\n %d ", diagonal[i]);
    }

    for (int i = 0; i<10; i++){
        for(int j = 0; j<10; j++){
           printf("   %d", matrizTRA[i][j]);
            }
        printf("\n");
    }
    printf("\nA media dos elementos e': %d", mediaA);

    return 0;
}
