#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 1, numero, fat;

    while(x == 1){
        printf("Digite um numero para ser fatorado: \n");
        scanf("%d", &numero);
        fat = 1;

        while(numero > 1){
            fat*= numero;
            numero--;
            printf("\nFAT: %d \nNUMERO: %d", fat, numero);
        }
        printf("\nResultado: %d", fat);
        printf("\nDeseja continuar? 1 para sim 2 para nao. ");
        scanf("%d", &x);
    }
    return 0;
}
