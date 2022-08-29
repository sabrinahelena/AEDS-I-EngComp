#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 1;
    float nota, somaNota, mediaNota;

    while(x <= 10){
        printf("Digite a sua %d nota: \n", x);
        scanf("%f", &nota);

        somaNota += nota;
    x++;
    }
    mediaNota = somaNota/10;

    printf("\nA sua media final foi de: %.2f", mediaNota);
    return 0;
}
