#include <stdio.h>
#include <stdlib.h>

//Usando for, programa que faz: Soma = 1/1 ... 99/50
int main()
{
    float numerador = 1;
    float soma = 0;

  for (float denominador=1; denominador<=50; denominador++) {
    soma += (numerador/denominador);
    printf("\n %f / %f", numerador, denominador);
    numerador = numerador + 2;
  }

  printf("\n\nResultado: %.2f\n", soma);
    return 0;
}
