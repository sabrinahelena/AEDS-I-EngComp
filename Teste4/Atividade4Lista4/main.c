#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n;
    int fat = 1;

    printf("Digite o numero a ser fatorado: ");
    scanf("%d", &n);
    i = n;
    while(i >= 1)
    {
        fat *= i;
        i--;
        printf("\n4! = %d", fat);
    }

    printf("O resultado final e': %d", fat);
    return 0;
}
