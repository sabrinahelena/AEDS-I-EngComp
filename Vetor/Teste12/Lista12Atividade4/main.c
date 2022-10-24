#include <stdio.h>
#include <stdlib.h>

int main()
{
    int respostas[9], genero[9], contSim =0, contNao = 0, contFemSim = 0, contFemNao = 0, contMascSim = 0, contMascNao = 0;

    for(int i = 0; i<9 ; i++) //Leitura de resposta e genero
    {
        printf("Escolha \n1 - Sim \n2 - Nao \nRESPOSTA: ");
        scanf("%d", &respostas[i]);
        printf("\nQual seu genero? \n1 - Masculino \n2 - Feminino \nGENERO: ");
        scanf("%d", &genero[i]);

    }

    for(int i = 0; i<9; i++) //For para contar respostas sim e nao
    {
        if(respostas[i] == 1)
        {
            contSim++;
        }
        else if(respostas[i] == 2)
        {
            contNao++;
        }
    }

    for(int i = 0; i<9; i++) //For para contar voto Sim para mulheres e homens
    {
        if(respostas[i] == 1 && genero[i] == 2)
        {
            contFemSim++;
        }
        else if(respostas[i] == 1 && genero[i] == 1)
        {
            contMascSim++;
        }
    }
    for(int i = 0; i<9; i++) //for para contar voto nao para mulheres e homens
    {
        if(respostas[i] == 2 && genero[i] == 2)
        {
            contFemNao++;
        }
        else if(respostas[i] == 2 && genero[i] == 1)
        {
            contMascNao++;
        }
    }

    for(int i = 0; i<9; i++)//For para imprimir na tela os votos dos homens e mulheres
    {
        if(genero[i] == 1)
        {
            printf("\nO homem da posicao [%d] votou: %d ", i, respostas[i]);
        }
        else if(genero[i] == 2)
        {
            printf("\nA mulher da posicao [%d] votou: %d ", i, respostas[i]);
        }
    }

    for(int i = 0; i<9; i++)//For para imprimir todos os votos
    {
        printf("\nOs votos foram: %d - posicao [%d] ", respostas[i], i);
    }

    printf("\nA quantidade de votos sim foi: %d \nA quantidade de votos nao: %d ", contSim, contNao);
    printf("\nA quantidade de votos de mulheres em sim foi: %d \nA quantidade de votos de mulheres em nao foi: %d ", contFemSim, contFemNao);
    printf("\nA quantidade de votos de homens em sim foi: %d \nA quantidade de votos de homens em nao foi: %d ", contMascSim, contMascNao);

    return 0;
}
