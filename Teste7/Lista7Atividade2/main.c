#include <stdio.h>
#include <stdlib.h>

/*
Loja:
Devemos ler o preço de um mesmo produto em 7 lojas diferentes e apos:
Mostrar o menor e maior preço encontrado e a media dos preços entre as lojas.
*/

void leituraPreco(){
float preco, maiorPreco, menorPreco, somaPreco = 0, mediaPreco;

    for(int i = 1; i<=7; i++)
    {
        printf("Digite o preco da %d loja: \n", i);
        scanf("%f", &preco);
        somaPreco += preco;
        if(i == 1){
            maiorPreco = preco;
            menorPreco = preco;
        }
        if(preco > maiorPreco){
            maiorPreco = preco;
        }
        else{
            menorPreco = preco;
        }


    }
    mediaPreco = somaPreco/7;
    printf("\nA media dos precos nas 7 lojas e': %.2f \nO maior preco foi: %.2f \nO menor preco foi %.2f", mediaPreco, maiorPreco, menorPreco);

}
int main()
{
    leituraPreco();
    return 0;
}
