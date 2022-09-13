#include <stdio.h>
#include <stdlib.h>

int main()
{
    int quantMercadorias, x=1, contadorLucroMenor10 = 0, contadorEntre10e20 = 0, contadorAcima20 = 0;
    float valorCompra, valorVenda, lucro, somaCompra = 0, somaVenda = 0, somaLucro = 0;

    printf("\nQuantas mercadorias deseja levantar o lucro? \n");
    scanf("%d", &quantMercadorias);

    while(x <= quantMercadorias){
        printf("\nQual o valor de compra dessa mercadoria? \n");
        scanf("%f", &valorCompra);
        printf("\nQual o valor de venda dessa mercadoria? \n");
        scanf("%f", &valorVenda);

        lucro = valorVenda - valorCompra;

        somaVenda += valorVenda;
        somaCompra += valorCompra;
        somaLucro += lucro;

        if(lucro < (0.1 * somaLucro)){
            contadorLucroMenor10++;
        }
        else if(lucro >= (0.1 * somaLucro) && lucro<= (0.2 * somaLucro)){
            contadorEntre10e20++;
        }
        else{
            contadorAcima20++;
        }
x++;

    }
    printf("\nO valor total de compra e': %.2f \nO valor total de venda e': %2.f \nO lucro total e': %.2f", somaCompra, somaVenda, somaLucro);
    printf("\n%d mercadorias proporcionaram menos de 10 percento do lucro. \n%d mercadorias proporcionaram lucro entre 10 e 20 percento. \n%d mercadorias proporcionaram lucro acima de 20 percento. ", contadorLucroMenor10, contadorEntre10e20, contadorAcima20);
    return 0;
}
