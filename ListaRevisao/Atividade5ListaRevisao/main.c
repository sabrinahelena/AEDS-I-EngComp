#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Calculadora

    int x = 1, valorUm, valorDois, opcao, resultado;

    while(x == 1)
    {
        printf("\nDigite o primeiro valor: \nVALOR: ");
        scanf("%d", &valorUm);
        printf("\nDigite o segundo valor: \nVALOR: ");
        scanf("%d", &valorDois);

        printf("\nOs seus valores atuais sao, %d e %d \nDigite o que deseja fazer: \n1 - Somar \n2 - Subtrair \n3 - Dividir \n4 - Multiplicar \n5 - Sair do loop \nOPCAO: ",valorUm, valorDois);
        scanf("%d", &opcao);

        switch(opcao)
        {

        case 1:
            resultado = valorUm + valorDois;
            printf("\nSeu resultado e': %d", resultado);
            break;
        case 2:
            resultado = valorUm - valorDois;
            printf("\nSeu resultado e': %d", resultado);
            break;
        case 3:
            resultado = valorUm/valorDois;
            printf("\nSeu resultado e': %d", resultado);
            break;
        case 4:
            resultado = valorUm * valorDois;
            printf("\nSeu resultado e': %d", resultado);
            break;
        case 5:
            x = 2;
            break;
        default:
            printf("\nOpcao invalida.");
            break;
        }
    }
    printf("Hello world!\n");
    return 0;
}
