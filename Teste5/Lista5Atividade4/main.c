#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 1, genero, idade, contadorRepeticao = 0, maiorIdade, menorIdade, contadorM = 0, contadorH = 0;
    int somaIdadeH = 0, mediaIdade;

    while(x == 1){
        printf("Digite o seu genero, sendo: \n1 - Mulher \n2 - Homem \n");
        scanf("%d", &genero);
        printf("\nDigite a sua idade: ");
        scanf("%d", &idade);

        contadorRepeticao++;

        //Definindo a primeira idade digitada como padrao para maior e menor
        if(contadorRepeticao == 1){
            maiorIdade = idade;
            menorIdade = idade;
        }

        //Teste de idade, para maior e menor

        if(idade > maiorIdade){
            maiorIdade = idade;
        }
        else{
            menorIdade = idade;
        }

        //Contador de mulheres e homens

        if(genero == 1){
            contadorM++;
        }
        else{
            contadorH++;
            somaIdadeH+=idade; //p calcular media idade homens

        }

        printf("\nDeseja continuar? 1 para sim 2 para nao: ");
        scanf("%d", &x);
    }

    mediaIdade = somaIdadeH/contadorH;

    printf("\nO numero de mulheres e': %d \nO numero de homens e': %d", contadorM, contadorH);
    printf("\nA media da idade dos homens e': %d \nA maior idade e': %d \nA menor idade e': %d", mediaIdade, maiorIdade, menorIdade);
    return 0;
}
