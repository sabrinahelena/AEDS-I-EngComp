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
    int votos[5], idades[5], generos[5], somaIdade = 0, votoJoao = 0, votoAna = 0, media, quantVotosFemJoao = 0, quantVotosFemAna = 0, quantVotosMascJoao = 0, quantVotosMascAna = 0;

    //LEITURA DE VOTOS, IDADES E GENEROS
    for(int i = 0; i<5; i++)
    {
        printf("\nDigite o seu voto: \n1 -  Joao \n2 - Ana \nVOTO: ");
        scanf("%d", &votos[i]);
        printf("\nDigite a sua idade: ");
        scanf("%d", &idades[i]);
        printf("\nDigite seu genero \n1 - Masc \n2 - Fem \nGENERO: ");
        scanf("%d", &generos[i]);

    }

    //PERCORRENDO VETOR
    for(int i = 0; i<5; i++)
    {
        somaIdade+= idades[i]; //Soma acumulativa das idades que estao dentro do vetor
        if(votos[i] == 1) //se o voto for 1, soma voto pro Joao
        {
            votoJoao++;
        }
        else if(votos[i] == 2)
        {//se nao, voto pra Ana
            votoAna++;
        }
    }

    for(int i =0; i<5; i++)
    {
        if(votos[i] == 2 && generos[i] == 2) //se voto for 2 e genero 2, mulher que votou na Ana
        {
            printf("\nIdade mulher que votou na ana: %d", idades[i]);
        }
        else if(votos[i] == 1 && generos[i] == 1)
        {
            printf("\nIdade homem que votou no joao: %d", idades[i]);
        }
    }

    for(int i =0; i<5; i++){ //contador de votos masculinos e femininos para o Joao
        if(votos[i] == 1 && generos[i] == 1){
            quantVotosMascJoao++;
        }
        else if(votos[i] == 1 && generos[i] == 2){
            quantVotosFemJoao++;
        }
    }

    for(int i = 0; i<5; i++){//contador de votos masculinos e femininos para a ana
        if(votos[i] == 2 && generos[i] == 1){
            quantVotosMascAna++;
        }
        else if(votos[i] == 2 && generos[i] == 2){
            quantVotosFemAna++;
        }
    }

    //Verifica vencedor
    if(votoAna > votoJoao){
        printf("\nAna venceu! A quantidade de votos de mulheres na Ana foi: %d \nA quantidade de votos de homens na Ana foi: %d ", quantVotosFemAna, quantVotosMascAna);
    }
    else{
        printf("\nJoao venceu! A quantidade de votos de mulheres no Joao foi: %d \nA quantidade de votos de homens no Joao foi: %d", quantVotosFemJoao, quantVotosMascJoao);
    } //Nao tem como empatar pq é numero impar



    media = CalcularMedia(somaIdade);
    printf("\nA quantidade de votos na Ana foi: %d \nA quantidade de votos no Joao foi: %d \nA media das idades e': %d", votoAna, votoJoao, media);

    return 0;
}
