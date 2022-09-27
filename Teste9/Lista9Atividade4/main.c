#include <stdio.h>
#include <stdlib.h>


/* function declaration */

float valorLim();
float calcularFahrenheit(float, float);
void inicioPrograma();

void inicioPrograma(){
    float valorInicial, valorF;
    printf("\nVoce deseja escrever a tabela de graus centigrados em funcao de graus fahrenheit contendo qual valor como inicio? \nValor: ");
    scanf("%f", &valorInicial);
    valorF = valorLim();
    calcularFahrenheit(valorInicial, valorF);
}

float valorLim()
{
    float vFinal;

    printf("\nE como limite? \nValor: ");
    scanf("%f", &vFinal);
    return vFinal;


}

void calcularFahrenheit(float limIni, float limFi){
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
