#include <stdio.h>
#include <stdlib.h>


float opcaoDolar(float valorD);
float opcaoEuro(float valorE);
float ConverterDolar(float valorRealD, float cDolar);
float ConverterEuro(float valorRealE, float cEuro);

float opcaoDolar(float valorD)
{
    float cotacaoDolar;

    printf("\nDigite a cotacao do dolar para a conversao: \nCOTACAO:");
    scanf("%f", &cotacaoDolar);
    return ConverterDolar(valorD, cotacaoDolar);
}

float opcaoEuro(float valorE)
{
    float cotacaoEuro;
    printf("\nDigite a cotacao do euro para a conversao: \nCOTACAO:");
    scanf("%f", &cotacaoEuro);
    return ConverterEuro(valorE, cotacaoEuro);

}

float ConverterDolar(float valorRealD, float cDolar)
{
    return valorRealD/cDolar;

}

float ConverterEuro(float valorRealE, float cEuro)
{
    return valorRealE/cEuro;
}

int main()
{
    float valorProduto, opcao;
    for(int i = 1; i<=5; i++ )
    {
        printf("\nQual o valor do %d produto? \n", i);
        scanf("%f", &valorProduto);
        printf("\nDeseja converter para \n1 - Dolar \n2 - Euro \nOPCAO: ");
        scanf("%f", &opcao);
        if(opcao == 1)
        {
            float resultDolar = opcaoDolar(valorProduto);
            printf("\nO valor convertido para dolar e': %.2f", resultDolar);
        }
        else
        {
            float resultEuro = opcaoEuro(valorProduto);
            printf("\nO valor convertido para euro e': %.2f", resultEuro);
        }

    }

    return 0;
}
