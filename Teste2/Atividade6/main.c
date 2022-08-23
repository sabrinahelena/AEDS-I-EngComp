#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float CalcularAreaQuadrado(float lado){

return pow(lado,2);
}

float CalcularAreaRetangulo(float b, float a){
return b * a;
}

float CalcularAreaCubo(float aresta){

return 6 * (pow(aresta,2));

}

float CalcularAreaTrianguloRetangulo(float b, float a){
return (b * a)/2;
}

int main()
{
    int opcao;
    float ladoQuadrado, areaQuadrado, baseRetangulo, alturaRetangulo, areaRetangulo, arestaCubo, ladoCubo, areaCubo, baseTrianguloR, alturaTrianguloR, areaTrianguloRetangulo;

    printf("Menu de opcoes: \n1 - Area do quadrado \n2 - Area do retangulo \n3 - Area do cubo \n4 - Area do triangulo retangulo \n");
    scanf("%d", &opcao);

    if(opcao == 1){
        printf("\nDigite o lado do quadrado: ");
        scanf("%f", &ladoQuadrado);
        areaQuadrado = CalcularAreaQuadrado(ladoQuadrado);
        printf("\nA area do quadrado e': %.2f", areaQuadrado);

    }
    else if(opcao == 2){
        printf("\nDigite a base do retangulo: ");
        scanf("%f", &baseRetangulo);
        printf("\nDigite a altura do retangulo: ");
        scanf("%f", &alturaRetangulo);
        areaRetangulo =CalcularAreaRetangulo(baseRetangulo, alturaRetangulo);
        printf("\nA area do retangulo e': %.2f", areaRetangulo);

    }
    else if(opcao ==3){
        printf("\nDigite o valor da aresta do cubo: ");
        scanf("%f", &arestaCubo);
        areaCubo = CalcularAreaCubo(arestaCubo);
        printf("\nA area do cubo e': %.2f", areaCubo);
    }
    else if(opcao ==4 ){
        printf("\nDigite o valor da base do triangulo retangulo: ");
        scanf("%f", &baseTrianguloR);
        printf("\nDigite o valor da altura do triangulo retangulo: ");
        scanf("%f", &alturaTrianguloR);
        areaTrianguloRetangulo = CalcularAreaTrianguloRetangulo(baseTrianguloR, alturaTrianguloR);
        printf("\nA area do triangulo retangulo e': %.2f ", areaTrianguloRetangulo);
    }
    else{
        printf("Opcao invalida");
    }
}
