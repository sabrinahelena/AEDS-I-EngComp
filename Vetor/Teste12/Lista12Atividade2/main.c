#include <stdio.h>
#include <stdlib.h>


float Converter(float cotacao, float real) //Metodo que pode ser reaproveitado.
{

    return real/cotacao;
}

int main()
{
    float reais[10], dolar[10], euro[10], cotacaoD, cotacaoE, valorDolar, valorReal;

    printf("\nQual a cotacao do dolar hoje? ");
    scanf("%f", &cotacaoD);
    printf("\nQual a cotacao do euro hoje? ");
    scanf("%f", &cotacaoE); //Nao ha necessidade de repeticao.

    for(int i = 0; i<10; i++) //leitura do valor em real
    {
        printf("\nDigite o valor em real para ser convertido para dolar e euro ");
        scanf("%f", &reais[i]);
        dolar[i] = Converter(cotacaoD, reais[i]);
        euro[i] = Converter(cotacaoE, reais[i]);
    }

    for(int i = 0; i<10; i++)//for para montar a tabela de conversao.
    {
        printf("\nEm real: %.2f - Em dolar: %.2f - Em euro: %.2f", reais[i], dolar[i], euro[i]);
    }
    return 0;
}
