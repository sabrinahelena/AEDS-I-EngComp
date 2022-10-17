#include <stdio.h>
#include <stdlib.h>
/*

Programa que le 10 numeros e armazena. No final mostra todos numeros lidos, os pares e impares.

*/


int main()
{
    int numeros[10];

    //For de leitura
    for(int i = 0; i<10; i++)
    {
        printf("Digite o %d numero: ", i +1);
        scanf("%d", &numeros[i]);

    }

    //For para imprimir todos os numeros
    for(int i = 0; i<10; i++)
    {
        printf("Numero na posicao %d = %d", i, numeros[i]);

    }

    //For para verificar par e impar
    for(int i = 0; i<10; i++)
    {
        if(numeros[i] % 2 == 0)
        {
            printf("\nNumero na posicao %d e' par. \nNumero: %d", i, numeros[i]);
        }
        else
        {
            printf("\nNumero na posicao %d e' impar. \nNumero: %d", i, numeros[i]);
        }

    }
    return 0;
}
