#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double CalcularTempoDeslocamento(double distancia, double velocidade){
    return distancia/velocidade;
}


void main(){
    double d, v;
    printf("Digite a distância percorrida pelo automovel em km: ");
    scanf("%lf", &d);
    printf("Digite a velocidade do automovel em km/h: ");
    scanf("%lf", &v);

    double resultado = CalcularTempoDeslocamento(d,v);

    printf("\n O tempo de deslocamento e: %lf horas", resultado);
}