#include <stdio.h>
#include <stdlib.h>
/*
Faça um programa para ler e armazenar em vetores, 7 leituras de temperaturas em graus Celsius e o dia do mês (1 a 31), em que cada temperatura foi lida.

- a média das temperaturas lidas;
- as temperaturas abaixo da média e os dias em que elas ocorreram;
- a menor temperatura verificada;
- a maior temperatura verificada.
*/

int CalcularMediaTemp(int somaTemp){

return somaTemp/7;
}

int main()
{
    int temperaturas[7], diaMes[31], maiorTemp, menorTemp, soma = 0, media;

    for(int i = 0;i < 7; i++){ //For de leitura
        printf("Digite a temperatura lida no dia: ");
        scanf("%d", &temperaturas[i]);
        if(i == 0){
            maiorTemp = temperaturas[i];
            menorTemp = temperaturas[i];
        }
        if(maiorTemp < temperaturas[i]){
            maiorTemp = temperaturas[i];
        }
        else if(temperaturas[i] < menorTemp){
            menorTemp = temperaturas[i];
        }
        soma += temperaturas[i];
        printf("\nEm que dia essa temperatura ocorreu? \nDIA: ");
        scanf("%d", &diaMes[i]);
    }

    media = CalcularMediaTemp(soma);

    printf("\nA media das temperaturas foi de: %d", media );
    for(int i = 0; i<7; i++){ //For de abaixo da media
        if(temperaturas[i] < media){
            printf("\nA temperatura na posicao [%d] e': %d e esta abaixo da media. Ocorreu no dia: %d ", i, temperaturas[i], diaMes[i]);
        }
    }


    for(int i = 0; i<7; i++){ //For de maior e menor temp
        if(temperaturas[i] == maiorTemp){
    printf("\nA maior temperatura verificada foi: %d e ocorreu no dia %d. ", maiorTemp, diaMes[i]);

        }
        else if(temperaturas[i] == menorTemp){
    printf("\nA menor temperatura verificada foi: %d e ocorreu no dia %d. ", menorTemp, diaMes[i]);

        }
    }


    return 0;
}
