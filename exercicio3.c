#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double CalcularArea(double base, double altura){
    return (base*altura)/2;
}


void main(){
    double b, h;
    printf("Digite a base do triangulo retangulo: ");
    scanf("%lf", &b);
    printf("Digite a altura do triangulo retangulo: ");
    scanf("%lf", &h);

    double resultado = CalcularArea(b,h);

    printf("\n A area do triangulo retangulo e: %lf", resultado);
}