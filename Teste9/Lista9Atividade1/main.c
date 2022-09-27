#include <stdio.h>
#include <stdlib.h>


float calcularMedia(float soma){
 float media;
 media = soma/5;
 return media;
}
int main()
{
    float numero, somaNumero = 0;
    for(int i = 1; i<=5; i++){
        printf("Digite um numero: \nN:");
        scanf("%f", &numero);
        somaNumero += numero;
    }
    float media = calcularMedia(somaNumero);
    printf("\nA media e': %.2f", media);
    return 0;
}
