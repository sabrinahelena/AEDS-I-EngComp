#include <stdio.h>
#include <stdlib.h>


void somarFracoes()
{
    float soma = 0, numerador = 1, denominador = 1;
    while(denominador <= 15){
        soma += (numerador/denominador);
        numerador = numerador + 2;
        denominador++;
        printf("A soma atual e': %.2f \n", soma);
    }
    printf("\nResultado final: %.2f", soma);
}
int main()
{
    somarFracoes();
    return 0;
}
