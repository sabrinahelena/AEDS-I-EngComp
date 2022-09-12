#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 1, contadorRepeticao = 0;
    float numero, maiorN, menorN, somaN = 0, mediaTotal;

    while(x == 1){
        printf("Digite um numero: ");
        scanf("%f", &numero);
        contadorRepeticao++;

        if(contadorRepeticao == 1){
            maiorN = numero;
            menorN = numero;
        }

        if(numero > maiorN){
            maiorN = numero;
        }
        else{
            menorN = numero;
        }

        somaN += numero;

        printf("\nDeseja continuar? Digite 1 para sim e 2 para nao. ");
        scanf("%d", &x);
    }

    mediaTotal = somaN/contadorRepeticao;
    printf("\nA media verificada foi: %.2f \nO maior numero e': %.2f \nO menor numero e': %.2f", mediaTotal, maiorN, menorN);
    return 0;
}
