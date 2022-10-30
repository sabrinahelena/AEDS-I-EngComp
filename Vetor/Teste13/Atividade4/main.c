#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeros[20], N;

    for(int i = 0; i<4; i++)
    {
        printf("\nDigite o %d numero: ", i+1);
        scanf("%d", &numeros[i]);

    }

    printf("\nDigite o valor de N para verificar multiplos: ");
    scanf("%d", &N);
    for(int i = 0; i<20; i++)
    {
        if(numeros[i]%N == 0 || N%numeros[i] == 0)
        {
            printf("\nO numero %d e': multiplo por %d ", N, numeros[i]);
        }


    }
    return 0;
}
