#include <stdio.h>
#include <stdlib.h>


int CalcularMedia(int soma, int contador){
int media;

media = soma/contador;

return media;
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
            int mediaPares = CalcularMedia(somaPar, contadorPar);
            printf("\nA media de pares: %d", mediaPares);
            int mediaCalculada = CalcularMedia(somaImpar, contadorImpar);
            printf("\nA media de impares: %d", mediaCalculada);
        }
    }
        return 0;

}
