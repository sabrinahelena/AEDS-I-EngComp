#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matrizA[3][5], valor, matrizB[3][5], matrizC[3][5], matrizTRAC[5][3];

    //MATRIZ A
    for (int i = 0; i<3; i++){
        for(int j = 0; j<5; j++){
            valor = (3 * i) - j;
            matrizA[i][j] = valor;
        }
    }

    //MATRIZ B
    for (int i = 0; i<3; i++){
        for(int j = 0; j<5; j++){
            valor = (2 * i) + (3 * j);
            matrizB[i][j] = valor;
        }
    }

    //MATRIZ C
    for (int i = 0; i<3; i++){
        for(int j = 0; j<5; j++){
            matrizC[i][j] = (2* matrizA[i][j]) + matrizB[i][j];
        }
    }

    int maiorA = matrizA[0][0], maiorB = matrizB[0][0], menorC = matrizC[0][0];

    //MAIOR ELEMENTO MATRIZ A
    for (int i = 0; i<3; i++){
        for(int j = 0; j<5; j++){
            if(matrizA[i][j] > maiorA){
                maiorA = matrizA[i][j];
            }

        }
    }
    //MAIOR ELEMENTO MATRIZ B
    for (int i = 0; i<3; i++){
        for(int j = 0; j<5; j++){
            if(matrizB[i][j] > maiorB){
                maiorB = matrizB[i][j];
            }

        }
    }
    //MENOR ELEMENTO MATRIZ C
    for (int i = 0; i<3; i++){
        for(int j = 0; j<5; j++){
            if(matrizC[i][j] < menorC){
                menorC = matrizC[i][j];
            }

        }
    }

    //MATRIZ TRANSPOSTA DE C
    for (int i = 0; i<5; i++){
        for(int j = 0; j<3; j++){
            matrizTRAC[i][j] = matrizC[j][i];

        }
    }


    printf("\n MATRIZ A: \n");

    for (int i = 0; i<3; i++){
        for(int j = 0; j<5; j++){
           printf("   %d", matrizA[i][j]);
            }
        printf("\n");
    }


    printf("\n MATRIZ B: \n");

    for (int i = 0; i<3; i++){
        for(int j = 0; j<5; j++){
           printf("   %d", matrizB[i][j]);
            }
        printf("\n");
    }

    printf("\n MATRIZ C: \n");

    for (int i = 0; i<3; i++){
        for(int j = 0; j<5; j++){
           printf("   %d", matrizC[i][j]);
            }
        printf("\n");
    }

    printf("\n MATRIZ TRANSPOSTA DE C: \n");

    for (int i = 0; i<5; i++){
        for(int j = 0; j<3; j++){
           printf("   %d", matrizTRAC[i][j]);
            }
        printf("\n");
    }

    printf("\n MAIOR VALOR DA MATRIZ A: \n");

    for (int i = 0; i<3; i++){
        for(int j = 0; j<5; j++){
           if(matrizA[i][j] == maiorA){
            printf("\nO maior valor e': %d e esta na posicao [%d][%d]. ", maiorA, i,j);
           }
            }
        printf("\n");
    }

    printf("\n MAIOR VALOR DA MATRIZ B: \n");

    for (int i = 0; i<3; i++){
        for(int j = 0; j<5; j++){
           if(matrizB[i][j] == maiorB){
            printf("\nO maior valor e': %d e esta na posicao [%d][%d]. ", maiorB, i,j);
           }
            }
        printf("\n");
    }

    printf("\n MENOR VALOR DA MATRIZ C: \n");

    for (int i = 0; i<3; i++){
        for(int j = 0; j<5; j++){
           if(matrizC[i][j] == menorC){
            printf("\nO menor valor e': %d e esta na posicao [%d][%d]. ", menorC, i,j);
           }
            }
        printf("\n");
    }


    return 0;
}
