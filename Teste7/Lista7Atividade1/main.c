#include <stdio.h>
#include <stdlib.h>

/*
Programa que mostra a quantidade de numeros impares e pares
em uma série de 10 numeros
*/

void CalcularQuantParImpar()
{
    int numero;
    int contadorPar = 0, contadorImpar = 0;
    for(int i = 1; i <= 10; i++){
        printf("Digite o %d numero: ", i);
        scanf("%d", &numero);
        if(numero%2 == 0){
            contadorPar++;
        }
        else{
            contadorImpar++;
        }
    }
    printf("\nNa serie de 10 numeros, possuimos: \n%d numeros pares \n%d numeros impares. ", contadorPar, contadorImpar);
}


int main()
{
    CalcularQuantParImpar();
    return 0;
}
