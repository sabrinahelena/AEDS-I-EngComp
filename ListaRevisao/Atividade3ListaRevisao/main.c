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

int CalculadorArranjoSimples(int n, int p)
{
    int nFatoral, denominador, denominadorFatorado, resultado;


    nFatoral = CalcularFatorial(n);
    denominador = n-p;
    denominadorFatorado = CalcularFatorial(denominador);

    resultado = (nFatoral/denominadorFatorado);
    return resultado;

}


int main()
{
    int Nx, Px, arranjo, Nfatorado, Pfatorado;
    printf("\nDigite o N para a formula de arranjo simples: \nN:");
    scanf("%d", &Nx);
    printf("\nDigite o P para a formula de arranjo simples: \nP:");
    scanf("%d", &Px);
    Nfatorado = CalcularFatorial(Nx);
    Pfatorado = CalcularFatorial(Px);

    arranjo = CalculadorArranjoSimples(Nx, Px);


    printf("\nN FATORADO: %d\nP FATORADO: %d", Nfatorado, Pfatorado);
    printf("\nO arranjo e': %d", arranjo );
    return 0;
}
