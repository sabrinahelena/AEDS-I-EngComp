#include <stdio.h>

int CalcularMedia(int s){
    return s/9; //considerei pois são 9 elementos na matriz 3x3
}

int main() {
    int a[3][3], somaMatriz = 0, mediaMatriz;


    //Leitura
    for(int i = 0; i<3; i++)
        for(int j = 0; j<3; j++){
            printf("\nDigite a posicao [%d][%d] da matriz: ",i+1,j+1);
            scanf("%d", &a[i][j]);
            somaMatriz += a[i][j];
        }
    printf("\nMATRIZ A: \n");

    for(int i =0; i<3; i++){
        for(int j = 0; j<3; j++){
            printf("   %d", a[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");

    mediaMatriz = CalcularMedia(somaMatriz);

    printf("\nA media da matriz e': %d", mediaMatriz);

    printf("\nDIAGONAL PRINCIPAL: \n");
    for(int i =0; i<3; i++){
        for(int j = 0; j<3; j++){
            if(i == j)
            printf("   %d", a[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");

    return 0;
}
