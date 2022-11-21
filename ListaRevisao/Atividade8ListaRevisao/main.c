#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[8], somaPar = 0, mediaPar, somaImpar = 0, mediaImpar, quantPar = 0, quantImpar = 0;

    for(int i = 0; i<8; i++){
        printf("\nDigite um valor para a posicao [%d] do vetor. \n:", i);
        scanf("%d", &vetor[i]);

    }

    // o vetor que foi digitado;
    printf("\nVETOR: \n");
    for(int i = 0; i<8; i++){
        printf("\n[%d] = %d ", i, vetor[i]);

    }

    //as posições no vetor dos números ímpares;
    //todos os números pares;
    for(int i = 0; i<8; i++){
        if(vetor[i]%2 != 0){
            printf("\nO valor %d localizado na posicao [%d] e' impar. ", vetor[i], i);
            somaImpar += vetor[i];
            quantImpar++;
        }
        else{
            printf("\nO valor %d localizado na posicao [%d] e' par. ", vetor[i], i);
            somaPar += vetor[i];
            quantPar++;
        }

    }

    //a média dos ímpares e a média dos pares.
    mediaPar = somaPar/quantPar;
    mediaImpar = somaImpar/quantImpar;

    printf("\nA media de pares e': %d \nA media de impares e': %d", mediaPar, mediaImpar);
    return 0;
}
