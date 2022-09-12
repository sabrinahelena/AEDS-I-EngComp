#include <stdio.h>
#include <stdlib.h>
//Calculadora


int main()
{
    int x = 1, opcao;
    float numero = 0, valor;

    while(x == 1){
        printf("Qual das operacoes deseja realizar? \n1 - Somar \n2 - Subtrair \n3 - Multiplicar \n4 - Dividir \n5 - Sair do loop \nValor atual: %.2f \n", numero);
        scanf("%d", &opcao);
        printf("Digite o valor a ser inserido na calculadora: ");
        scanf("%f", &valor);

        switch(opcao){
    case 1:
        numero +=valor;
    break;
    case 2:
        numero -= valor;
    break;
    case 3:
        numero *= valor;
    break;
    case 4:
        numero /= valor;
    break;
    default:
        printf("\nOpcao invalida. ");
    break;
        }
        printf("\nDeseja continuar? 1 para sim 2 para nao ");
        scanf("%d", &x);

    }
    printf("\nValor final da calculadora: %.2f", numero);
    return 0;
}
