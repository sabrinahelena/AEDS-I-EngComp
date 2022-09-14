#include <stdio.h>
#include <stdlib.h>

int main()
{
    int contPar = 0, contImpar = 0;
    for(int i = 1; i <=10; i++){
        if(i%2 == 0){
            contPar++;
        }
        else{
            contImpar++;
        }
    }
    printf("\nQuantidade de numeros pares: %d \nQuantidade de numeros impares: %d", contPar, contImpar);
    return 0;
}
