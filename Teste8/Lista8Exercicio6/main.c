#include <stdio.h>
#include <stdlib.h>
//Calcular fahreinhet

void calcularFahrenheit(float limInicial, float limFinal){
    float C;
    for(float i = limInicial; i<=limFinal; i = i + 2.0){
        C=((5.0/9.0)*(i - 32.0));
        printf("\nF: %.2f - C: %.2f", i, C);
    }
}
int main()
{
    float valorInicial, valorFinal;

    printf("\nVoce deseja escrever a tabela de graus centigrados em funcao de graus fahrenheit contendo qual valor como inicio? \nValor: ");
    scanf("%f", &valorInicial);
    printf("\nE como limite? \nValor: ");
    scanf("%f", &valorFinal);
    calcularFahrenheit(valorInicial, valorFinal);
    return 0;
}
