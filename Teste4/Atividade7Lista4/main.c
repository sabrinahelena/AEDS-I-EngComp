#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 1, genero, idade, peso, mediaPesoH, mediaIdadeM, mediaPeso, mediaIdades;
    int contadorM = 0, contadorH = 0, somaIdadeMulher = 0, somaIdadeHomem =0;
    int somaPesoHomem = 0, somaPesoMulher = 0;

    while( x <= 2){
        printf("\nDigite o seu genero: \n1 - Feminino \n2 - Masculino: ");
        scanf("%d", &genero);
        printf("\nDigite a sua idade: ");
        scanf("%d", &idade);
        printf("\nDigite o seu peso em inteiro: ");
        scanf("%d", &peso);


        if(genero == 1){
            contadorM++;
            somaIdadeMulher+= idade;
            somaPesoMulher += peso;
        }
        else if (genero == 2){
            contadorH++;
            somaIdadeHomem += idade;
            somaPesoHomem += peso;
        }
        else{
            printf("\nGenero invalido. ");
        }
        x++;
    }

    mediaPesoH = somaPesoHomem / contadorH;
    mediaIdadeM = somaIdadeMulher / contadorM;
    mediaPeso = ((somaPesoMulher + somaPesoHomem) / (contadorH + contadorM));
    mediaIdades = ((somaIdadeMulher + somaIdadeHomem) / (contadorH + contadorM));


    printf("\nO numero de mulheres e': %d \nO numero de homens e': %d \nA media dos pesos dos homens e': %d \nA media das idades das mulheres e': %d \nA media dos pesos do grupo e': %d \nA media das idades do grupo e': %d ", contadorM, contadorH, mediaPesoH, mediaIdadeM, mediaPeso, mediaIdades);
    return 0;
}
