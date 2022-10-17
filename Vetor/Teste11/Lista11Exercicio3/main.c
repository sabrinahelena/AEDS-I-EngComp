#include <stdio.h>
#include <stdlib.h>

int CalcularMedia(int s){
return s/6;
}

int main()
{
    int idades[6], generos[6], soma = 0, media;

    for(int i = 0; i<6; i++){
    printf("Digite o seu genero \n1 - Feminino 2 - Masculino \nGENERO: ");
    scanf("%d", &generos[i]);
    printf("\nDigite a sua idade: ");
    scanf("%d", &idades[i]);

    }

    for(int i = 0; i<6; i++){
    if(generos[i] == 1){
        printf("\nMulheres - Idade: %d", idades[i]);
    }
    else{
        printf("\nHomens - Idade %d", idades[i]);
        soma+=idades[i];
    }
    }

    for(int i = 0; i<6; i++){
        printf("\n Idade: %d", idades[i]);

    }

    media = CalcularMedia(soma);

    printf("\nA media de idade dos homens e': %d", media);



    return 0;
}
