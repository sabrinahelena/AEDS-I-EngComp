#include <stdio.h>
#include <stdlib.h>


float Converter(float cotacao, float real)
{

    return real/cotacao;
}

int main()
{
    float reais[10], dolar[10], euro[10], cotacaoD, cotacaoE, valorDolar, valorReal;

    printf("\nQual a cotacao do dolar hoje? ");
    scanf("%f", &cotacaoD);
    printf("\nQual a cotacao do euro hoje? ");
    scanf("%f", &cotacaoE);

    for(int i = 1; i<=10; i++)
    {
        printf("\nDigite o valor em real para ser convertido para dolar e euro ");
        scanf("%f", &reais[i]);
        dolar[i] = Converter(cotacaoD, reais[i]);
        euro[i] = Converter(cotacaoE, reais[i]);
    }

    for(int i = 1; i<=10; i++)
    {
        printf("\nEm real: %.2f - Em dolar: %.2f - Em euro: %.2f", reais[i], dolar[i], euro[i]);
    }
    return 0;
}
