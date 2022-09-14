#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, fat, soma = 0;
    for(int x = 1; x<=8; x++){
    n = x;
    for(fat = 1; n > 1; n = n - 1)
    {
          fat = fat * n;
    }
    printf("\n%d", fat);
    soma += fat;
    }

    printf("\nA soma e': %d", soma);
    return 0;
}
