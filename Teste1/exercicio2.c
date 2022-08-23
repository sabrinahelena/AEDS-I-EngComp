#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double CalcularArea(double lado){
    return pow(lado, 2);
}


void main(){
    double ladoQuadrado;
    printf("Digite o lado do quadrado: ");
    scanf("%lf", &ladoQuadrado);

    double resultado = CalcularArea(ladoQuadrado);

    printf("\n A area do quadrado e: %lf", resultado);
}