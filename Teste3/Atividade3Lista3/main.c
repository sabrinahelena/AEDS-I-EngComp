#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x =1, y = 1;
    float soma = 0;
    //X vai ser meu numerador e y meu denominador
    while(x <= 99 || y <= 50)
    {
        soma += ((x/y));
        x = x + 2;
        y++;

    }

    printf("O resultado e': %.2f", soma);
    return 0;
}
