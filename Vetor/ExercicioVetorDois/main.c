#include <stdio.h>
#include <stdlib.h>

/*
Programa que le e armazena 5 temperaturas em graus celsius
- Mostra a maior temperatura lida
- Todas as temperaturas abaixo da media
- As temperaturas que foram lidas
*/

int CalcularMedia(int s){

return s/5;

}

int main()
{
    int temp[5], maiorTemp, soma = 0, media;

    for(int i = 0; i<5; i++){
        printf("\nDigite a %d temperatura: ", i + 1);
        scanf("%d", &temp[i]);
        if(i == 0){
            maiorTemp = temp[i];
        }
        if(maiorTemp < temp[i]){
            maiorTemp = temp[i];
        }
        soma += temp[i];
    }
    media = CalcularMedia(soma);

    for(int i = 0; i<5; i++){
        if(temp[i] < media ){
            printf("\nTemperatura da posicao [%d] esta abaixo da media (%d). Temperatura: %d ", i, media, temp[i]);
        }
    }

    for(int i = 0; i<5; i++){
        printf("\nTodas as temperaturas: \n [%d] - %d", i, temp[i]);
    }

    printf("\nA maior temperatura foi: %d", maiorTemp);
    return 0;
}
