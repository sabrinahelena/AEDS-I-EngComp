#include <stdio.h>

int main() {
    int matrizA[4][5], matrizB[4][5], matrizC[4][5], matrizD[5][4], maiorEC, menorEC, posicaoMaior, posicaoMenor;

    for(int i = 0; i <4; i++){
        for(int j = 0; j<5; j++){
            matrizA[i][j] = i+j;
            matrizB[i][j] = (3 * i) - j;
        }
    }

    //a matriz C = 2A-3B;
    for(int i = 0; i <4; i++){
        for(int j = 0; j<5; j++)
            matrizC[i][j] = (2 * matrizA[i][j]) - (3 * matrizB[i][j]);
    }

    maiorEC = matrizC[0][0];
    menorEC = matrizC[0][0];

    //o menor e o maior elementos de C e suas localizações;
    for(int i = 0; i <4; i++){
        for(int j = 0; j<5; j++){
            if(matrizC[i][j] > maiorEC)
                maiorEC = matrizC[i][j];
            else if(matrizC[i][j] < menorEC)
                menorEC = matrizC[i][j];
        }
    }

    // a matriz D, transposta  de C;
    for(int i = 0; i <5; i++){
        for(int j = 0; j<4; j++)
            matrizD[i][j] = matrizC[j][i];
    }

    printf("\nMATRIZ A: \n");


    for(int i = 0; i <4; i++){
        for(int j = 0; j<5; j++){
            printf("   %d", matrizA[i][j]);
        }
        printf("\n");
    }


    printf("\nMATRIZ B: \n");


    for(int i = 0; i <4; i++){
        for(int j = 0; j<5; j++){
            printf("   %d", matrizB[i][j]);
        }
        printf("\n");
    }

    printf("\nMATRIZ C: \n");


    for(int i = 0; i <4; i++){
        for(int j = 0; j<5; j++){
            printf("   %d", matrizC[i][j]);
        }
        printf("\n");
    }


    printf("\nMATRIZ D: \n");


    for(int i = 0; i <5; i++){
        for(int j = 0; j<4; j++){
            printf("   %d", matrizD[i][j]);
        }
        printf("\n");
    }

    for(int i = 0; i <4; i++){
        for(int j = 0; j<5; j++){
            if(matrizC[i][j] == maiorEC)
                printf("\nO maior elemento na matriz C e': %d e esta na posicao [%d][%d]. ", maiorEC, i, j);
            else if(matrizC[i][j] == menorEC)
                printf("\nO menor elemento na matriz C e': %d e esta na posicao [%d][%d]. ", menorEC, i, j);
        }
    }
    return 0;
}
