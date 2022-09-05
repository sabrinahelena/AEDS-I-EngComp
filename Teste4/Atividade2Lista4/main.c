#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = -7;
    int soma = 0;

    while(x <= 10){
        soma += x;
        printf("\nX: %d - Soma: %d", x, soma);
        x = x+2;

    }
    printf("\n\nSoma final: %d", soma);
    return 0;
}
