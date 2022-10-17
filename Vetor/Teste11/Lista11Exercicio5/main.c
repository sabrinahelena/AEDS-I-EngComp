#include <stdio.h>
#include <stdlib.h>
/*
Fa�a um programa para armazenar em um vetor o pre�o de um produto pesquisado em 7 lojas.

- todos os pre�os coletados nas lojas;
- a m�dia dos pre�os encontrados;
- o menor pre�o encontrado;
- o maior pre�o encontrado;
- a diferen�a entre o maior e o menor pre�o pesquisado.
*/


int CalcularMedia(int s){
return s/7;
}

int main()
{
    int produtos[7], soma, maiorPreco, menorPreco, media, diferencaPrecoMaiorEMenor;

    for(int i = 0; i<7; i++) //For de leitura
    {
        printf("Digite o preco do produto na loja %d: \nPRECO: ", i+1);
        scanf("%d", &produtos[i]);
        if(i == 0)
        {
            maiorPreco = produtos[i];
            menorPreco = produtos[i];
        }
        if(maiorPreco < produtos[i]){
            maiorPreco = produtos[i];
        }
        else if(produtos[i] < menorPreco){
            menorPreco = produtos[i];
        }

        soma+= produtos[i];
    }

    media = CalcularMedia(soma);
    printf("\nA media dos precos e': %d", media);

    for(int i =0; i<7; i++){ //For de impressao
        printf("\nPreco na posicao [%d] = %d", i, produtos[i]);
    }

    diferencaPrecoMaiorEMenor = maiorPreco - menorPreco;
    printf("\nA diferenca entre o maior preco %d e o menor preco %d e': %d", maiorPreco, menorPreco, diferencaPrecoMaiorEMenor);
    return 0;
}
