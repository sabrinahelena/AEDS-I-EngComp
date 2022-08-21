#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double CalcularVelocidade(double distancia, double tempo){
    return distancia/tempo;
}


void main(){
    double d, t;
    printf("Digite a distância percorrida pelo automovel em km: ");
    scanf("%lf", &d);
    printf("Digite o tempo gasto pelo automovel em horas: ");
    scanf("%lf", &t);

    double resultado = CalcularVelocidade(d,t);

    printf("\n A velocidade do automovel e: %lf km/h", resultado);
}