#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 0, numero, contPar =0, contImpar = 0;

    while(x < 8){
        printf("\nDigite um numero para verificar se e' par ou impar: \n");
        scanf("%d", &numero);
        if(numero%2 == 0){
            printf("\nNumero par! ");
            contPar++;
        }
        else{
            printf("\nNumero impar! ");
            contImpar++;
        }
        x++;
    }
    printf("\nA quantidade de numeros pares foi: %d \nA quantidade de numeros impares foi: %d", contPar, contImpar);
    return 0;
}
