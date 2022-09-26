#include <stdio.h>
#include <stdlib.h>

//Ler 5 valores de produtos diferentes e para cada valor, mostrar em dolar e em euro. Perguntar a cotacao.

void converterDolarEuro(float valorReal){
float cDolar = 5.33;
float cEuro = 5.15;
float convertidoDolar, convertidoEuro;

convertidoDolar = valorReal/cDolar;
convertidoEuro = valorReal/cEuro;

printf("\nO valor R$ %.2f  e': \n%.2f em dolar \n%.2f em euro. ", valorReal, convertidoDolar, convertidoEuro);


}
int main()
{
    float valor;
    for(int i = 1; i<=2; i++ ){
        printf("\nQual o valor do %d produto? \n", i);
        scanf("%f", &valor);
        converterDolarEuro(valor);

    }

    return 0;
}
