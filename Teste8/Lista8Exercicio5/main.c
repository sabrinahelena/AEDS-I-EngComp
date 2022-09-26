#include <stdio.h>
#include <stdlib.h>
//Calcular arranjo simples ou combinacao simples de n elementos
int calcularFatoracao( int n )
{
    int fat;
    for(fat =1; n> 1; n = n -1 )
    {
        fat = fat * n;
    }
    return fat;
}

void calcularArranjo(int n, int p)
{
    int arranjo, denominador, fatorialN, fatorialDenominador;
    fatorialN = calcularFatoracao(n);
    denominador = (n - p);
    fatorialDenominador = calcularFatoracao(denominador);
    arranjo = (fatorialN/fatorialDenominador);

    printf("\nArranjo: %d ", arranjo );
}
int main()
{
    int opcaoNumero, x= 1,n,p;
    printf("\nDe quantos numeros deseja calcular o arranjo simples? ");
    scanf("%d", &opcaoNumero);

    while(x <= opcaoNumero)
    {
        printf("\nConsiderando a formula: An,p = n!/(n-p)! \nDigite o valor de N: \nN: ");
        scanf("%d", &n);
        printf("\nAgora, o valor de P: \nP: ");
        scanf("%d", &p);
        calcularArranjo(n, p);
        x++;
    }

    printf("Hello world!\n");
    return 0;
}
