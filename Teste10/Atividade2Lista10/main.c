#include <stdio.h>
#include <stdlib.h>

float CalcularFatorial(float numero)
{

    float fat = 1;

    for(float i = 1; i <= numero; i++)
    {
        fat *= i;
    }
    return fat;

}
int main()
{
    float n, f, e = 0;

    printf("Digite o numero a ser calculado: \nNUMERO: ");
    scanf("%f", &n);
    for(int z = 1; z <= n; z++){
        f = CalcularFatorial(z);
        e += 1 + (1/f);

    }
    printf("\n%.2f", e);

        return 0;
}
