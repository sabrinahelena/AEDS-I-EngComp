#include <stdio.h>

int main() {

    int matrizA[8][10], matrizB[10][8], maiorElementoA, menorElementoB;

    for(int i = 0; i<8; i++){
        for(int j = 0; j<10; j++){
            matrizA[i][j] = (2 * i) + j;
            if(i == 0 && j ==0){
                maiorElementoA = matrizA[i][j];
            }
            else if(matrizA[i][j] > maiorElementoA){
                maiorElementoA = matrizA[i][j];
            }
        }
    }

    //Matriz transposta
    for(int i = 0; i<10; i++){
        for(int j = 0; j<8; j++){
            matrizB[i][j] = matrizA[j][i];
            if(i == 0 && j ==0){
                menorElementoB = matrizB[i][j];
            }
            else if(matrizB[i][j] < menorElementoB){
                menorElementoB = matrizB[i][j];
            }
        }
    }


    printf("\n MATRIZ A: \n");
    for(int i = 0; i<8; i++){
        for(int j = 0; j<10; j++){
            printf("   %d", matrizA[i][j]);
        }
        printf("\n");
    }

    printf("\n MATRIZ B transposta: \n");

    for(int i = 0; i<10; i++){
        for(int j = 0; j<8; j++){
            printf("   %d", matrizB[i][j]);
        }
        printf("\n");
    }


    printf("\nO maior elemento da matriz A e': %d \nO menor elemento da matriz B e': %d", maiorElementoA, menorElementoB);

    return 0;
}
