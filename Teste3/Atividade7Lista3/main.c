#include <stdio.h>
#include <stdlib.h>

int main()
{
    int soma=0, x =1;
    while(x<=50){
        soma+=x;
        x++;
    }
    printf("A soma de 1 ate 50 e': %d ", soma);
    return 0;
}
