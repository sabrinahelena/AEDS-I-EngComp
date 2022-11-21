#include <stdio.h>
#include <stdlib.h>

int main()
{
    int voto, genero, idade, somaVotoFemSim = 0, somaVotoHomemMenos18 = 0, somaIdadeVotoFemNao = 0, somaIdadeVotoMascSim = 0, votosSim = 0, votosNao = 0;
    int numeroMulheres = 0, numeroHomens = 0, mediaMulheresNao, mediaHomensSim;
    int x = 1, opcao;

    while(x == 1)
    {
        printf("\nDigite o voto, sendo 1 - SIM e 2 - NAO. \n");
        scanf("%d", &voto);
        printf("\nDigite seu genero, sendo 1 - Masculino e 2 - Feminino \n");
        scanf("%d", &genero);
        printf("\nDigite a sua idade: \n");
        scanf("%d", &idade);
        //Numero de votos sim, das mulheres

        if(voto == 1 && genero == 2) somaVotoFemSim++;

        //Numero de votos nao, de homens com menos de 18 anos;

        if(voto == 2 && genero == 1 && idade<18) somaVotoHomemMenos18++;

        //a média das idades das mulheres que falaram não;
        if(voto == 2 && genero == 2) somaIdadeVotoFemNao+= idade;

        //a média das idades dos homens que falaram sim;
        if(voto == 1 && genero == 1)
        {
            somaIdadeVotoMascSim+=idade;
        }

        //o número de homens e o número de mulheres no grupo;
        if(genero == 1)  numeroHomens++;
        else if(genero == 2) numeroMulheres++;

        // total de sim e o total de não.
        if(voto == 1) votosSim++;
        else if(voto == 2) votosNao++;

        printf("\nDeseja continuar? Se sim digite 1. Se nao, digite 2. ");
        scanf("%d", &x);


    }

    //a média das idades das mulheres que falaram não
    mediaMulheresNao = somaIdadeVotoFemNao/numeroMulheres;
    mediaHomensSim = somaIdadeVotoMascSim/numeroHomens;

    printf("\nO numero de votos sim das mulheres: %d \nNumero de votos nao de homens com menos de 18 anos: %d \nMedia das idades das mulheres que falaram nao: %d \nMedia das idades dos homens que falaram sim: %d ", somaVotoFemSim, somaVotoHomemMenos18, mediaMulheresNao, mediaHomensSim);
    printf("\nO numero de homens no grupo: %d \nO numero de mulheres no grupo: %d \nO total de votos sim e': %d \nO total de votos nao e': %d", numeroHomens, numeroMulheres, votosSim, votosNao);
    x= 2;
    return 0;
}
