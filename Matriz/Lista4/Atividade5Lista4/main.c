#include <stdio.h>

int CalcularMedia(int s, int d){
    return s/d;
}

int main() {

    int matrizA[15][15], vetorB[15], vetorC[15], vetorD[15], somaMatriz = 0, media;


    //matriz quadrada A (15,15), onde A(i,j)=4i-2j
    for(int i = 0; i<15; i++){
        for(int j = 0; j<15; j++){
            matrizA[i][j] = (4 * i) - (2 * j);
            somaMatriz+=matrizA[i][j];
        }
    }

    //a média e todos os valores da matriz
    media = CalcularMedia(somaMatriz, 225);



    // vetor B que contém a última coluna de A;

    for(int i = 0; i<15; i++){
        for(int j = 0; j<15; j++)
        vetorB[i] = matrizA[i][14];
    }

    //o vetor C que contém a diagonal principal de A;

    for(int i = 0; i<15; i++){
        for(int j = 0; j<15; j++) {
            if (i == j)
                vetorC[i] = matrizA[i][j];
        }
    }

    //o vetor D que contém a primeira linha de A;
    for(int i = 0; i<15; i++){
        vetorD[i] = matrizA[0][i];
    }


    printf("\n MATRIZ A: \n");
    for(int i = 0; i<15; i++){
        for(int j = 0; j<15; j++){
            printf("   %d", matrizA[i][j]);
        }
        printf("\n");
    }

    printf("\n VETOR B: \n");
    for(int i = 0; i<15;i++)
        printf(" %d", vetorB[i]);

    printf("\n VETOR C: \n");
    for(int i = 0; i<15;i++)
        printf(" %d", vetorC[i]);

    printf("\n VETOR D: \n");
    for(int i = 0; i<15;i++)
        printf(" %d", vetorD[i]);


    // todos os valores da matriz e suas localizações que estão abaixo da média de A;
    printf("\n VALORES DA MATRIZ ABAIXO DA MEDIA: \n");
    printf("\nMedia: %d", media);
    for(int i = 0; i<15; i++){
        for(int j = 0; j<15; j++){
            if(matrizA[i][j] < media){
                printf("\nO valor %d com localizacao na matriz A [%d][%d] esta abaixo da media que e': %d. ", matrizA[i][j], i,j,media);
            }
        }
    }
    return 0;
}
