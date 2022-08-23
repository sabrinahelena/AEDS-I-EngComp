#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2, n3;

    printf("Digite o valor do primeiro numero: ");
    scanf("%d", &n1);
    printf("Digite o valor do segundo numero: ");
    scanf("%d", &n2);
    printf("Digite o valor do terceiro numero: ");
    scanf("%d", &n3);

    if(n1 > n2 && n1 > n3){
        printf("O primeiro numero, %d, e' o maior entre os tres. ", n1);
    }
    else if(n2 > n1 && n2 > n3){
        printf("O segundo numero, %d, e' o maior entre os tres. ", n2);
    }
    else{
        printf("O terceiro numero, %d, e' o maior entre os tres. ", n3);
    }

    return 0;
}
