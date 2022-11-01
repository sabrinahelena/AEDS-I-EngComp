#include <stdio.h>

int CalcularMedia(int s){
    return s/9;
}

int main() {
    int a[3][3], b[3][3], somaA = 0, somaB = 0, mediaA, mediaB, maiorElementoA, menorElementoB;

    //Leitura matriz A
    for(int i = 0; i<3; i++)
        for(int j = 0; j<3; j++){
            printf("\nDigite um valor para preencher a posicao [%d][%d] da matriz:  ", i+1, j+1);
            scanf("%d", &a[i][j]);
            somaA+= a[i][j];
            if(i == 0 && j == 0){
                maiorElementoA = a[i][j];
            }
            else if(a[i][j] > maiorElementoA){
                maiorElementoA = a[i][j];
            }
        }

    //Leitura matriz B
    for(int i = 0; i<3; i++)
        for(int j = 0; j<3; j++){
            b[i][j] = 2 * a[i][j];
            somaB += b[i][j];
            if(i == 0 && j == 0){
                menorElementoB = b[i][j];
            }
            else if(b[i][j] < menorElementoB){
                menorElementoB = b[i][j];
            }
        }


    printf("\nDIAGONAL PRINCIPAL MATRIZ A: \n");
    for(int i = 0; i<3; i++){
        for(int j  =0; j<3; j++){
            if(i == j){
                printf("   %d", a[i][j]);
            }
        }
        printf("\n");
    }
    printf("\n\n");

    printf("\nDIAGONAL PRINCIPAL MATRIZ B: \n");
    for(int i = 0; i<3; i++){
        for(int j  =0; j<3; j++){
            if(i == j){
                printf("   %d", b[i][j]);
            }
        }
        printf("\n");
    }
    printf("\n\n");

    mediaA = CalcularMedia(somaA);
    mediaB = CalcularMedia(somaB);

    printf("\nA media dos elementos da matriz de A e': %d \nA media dos elementos da matriz de B e': %d", mediaA, mediaB);


    printf("\nMAIOR ELEMENTO A: \n");
    for(int i = 0; i<3; i++){
        for(int j  =0; j<3; j++){
            if(maiorElementoA == a[i][j]){
                printf("O maior elemento localizado na matriz de A e': %d e esta localizado em [%d][%d] ", maiorElementoA, i+1,j+1);
            }

        }
        printf("\n");
    }
    printf("\n\n");

    printf("\nMENOR ELEMENTO B: \n");
    for(int i = 0; i<3; i++){
        for(int j  =0; j<3; j++){
            if(menorElementoB == b[i][j]){
                printf("O menor elemento localizado na matriz de B e': %d e esta localizado em [%d][%d] ", menorElementoB, i+1,j+1);
            }

        }
        printf("\n");
    }
    printf("\n\n");
    return 0;
}
