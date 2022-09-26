#include <stdio.h>
#include <stdlib.h>

void calcularMedia(float somaNumero){
float media;

    media = somaNumero/5;
    printf("A media e': %.2f", media);

}

//Programa que le 5 numeros e mostra a media deles
int main()
{
    float numero, somaNumero = 0, media;

    for(int i = 1; i <=5; i++){
        printf("Digite o %d numero: \n", i);
        scanf("%f", &numero);
        somaNumero+= numero;
    }
    calcularMedia(somaNumero);
    return 0;
}
