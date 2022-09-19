#include <stdio.h>
#include <stdlib.h>

void somarPares()
{
    int numero, somaPar = 0, x, i;

    printf("\nDigite o numero: \nNUMERO: ");
    scanf("%d", &numero);

    while(x <= numero)
        {
            i = 2;
            somaPar += i;
            i = i + 2;
            printf("\n%d", somaPar);
        }

printf("\nO resultado e': %d ", somaPar);
}
int main()
{
    somarPares();
    return 0;
}
