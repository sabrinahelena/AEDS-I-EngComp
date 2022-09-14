#include <stdio.h>
#include <stdlib.h>


//Programa que le 10 notas e calcula a media da turma, e mostra maior e menor nota.
int main()
{
    float nota, somaNota = 0, maiorNota, menorNota, media;
    for(int i = 1; i<=10; i++){
        printf("Digite a sua %d nota: \n", i);
        scanf("%f", &nota);
        if(i == 1){
            maiorNota = nota;
            menorNota = nota;
        }
        if(nota > maiorNota){
            maiorNota = nota;
        }
        else{
            menorNota = nota;
        }

        somaNota += nota;

    }
    media = somaNota / 10;
    printf("\nA media das notas e': %.2f \nA maior nota foi: %.2f \nA menor nota foi: %.2f", media, maiorNota, menorNota);
    return 0;
}
