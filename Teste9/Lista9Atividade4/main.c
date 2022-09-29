#include <stdio.h>
#include <stdlib.h>


/* function declaration */
void inicioPrograma();
void CalcularFahrenheit(float limIni, float limFi);

void inicioPrograma(){
    float valorInicial, vFinal;
    printf("\nVoce deseja escrever a tabela de graus centigrados em funcao de graus fahrenheit contendo qual valor como inicio? \nValor: ");
    scanf("%f", &valorInicial);
    printf("\nE como limite? \nValor: ");
    scanf("%f", &vFinal);
    CalcularFahrenheit(valorInicial, vFinal);
}


void CalcularFahrenheit(float limIni, float limFi){
    float C;
    for(float i = limIni; i<=limFi; i = i + 2.0){
        C=((5.0/9.0)*(i - 32.0));
        printf("\nF: %.2f - C: %.2f", i, C);
    }
}


int main()
{
    inicioPrograma();
    return 0;
}
