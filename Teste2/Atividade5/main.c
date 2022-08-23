#include <stdio.h>
#include <stdlib.h>

int main()
{

  float n1, n2,soma,subtracao,divisao,multiplicacao;
  int opcao;

  printf("Digite o valor do primeiro numero: ");
  scanf("%f", &n1);
  printf("\nDigite o valor do segundo numero: ");
  scanf("%f", &n2);
  printf("\nDigite o valor corresponde a oque deseja fazer com os dois numeros na calculadora: \n1 - Somar \n2 - Subtrair \n3 - Dividir \n4 - Multiplicar \n");
  scanf("%d", &opcao);

  switch(opcao){
    case 1:
        soma= n1 + n2;
        printf("A soma e' %.2f", soma);
        break;
    case 2:
        subtracao= n1-n2;
        printf("A subtracao e' %.2f", subtracao);
        break;

    case 3:
        divisao = n1/n2;
        printf("A divisao e' %.2f", divisao);
        break;
    case 4:
        multiplicacao = n1 * n2;
        printf("A multiplicao e' %.2f", multiplicacao);
        break;
  default:
    printf("Opcao invalida");
    break;

}
}
