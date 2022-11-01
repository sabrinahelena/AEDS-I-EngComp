#include <stdio.h>

int CalcularMedia(int s){
    return s/12;
}

int main() {
    int a[3][4], somaMatriz = 0, mediaMatriz;

    for(int i = 0; i<3; i++)
        for(int j = 0; j<4; j++){
            printf("\nDigite a posicao [%d][%d] da matriz:   ", i+1, j+1);
            scanf("%d", &a[i][j]);
            somaMatriz+= a[i][j];
        }

    for(int i = 0; i<3; i++){
        for(int j = 0; j<4; j++){
            printf("   %d", a[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");

    mediaMatriz = CalcularMedia(somaMatriz);


    printf("\nA media da matriz e': %d", mediaMatriz);


    for(int i = 0; i<3; i++){
        for(int j = 0; j<4; j++){
            if(a[i][j] < mediaMatriz){
                printf("\nO elemento %d localizado na [%d][%d] da matriz esta abaixo da media. ", a[i][j], i+1, j+1);
            }
            else if(a[i][j] > mediaMatriz){
                printf("\nO elemento %d localizado na [%d][%d] da matriz esta acima da media. ", a[i][j], i+1, j+1);
            }
        }
        printf("\n");
    }
    printf("\n\n");

}
