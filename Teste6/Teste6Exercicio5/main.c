#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    printf("Digite um numero para descobrir seus 20 primeiros multiplos: \n");
    scanf("%d", &numero);
    for(int i = 1; i <= 20; i++){
     printf("\n%d * %d = %d",numero, i, numero*i);
     printf("\nMultiplo %d: %d",i, numero*i);
    }
    return 0;
}
