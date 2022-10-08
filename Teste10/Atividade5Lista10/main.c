#include <stdio.h>
#include <stdlib.h>

void CalcularPrimeiraOpcao()
{
    int soma = 0;

    for(int i = 1; i<= 25; i = i + 1)
    {
        soma+= i;
        printf("\n Soma: %d", soma);
    }
    printf("\nA soma total e': %d ", soma);
}

void CalcularSegundaOpcao()
{
    int soma = -4;
    while(soma < 20)
    {
        soma = soma + 2;
        printf("\nSoma: %d", soma);
    }
    printf("\nA soma total e': %d ", soma);
}

void CalcularTerceiraOpcao()
{
    float soma = 0.0;

    for(float i = 2.0; i<=29.0; i = i+ 3.0)
    {
        float z = 1.0;
        soma += (z/i);
        printf("\nSoma : %.0f/%.0f = %.2f", z, i, soma);
    }
}

float CalcularFatorial(float numero)
{

    float fatorial = 1;

    for(int i = 1; i <= numero; i++)
    {
        fatorial *= i;
    }

    return fatorial;

}

void CalcularQuartaOpcao()
{

    float fat;
    float soma = 0;

    for(int i = 2; i<=12; i = i + 2)
    {
        fat = CalcularFatorial(i);
        soma +=fat;
        printf("\nFatorial: %.0f \nSoma: %.0f", fat, soma);
    }

}
int main()
{
    int opcao;
    printf("Digite qual soma deseja fazer: \n1 - Somar os 25 primeiros termos de 2 em 2 \n2 - de -4 ate 20 \n3 - dos 10 primeiros termos de 3 em 3 no denominador \n4 - Somar fatorial de 2 em 2 até o 6o primeiro termo \nOPCAO: ");
    scanf("%d", &opcao);
    switch (opcao)
    {
    case 1:
        CalcularPrimeiraOpcao();
        break;
    case 2:
        CalcularSegundaOpcao();
        break;
    case 3:
        CalcularTerceiraOpcao();
        break;
    case 4:
        CalcularQuartaOpcao();
        break;
    default:
        printf("\nOpcao invalida. ");
        break;

    }
    return 0;
}
