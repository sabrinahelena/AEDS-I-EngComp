#include <stdio.h>
#include <stdlib.h>
//Ler uma serie de numeros usando flag, e mostrar no final:
/*
A quant. de numeros pares e impares
A media dos numeros pares e a media dos impares
O maior e menor numero

*/

void CalcularMedia(int soma, int contador){
int media;

media = soma/contador;

printf("\nA media e': %d", media);
}
int main()
{

    int x = 1;
    int numero, contadorPar = 0, contadorImpar = 0, somaPar = 0, somaImpar = 0, contadorGeral = 0, maiorNumero, menorNumero;

    while(x == 1){
        printf("\nDigite um numero: \n");
        scanf("%d", &numero);

        if(contadorGeral == 0){
            maiorNumero = numero;
            menorNumero = numero;
        }

        if(numero > maiorNumero){
            maiorNumero = numero;
        }
        else{
            menorNumero = numero;
        }

        if(numero%2 == 0){
            contadorPar++;
            somaPar += numero;

        }
        else{
            contadorImpar++;
            somaImpar += numero;
        }
        contadorGeral++;

        printf("\nDeseja continuar no programa? Digite: \n1 - Sim \n2 - Nao \n");
        scanf("%d", &x);
        if(x ==2 ){
            printf("\nA media de pares: ");
            CalcularMedia(somaPar, contadorPar);
            printf("\nA media de impares: ");
            CalcularMedia(somaImpar, contadorImpar);
        }

    }

    return 0;
}
