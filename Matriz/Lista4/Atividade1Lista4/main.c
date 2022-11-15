#include <stdio.h>

int CalcularMedia(int s, int d){
    return s/d;
}

int main() {

    int matrizA[4][4], vetorB[4], somaDP= 0, mediaDP, maiorDP;

    //Leitura da matriz A
    for(int i = 0; i<4; i++){
        for(int j = 0; j<4; j++) {
            printf("\nDigite o valor para preencher a matriz A na posicao: [%d][%d]: ",i,j);
            scanf("%d", &matrizA[i][j]);
        }
    }

    printf("\n MATRIZ A: \n");

    for(int i = 0; i<4; i++){
        for(int j = 0; j<4; j++) {
            printf("   %d", matrizA[i][j]);

            }
        printf("\n");
    }

    //Inserindo no vetorB os elementos da diagnonal principal
    for(int i = 0; i<4; i++){
        for(int j = 0; j<4; j++) {
            if (i == j) {
                vetorB[i] = matrizA[i][j];
                somaDP+= matrizA[i][j];
            }
        }
    }

    //Maior e menor:

    for(int i = 0; i<4; i++){
        if(i == 0){
            maiorDP = vetorB[i];
        }
        else if(vetorB[i] > maiorDP){
            maiorDP = vetorB[i];
        }
    }
    mediaDP = CalcularMedia(somaDP, 4);

    printf("\nA media dos elementos da diagonal principal e': %d \nO maior elemento da diagnonal principal e': %d", mediaDP, maiorDP);

    //Elementos da matriz maiores que o maior da principal:

    for(int i = 0; i<4; i++){
        for(int j = 0; j<4; j++) {
            if (matrizA[i][j] > maiorDP) {
                printf("\nO elemento %d localizado na posicao [%d][%d] da matriz e' maior que o maior elemento da diagnonal principal %d. ", matrizA[i][j], i, j, maiorDP);
            }
        }
    }

    printf("\n DIAGONAL PRINCIPAL: \n");

    for(int i = 0; i<4; i++){
        printf("%d ", vetorB[i]);
    }


    return 0;
}
