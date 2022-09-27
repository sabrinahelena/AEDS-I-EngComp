#include <stdio.h>
#include <stdlib.h>


float opcaoDolar(float valor)
{
    float cotacaoDolar, convertidoDolar;

    printf("\nDigite a cotacao do dolar para a conversao: \nCOTACAO:");
    scanf("%f", &cotacaoDolar);
    convertidoDolar = converterDolar(valor, cotacaoDolar);
    return convertidoDolar;
}

float opcaoEuro(float valor)
{
    float cotacaoEuro, convertidoEuro;
    printf("\nDigite a cotacao do euro para a conversao: \nCOTACAO:");
    scanf("%f", &cotacaoEuro);
    convertidoEuro = converterEuro(valor, cotacaoEuro);
    return convertidoEuro;

}

float converterDolar(float valorReal, float cDolar)
{

    float convertidoDolar;

    convertidoDolar = valorReal/cDolar;
    return convertidoDolar;

}

float converterEuro(float valorReal, float cEuro)
{
    float convertidoEuro;
    convertidoEuro = valorReal/cEuro;
    return convertidoEuro;
}





int main()
{
    float valor, opcao, resultDolar, resultEuro;
    for(int i = 1; i<=2; i++ )
    {
        printf("\nQual o valor do %d produto? \n", i);
        scanf("%f", &valor);
        printf("\nDeseja converter para \n1 - Dolar \n2 - Euro \nOPCAO: ");
        scanf("%d", &opcao);
        if(opcao == 1)
        {
            resultDolar = opcaoDolar(valor);
            printf("\nO valor convertido para dolar e': %.2f", resultDolar);
        }
        else
        {
            resultEuro = opcaoEuro(valor);
            printf("\nO valor convertido para euro e': %.2f", resultEuro);
        }

    }

    return 0;
}
