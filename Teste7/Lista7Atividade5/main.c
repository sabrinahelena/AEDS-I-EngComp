#include <stdio.h>
#include <stdlib.h>

void somarPares()
{
    int numero, somaPar = 0;

    printf("\nDigite o numero: \nNUMERO: ");
    scanf("%d", &numero);

    for(int i = 2; i <= numero; i = i + 2)
        {
            somaPar += i;
            printf("\n%d", somaPar);
        }

printf("\nO resultado e': %d ", somaPar);
}
int main()
{
    somarPares();
    return 0;
}
