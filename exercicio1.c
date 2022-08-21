#include <stdio.h>
#include <stdlib.h>


int Soma(int a,int b,int c){
    return a+b+c;
}

void main (){
    int n1,n2,n3;
    printf("Entre com tres numeros inteiros: ");
    scanf("%d", &n1);
    scanf("%d", &n2);
    scanf("%d", &n3);

    int resultado = Soma(n1,n2,n3);
    printf("\n A soma e: %d", resultado);
}

