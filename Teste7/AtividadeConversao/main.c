#include <stdio.h>
#include <stdlib.h>


//Atividade de conversao REAL-DOLAR // REAL-EURO

void ConverterParaDolar()
{
    float valorReal, valorDolar, valorConvertido;
    printf("Digite a cotacao do dolar hoje em real: \n");
    scanf("%f", &valorDolar);
    printf("\nDigite o valor em real para ser convertido para dolar: \n");
    scanf("%f", &valorReal);
    valorConvertido = valorReal/valorDolar;
    printf("\n%.2f R$ em dolar e': %.2f ", valorReal, valorConvertido);

}

void ConverterParaEuro()
{
    float valorReal, valorEuro, valorConvertido;
    printf("Digite a cotacao do euro hoje em real: \n");
    scanf("%f", &valorEuro);
    printf("\nDigite o valor em real para ser convertido para euro: \n");
    scanf("%f", &valorReal);
    valorConvertido = valorReal/valorEuro;
    printf("\n%.2f R$ em euro e': %.2f ", valorReal, valorConvertido);
}

int main()
{
    int x = 1, opcao;
    while(x == 1)
    {
        printf("\nOla! Voce deseja converter de \n1 - Real > Dolar \n2 - Real > Euro \n");
        scanf("%d", &opcao);
        switch(opcao){
    case 1:
        ConverterParaDolar();
        break;
    case 2:
        ConverterParaEuro();
        break;
    default:
        printf("\nOpcao invalida. ");
        break;
        }
    printf("\nDeseja converter novamente? \n1 - Sim \n2 - Nao \n");
    scanf("%d", &x);
    }
    return 0;
}
