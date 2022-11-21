#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matrizA[3][2], matrizB[3][2], matrizC[3][2], matrizTranspostaC[2][3], soma;

    //Leitura matrizA
    for(int i = 0; i<3; i++)
    {
        for(int j = 0; j<2; j++)
        {
            printf("\nDigite um valor para a matrizA[%d][%d]: ", i,j);
            scanf("%d", &matrizA[i][j]);
        }
    }


    //Leitura matrizB
    for(int i = 0; i<3; i++)
    {
        for(int j = 0; j<2; j++)
        {
            printf("\nDigite um valor para a matrizB[%d][%d]: ", i,j);
            scanf("%d", &matrizB[i][j]);
        }
    }

    //Leitura matrizC
    for(int i = 0; i<3; i++)
    {
        for(int j = 0; j<2; j++)
        {
            matrizC[i][j] = (3 * matrizA[i][j]) - matrizB[i][j];
        }
    }

    //matriz transporta de C
    for(int i = 0; i<2; i++)
    {
        for(int j = 0; j<3; j++)
        {
            matrizTranspostaC[i][j] = matrizC[j][i];
        }
    }

    printf("\nMATRIZ A: \n");

    for(int i = 0; i<3; i++)
    {
        for(int j = 0; j<2; j++)
        {
            printf("   %d", matrizA[i][j]);
        }
        printf("\n");
    }

    printf("\nMATRIZ B: \n");

    for(int i = 0; i<3; i++)
    {
        for(int j = 0; j<2; j++)
        {
            printf("   %d", matrizB[i][j]);
        }
        printf("\n");
    }

    printf("\nMATRIZ C: \n");

    for(int i = 0; i<3; i++)
    {
        for(int j = 0; j<2; j++)
        {
            printf("   %d", matrizC[i][j]);
        }
        printf("\n");
    }

    printf("\nMATRIZ TRANSPOSTA C: \n");

    for(int i = 0; i<2; i++)
    {
        for(int j = 0; j<3; j++)
        {
            printf("   %d", matrizTranspostaC[i][j]);
        }
        printf("\n");
    }

    int somaA = 0, somaB = 0, somaC = 0;

    for(int i = 0; i<2; i++)
    {
        somaA+=matrizA[2][i];
        somaC+=matrizC[0][i];
    }
    for(int i = 0; i<3; i++)
    {
        somaB+=matrizB[i][1];
    }


    printf("\nA soma resultante e': %d", somaA+somaB+somaC);


    return 0;
}
