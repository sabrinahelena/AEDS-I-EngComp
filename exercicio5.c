#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double CalcularDistancia(double velocidade, double tempo){
    return velocidade * tempo;
}


void main(){
    double v, t;
    printf("Digite a velocidade do automovel em km/h: ");
    scanf("%lf", &v);
    printf("Digite o tempo decorrido pelo automovel em horas: ");
    scanf("%lf", &t);

    double resultado = CalcularDistancia(v,t);

    printf("\n A distancia e: %lf km", resultado);
}