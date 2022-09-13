#include <stdio.h>
#include <stdlib.h>

int main()
{
    float numero, soma = 0;
    float x = 1;

    printf("Ate qual valor deseja realizar a operacao 1/n ? \n");
    scanf("%f", &numero);

    while(x <= numero)
    {
    soma = soma + (1/x);
    x++;
    printf("\nSoma: %.2f", soma);
    }

    return 0;
}
