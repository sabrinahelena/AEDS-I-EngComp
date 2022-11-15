#include <stdio.h>

int main() {
    int a[4][5], valorA;

    for(int i = 0; i<4; i++)
        for(int j = 0; j<5; j++){
            printf("\nDigite o valor para preencher o vetor A posicao [%d][%d] ", i+1, j+1);
            scanf("%d", &valorA);

        }
    printf("Hello, World!\n");
    return 0;
}
