#include <stdio.h>
//Faça um programa que gere a matriz A, quadrada de ordem 6, onde A(i,j) = 5i - 2j .

int calcularMedia(int soma){
    return soma/36;
}


int main() {
    int a[6][6], diagonalPrincipal[6], somaElementos = 0, media;

    for(int i = 0; i<6; i++){
        for(int j = 0; j<6; j++){
            a[i][j] = (5 * i) - (2 * j);
            somaElementos += a[i][j];
        }
    }

    media = calcularMedia(somaElementos);

    //Diagonal principal da matriz
    for(int i = 0; i<6; i++){
        for(int j = 0; j<6; j++){
            if(i == j)
            diagonalPrincipal[i] = a[i][j];
        }
    }

    int maiorElemento = a[0][0], menorElemento  = a[0][0], colunaMaior, linhaMaior, colunaMenor, linhaMenor;
    //o maior e o menor elemento e suas localizações;
    for(int i = 0; i<6; i++){
        for(int j = 0; j<6; j++){
            if(a[i][j] > maiorElemento){
                maiorElemento = a[i][j];
                linhaMaior = i;
                colunaMaior = j;
            }
            else if(a[i][j] < menorElemento){
                menorElemento = a[i][j];
                linhaMenor = i;
                colunaMenor = j;
            }
        }
    }

    //a média dos elementos e todos os elementos acima da média;
    printf("\nA media dos elementos e': %d ", media);

    for(int i = 0; i<6; i++){
        for(int j = 0; j<6; j++){
            if(a[i][j] > media){
                printf("\nO elemento %d esta acima da media. ", a[i][j]);
            }
        }
    }


    //a matriz transposta de A;

    int transpostaA[6][6];

    for(int i = 0; i<6; i++){
        for(int j = 0; j<6; j++){
            transpostaA[i][j] = a[j][i];
        }
    }

    //Impressoes:
    printf("\n MATRIZ A: \n");

    for(int i = 0; i<6; i++){
        for(int j = 0; j<6; j++){
            printf("   %d", a[i][j]);
        }
        printf("\n");
    }

    printf("\nDIAGONAL PRINCIPAL: \n");
    for(int i = 0; i<6; i++){
        printf("%d - ", diagonalPrincipal[i]);
    }

    printf("\nO maior elemento e: %d e esta localizado na linha %d e coluna %d. \nO menor elemento e': %d e esta localizado na linha %d e coluna %d.", maiorElemento, linhaMaior, colunaMaior, menorElemento, linhaMenor, colunaMenor);


    printf("\nMATRIZ TRANSPOSTA: \n");
    for(int i = 0; i<6; i++){
        for(int j = 0; j<6; j++){
            printf("   %d", transpostaA[i][j]);
        }
        printf("\n");
    }

    return 0;
}
