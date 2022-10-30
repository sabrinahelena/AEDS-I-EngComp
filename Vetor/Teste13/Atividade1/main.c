#include <stdio.h>

int main()
{

    int numeros[10], impares[10];

    for(int i = 0; i<10; i++)
    {
        printf("Digite o %d numero: \nNUMERO: ", i);
        scanf("%d", &numeros[i]);
        if(numeros[i]%2 == 0)
        {
            impares[i] =0;
        }
        else
        {
            impares[i] = numeros[i];
        }
    }
    printf("\nVetor impares");
    for(int i = 0; i<10; i++)
    {
        printf("\nPosicao: %d - Numero: %d ", i, impares[i]);
    }

    return 0;

}

