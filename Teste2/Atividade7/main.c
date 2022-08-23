#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opcao;
    float d, v, t;
    printf("Oque deseja calcular? Digite o numero referente a opcao desejada. \nMenu de opcoes: \n1 - Distancia \n2 - Tempo \n3 - Velocidade \n");
    scanf("%d", &opcao);

    switch(opcao){
case 1:
    printf("\nDigite o valor da velocidade em km/h: ");
    scanf("%f", &v);
    printf("\nDigite o valor do tempo em hora: ");
    scanf("%f", &t);

    d = v * t;

    printf("A distancia e': %.2f metros", d);

    break;
case 2:
    printf("\nDigite o valor da distancia em metros: ");
    scanf("%f", &d);
    printf("\nDigite o valor da velocidade em km/h: ");
    scanf("%f", &v);

    t = d/v;

    printf("O tempo e': %.2f horas", t);
    break;


case 3:
    printf("\nDigite o valor da distancia em metros: ");
    scanf("%f", &d);
    printf("\nDigite o valor do tempo em horas: ");
    scanf("%f", &t);

    v = d/t;

    printf("A velocidade e': %.2f km/h", v);

    break;
default:
    printf("Opcao invalida");
    break;
    }
}
