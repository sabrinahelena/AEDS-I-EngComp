#include <stdio.h>
#include <stdlib.h>
//Programa que le uma matriz de 2 linhas e quatro colunas, mostra a matriz que foi lida e a transposta.
int main()
{

    int matrizA[2][4], matrizTA[4][2];

    for(int i = 0; i<2; i++)
        for(int j = 0; j<4; j++)
        {
            printf("\nDigite o valor para preencher a matriz na linha [%d] coluna [%d]: ", i,j);
            scanf("%d",&matrizA[i][j]);
        }

    for(int i = 0; i<2; i++)
    {
        for(int j = 0; j<4; j++)
        {
            printf("   %d", matrizA[i][j]);
        }
        printf("\n");
    }

            printf("\n\n\n");

    for(int i = 0; i<4; i++)
        for(int j = 0; j<2; j++)
        {
            matrizTA[i][j] = matrizA[j][i];
        }



    for(int i = 0; i<4; i++)
     {
        for(int j = 0; j<2; j++)
        {
            printf("   %d", matrizTA[i][j]);
        }
        printf("\n");
    }

    return 0;
}
