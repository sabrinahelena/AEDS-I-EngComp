#include <stdio.h>
#include <stdlib.h>


int VerificarPositivoNegativo(int n)
{

    if(n > 0)
    {
        return 1;
    }
    else if(n < 0)
    {
        return 2;
    }
    else if (n == 0)
    {
        return 3;
    }

}

int calcularPercentual(int contadorN, int contadorT)
{

    int percentual;
    percentual = ((contadorN * 100) / contadorT);
    return percentual;

}



int main()
{
    int x = 1, numero, numeroVerif, contadorPositivo = 0, contadorNegativo = 0, contadorZero = 0, contadorTotal = 0;
    int percentualP, percentualN, percentualZ;

    while(x == 1)
    {
        printf("Digite um numero para ser verificado: \nNUMERO: ");
        scanf("%d", &numero);
        numeroVerif = VerificarPositivoNegativo(numero);

        if(numeroVerif == 1)
        {
            contadorPositivo++;
        }
        else if(numeroVerif ==2)
        {
            contadorNegativo++;
        }
        else if(numeroVerif == 3)
        {
            contadorZero++;
        }
        contadorTotal++;

        printf("\nDeseja inserir outro numero? \n1 - SIM \n2 - NAO \nOPCAO: ");
        scanf("%d", &x);

        if(x == 2)
        {
            percentualP = calcularPercentual(contadorPositivo, contadorTotal);
            percentualN = calcularPercentual(contadorNegativo, contadorTotal);
            percentualZ = calcularPercentual(contadorZero, contadorTotal);

            printf("\nA quantidade de numeros totais foi: %d \nA quantidade de numeros positivos foi: %d \nA quantidade de numeros negativos foi: %d \nA quantidade de numeros iguais a 0 foi: %d ", contadorTotal, contadorPositivo, contadorNegativo, contadorZero);
            printf("\nO percentual de numeros positivos foi: %d \nO percentual de numeros negativos foi: %d \nO percentual de numeros iguais a 0 foi: %d ", percentualP, percentualN, percentualZ);
        }

    }

    return 0;
}
