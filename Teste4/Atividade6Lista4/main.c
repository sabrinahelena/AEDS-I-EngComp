#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 1, voto, soma, porcentagem;
    int contadorVotosJoao = 0, contadorVotosMaria = 0, contadorVotosNulo = 0;

    while(x <= 8){
        printf("\nVOTE: \n1 - Joao \n2 - Maria \n3 - Nulo : \n");
        scanf("%d", &voto);

        switch(voto){
    case 1:
        contadorVotosJoao++;
        break;
    case 2:
        contadorVotosMaria++;
        break;
    case 3:
        contadorVotosNulo++;
       break;
    default:
        printf("Voto invalido. ");
        break;

        }
        x++;

    }
    printf("\nAo final, a quantidade de votos para o Joao foi: %d \nA quantidade de votos para a Maria foi: %d \nA quantidade de votos nulo foi: %d", contadorVotosJoao, contadorVotosMaria, contadorVotosNulo);

    soma = (contadorVotosJoao + contadorVotosMaria + contadorVotosNulo);
    porcentagem = ((contadorVotosNulo * 100) / soma);

    printf("\nA porcentagem de votos nulo no total de: %d votos, foi de %d porcento.", soma, porcentagem);

    if(contadorVotosJoao > contadorVotosMaria){
        printf("\nO candidado vencedor e' o Joao. ");
    }
    else if (contadorVotosJoao < contadorVotosMaria){
        printf("\nO candidato vencedor e' a Maria. ");
    }
    else{
        printf("\nOs dois candidatos empataram. ");
    }


    return 0;
}
