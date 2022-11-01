#include <stdio.h>
#include <stdlib.h>
int CalcularMedia(int s)
{
    return s/9;
}

int main()
{
    int a[3][3], somaMatrizA = 0, maiorElemento, menorElemento, media;

    for(int i = 0; i<3; i++)
        for(int j = 0; j<3; j++)
        {
            printf("\nDigite o valor para a posicao [%d][%d] da matriz A: ", i+1, j+1);
            scanf("%d", &a[i][j]);
            somaMatrizA+=a[i][j];
            if(i == 0 && j== 0)
            {
                maiorElemento = a[i][j];
                menorElemento = a[i][j];
            }
            else if(a[i][j] > maiorElemento)
            {
                maiorElemento = a[i][j];
            }
            else if(a[i][j]< menorElemento)
            {
                menorElemento = a[i][j];
            }
        }

    printf("\n MATRIZ A \n");
    for(int i = 0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            printf("   %d", a[i][j]);
        }
        printf("\n");
    }

    printf("\nA soma dos elementos da matriz A e': %d", somaMatrizA);
    media = CalcularMedia(somaMatrizA);
    printf("\nA media dos elementos da matriz A e': %d", media);

    for(int i = 0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            if(a[i][j] == maiorElemento)
            {
                printf("\nO maior elemento e': %d e esta localizado em [%d][%d]", maiorElemento, i+1, j+1);
            }
            else if(a[i][j] == menorElemento)
            {
                printf("\nO menor elemento e': %d e esta localizado em [%d][%d]", menorElemento, i+1, j+1);

            }
        }
        printf("\n");
    }

    printf("\nDIAGONAL PRINCIPAL: \n");

    for(int i = 0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            if(i == j)
            {
                printf("   %d", a[i][j]);
            }

        }
        printf("\n");
    }
    return 0;
}
