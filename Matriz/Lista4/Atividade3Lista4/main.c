#include <stdio.h>

int CalcularMedia(int s, int d){
    return s/d;
}

int main() {
    int matrizA[2][3], matrizB[2][3], somaLinhaA = 0, somaColunaB = 0, somaTotal = 0, somaB = 0, mediaB, matrizC[2][3], somaC= 0;

    for(int i = 0; i<2; i++){
        for(int j = 0; j<3; j++){
            printf("\nDigite o valor para preencher a matriz A na posicao [%d][%d]", i,j);
            scanf("%d", &matrizA[i][j]);
        }
    }

    for(int i = 0; i<2; i++){
        for(int j = 0; j<3; j++){
            printf("\nDigite o valor para preencher a matriz B na posicao [%d][%d]", i,j);
            scanf("%d", &matrizB[i][j]);
            somaB += matrizB[i][j];
        }
    }

    //a matriz C, onde C=A+2B

    for(int i = 0; i<2; i++){
        for(int j = 0; j<3; j++){
            matrizC[i][j] = matrizA[i][j] + (2 * matrizB[i][j]);
        }
    }

    printf("\n MATRIZ A: \n");

    for(int i = 0; i<2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("   %d", matrizA[i][j]);
        }
        printf("\n");
    }

    printf("\n MATRIZ B: \n");

    for(int i = 0; i<2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("   %d", matrizB[i][j]);
        }
        printf("\n");
    }

    printf("\n MATRIZ C: \n");

    for(int i = 0; i<2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("   %d", matrizC[i][j]);
        }
        printf("\n");
    }


    // a soma de todos os elementos da segunda linha de C;

        for(int j = 0; j<3; j++)
            somaC+= matrizC[1][j];

    printf("\nA soma de todos elementos da segunda linha da matriz C e': %d", somaC);

    //a média dos elementos da matriz B
    mediaB = CalcularMedia(somaB, 6);

    printf("\nA media dos elementos da matriz B e': %d", mediaB);


    //a média dos elementos da matriz B e todos os elementos acima da média e suas localizações;

    printf("\n ELEMENTOS ACIMA DA MEDIA NA MATRIZ B: \n");
    for(int i = 0; i<2; i++){
        for(int j = 0; j<3; j++){
            if(matrizB[i][j] > mediaB)
             printf("\nO elemento %d localizado em [%d][%d] esta acima da media que e' %d. ", matrizB[i][j], i,j, mediaB);
        }
    }

    //a soma dos elementos da primeira linha de A com a última coluna de B;

    for(int i = 0; i<2; i++){
        for(int j = 0; j<3; j++){
            if(i == 0)
                somaLinhaA+= matrizA[i][j];
        }
    }

    for(int i = 0; i<2; i++){
        for(int j = 0; j<3; j++){
            if(j == 2)
                somaColunaB+= matrizB[i][j];
        }
    }

    somaTotal = somaLinhaA + somaColunaB;

    printf("\nA soma dos elementos da primeira linha de A com a ultima coluna de B: %d", somaTotal);
    return 0;
}
