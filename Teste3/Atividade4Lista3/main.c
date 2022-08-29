#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 1;
    float soma=0;
    do{
        soma += (1 / x);
        x++;
    }
    while(x<=40);
    printf("resultado: %.2f", soma);
    return 0;
}
