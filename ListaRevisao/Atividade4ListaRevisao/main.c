#include <stdio.h>
#include <stdlib.h>
int CalcularFatorial(int numero)
{

    int fat;
    for(fat = 1; numero>1; numero = numero - 1)
        fat = fat * numero;

    return fat;

}



int main()
{
    int serie[5], somaFat = 0;

    for(int i = 0; i<=5; i++)
    {
        serie[i] = i + 1;
    }

    for(int i = 0; i<=5; i++)
    {
        printf("\nANTES: %d", serie[i]);
        int fatorial = CalcularFatorial(serie[i]);
        printf("\nFATORADO: %d", fatorial);
        somaFat +=fatorial;
        printf("\nSOMA ATUAL: %d", somaFat);
    }
    printf("\nA soma fatorial e': %d", somaFat);
    return 0;
}
