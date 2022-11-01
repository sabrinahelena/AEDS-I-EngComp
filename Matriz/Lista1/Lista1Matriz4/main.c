#include <stdio.h>

int CalcularMedia(int s){
    return s/12;
}

int main() {
    int a[3][5], somaMatriz = 0, mediaMatriz, maiorElemento, menorElemento;

    for(int i = 0; i<3; i++)
        for(int j = 0; j<5; j++){
            printf("\nDigite a posicao [%d][%d] da matriz:   ", i+1, j+1);
            scanf("%d", &a[i][j]);
            somaMatriz+= a[i][j];
            if(i == 0 && j == 0){
                maiorElemento = a[i][j];
                menorElemento = a[i][j];
            }
            else if(a[i][j] > maiorElemento){
                maiorElemento = a[i][j];
            }
            else if(a[i][j] < menorElemento){
                menorElemento = a[i][j];
            }
        }

    for(int i = 0; i<3; i++){
        for(int j = 0; j<5; j++){
            printf("   %d", a[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");

    mediaMatriz = CalcularMedia(somaMatriz);


    printf("\nA media da matriz e': %d", mediaMatriz);


    for(int i = 0; i<3; i++){
        for(int j = 0; j<4; j++){
            if(a[i][j] == maiorElemento){
                printf("\nO maior elemento e': %d e esta localizado na [%d][%d] da matriz . ", maiorElemento, i+1, j+1);
            }
            else if(a[i][j] == menorElemento){
                printf("\nO menor elemento e': %d e esta localizado na [%d][%d] da matriz . ", menorElemento, i+1, j+1);            }
        }
        printf("\n");
    }
    printf("\n\n");

}
