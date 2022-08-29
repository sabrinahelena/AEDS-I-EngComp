#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=0, numero;
    while(x<5){
        printf("\nDigite um numero para testar se e' divisivel por 3 ou nao: ");
        scanf("%d", &numero);

        if(numero%3 == 0){
            printf("\nNumero divisivel por 3.");
        }
        else{
            printf("\nNumero nao divisivel por 3.\n");
        }
        x++;
    }
    return 0;
}
