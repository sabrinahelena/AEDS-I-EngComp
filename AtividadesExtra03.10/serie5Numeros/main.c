#include <stdio.h>
#include <stdlib.h>

int ImparPar(int numeroParaVerificar)
{
    if(numeroParaVerificar%2 == 0)
    {
        return 1;
    }
    else
    {
        return 2;
    }
}
int main()
{


    int numero, maiorNumero, menorNumero, ImpPar, contadorPar = 0, contadorImpar = 0;
    for(int i = 1; i<=5; i++)
    {
        printf("\nDigite o %d numero: \n", i);
        scanf("%d", &numero);
        if(i == 1)
        {
            maiorNumero = numero;
            menorNumero = numero;
        }
        if (numero > maiorNumero)
        {
            maiorNumero = numero;
        }
        else if (numero < menorNumero)
        {
            menorNumero = numero;
        }


        ImpPar = ImparPar(numero);

        if(ImpPar == 1)
        {
            contadorPar++;
            printf("E' um numero par. \n");
        }
        else
        {
            contadorImpar++;
            printf("E' um numero impar. \n");
        }
    }
    printf("\nA quantidade de numeros pares e': %d \nA quantidade de impares e': %d \nO maior numero e': %d \nO menor numero e': %d", contadorPar, contadorImpar, maiorNumero, menorNumero);
    return 0;
}
