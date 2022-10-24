#include <stdio.h>
#include <stdlib.h>

int main()
{
    int respostas[9], genero[9], contSim =0, contNao = 0, contFemSim = 0, contFemNao = 0, contMascSim = 0, contMascNao = 0;

    for(int i = 1; i<=9 ; i++)
    {
        printf("Escolha \n1 - Sim \n2 - Nao \nRESPOSTA: ");
        scanf("%d", &respostas[i]);
        printf("\nQual seu genero? \n1 - Masculino \n2 - Feminino \nGENERO: ");
        scanf("%d", &genero[i]);

    }

    for(int i = 1; i<=9; i++)
    {
        if(respostas[i] == 1)
        {
            contSim++;
        }
        else if(respostas[i] == 2)
        {
            contNao++;
        }
        else if(respostas[i] == 1 && genero == 2)
        {
            contFemSim++;
        }
        else if(respostas[i] == 1 && genero == 1)
        {
            contMascSim++;
        }
        else if(respostas[i] == 2 && genero == 2)
        {
            contFemNao++;
        }
        else if(respostas[i] == 2 && genero == 1)
        {
            contMascNao++;
        }

    }

    for(int i = 1; i<=9; i++){
        if(respostas[i] == 1 && genero == 2)
        {
            contFemSim++;
        }
        else if(respostas[i] == 1 && genero == 1)
        {
            contMascSim++;
        }
        else if(respostas[i] == 2 && genero == 2)
        {
            contFemNao++;
        }
        else if(respostas[i] == 2 && genero == 1)
        {
            contMascNao++;
        }
    }

    for(int i = 1; i<=9; i++)
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

    for(int i = 1; i<=9; i++)
    {
        printf("\nOs votos foram: %d - posicao [%d] ", respostas[i], i);
    }

    printf("\nA quantidade de votos sim foi: %d \nA quantidade de votos nao: %d ", contSim, contNao);
    printf("\nA quantidade de votos de mulheres em sim foi: %d \nA quantidade de votos de mulheres em nao foi: %d ", contFemSim, contFemNao);
    printf("\nA quantidade de votos de homens em sim foi: %d \nA quantidade de votos de homens em nao foi: %d ", contMascSim, contMascNao);

    return 0;
}
