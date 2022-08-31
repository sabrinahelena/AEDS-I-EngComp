#include <stdio.h>
#include <stdlib.h>

int main()
{
     float x = 1;
    float soma = 0;

  while (x <= 10)
    {
        soma += (1 / x);
         x++;

    }

     printf("O resultado e': %.2f", soma);
}
