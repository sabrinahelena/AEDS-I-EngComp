#include <stdio.h>
#include <stdlib.h>


/*
Ler e armazenar uma serie de 7 numeros.
Mostrar a media, maior lido, menor lido e suas posicoes, e todos os numeros da serie.
*/

int CalcularMedia(int s)
{
    return s/7;
}

int main()
{
    int numeros[7], maiorNumero, menorNumero, soma = 0, media;

    for(int i = 0; i<7; i++)
    {
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &numeros[i]);
        if(i == 0)
        {
            maiorNumero = numeros[i];
            menorNumero = numeros[i];
        }
        if(numeros[i] > maiorNumero)
        {
            maiorNumero = numeros[i];
        }
        else if(numeros[i] < menorNumero)
        {
            menorNumero = numeros[i];
        }
        soma += numeros[i];
    }
    media = CalcularMedia(soma);

    for(int i = 0; i<7; i++)
    {
        if(numeros[i] == maiorNumero)
        {
            printf("\nO maior numero e': %d e sua posicao e': %d ", maiorNumero, i);
        }
        else if(numeros[i] == menorNumero)
        {
            printf("\nO menor numero e': %d e sua posicao e': %d ", menorNumero, i);
        }
    }

    for(int i = 0; i<7; i++)
    {
        printf("\nA serie contem %d \n Posicao %d - %d", sizeof(numeros[i]), i, numeros[i]);
    }

    printf("\nA media e': %d", media);
    return 0;
}
