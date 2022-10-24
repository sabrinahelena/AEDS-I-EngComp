#include <stdio.h>
#include <stdlib.h>
/*
Ler voto idade e genero de 5 eleitores e armazenar em vetores

*/

int CalcularMedia(int s)
{

    return s/5;

}


int main()
{
    int votos[5], idades[5], generos[5], somaIdade = 0, votoJoao = 0, votoAna = 0, media;

    for(int i = 1; i<=5; i++)
    {
        printf("\nDigite o seu voto: \n1 -  Joao \n2 - Ana \nVOTO: ");
        scanf("%d", &votos[i]);
        printf("\nDigite a sua idade: ");
        scanf("%d", &idades[i]);
        printf("\nDigite seu genero \n1 - Masc \n2 - Fem \nGENERO: ");
        scanf("%d", &generos[i]);

    }

    for(int i = 1; i<=5; i++)
    {
        somaIdade+= idades[i];
        if(votos[i] == 1)
        {
            votoJoao++;
        }
        else if(votos[i] == 2)
        {
            votoAna++;
        }
        else if(votos[i] == 2 && generos[i] == 2)
        {
            printf("\nIdade mulher que votou na ana: %d", idades[i]);
        }
        else if(votos[i] == 1 && generos[i] == 1)
        {
            printf("\nIdade homem que votou no joao: %d", idades[i]);
        }
    }

    for(int i =1; i<=5; i++)
    {
        if(votos[i] == 2 && generos[i] == 2)
        {
            printf("\nIdade mulher que votou na ana: %d", idades[i]);
        }
        else if(votos[i] == 1 && generos[i] == 1)
        {
            printf("\nIdade homem que votou no joao: %d", idades[i]);
        }
    }

    media = CalcularMedia(somaIdade);
    printf("\nA quantidade de votos na Ana foi: %d \nA quantidade de votos no Joao foi: %d \nA media das idades e': %d", votoAna, votoJoao, media);

    return 0;
}
