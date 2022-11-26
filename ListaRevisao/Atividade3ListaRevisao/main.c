#include <stdio.h>
#include <stdlib.h>

int CalcularFatorial(int numero)
{
    int fat;
    for(fat = 1; numero > 1; numero = numero - 1)
    {
          fat = fat * numero;
    }
    return fat;
}

int CalcularArranjo(int n, int d){

int arranjo;
arranjo = n/(d);

return arranjo;

}

int main()
{
    int Nx, Px, arranjo, Nfatorado, denominador;
    printf("\nDigite o N para a formula de arranjo simples: \nN:");
    scanf("%d", &Nx);
    printf("\nDigite o P para a formula de arranjo simples: \nP:");
    scanf("%d", &Px);
    Nfatorado = CalcularFatorial(Nx);
    denominador = Nx - Px;
    arranjo = CalcularArranjo(Nfatorado, denominador);
    printf("\nArranjo: %d", arranjo);


    return 0;
}
