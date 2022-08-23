#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double CalcularArea(double raio){
    double pi = 3.14159;
    return  pi * (pow(raio,2));
}


void main(){
    double raioCubo;
    printf("Digite o raio do cubo: ");
    scanf("%lf", &raioCubo);

    double resultado = CalcularArea(raioCubo);

    printf("\n A area do cubo e: %lf", resultado);
}