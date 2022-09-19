#include <stdio.h>
#include <stdlib.h>

/*
Coleta de dados para prefeitura: Salario e numero de filhos
- Media do numero de filhos
- Media do salario da populacao
- Maior salario
- Percentual de pessoas com salario ate 1000

O programa finaliza se entrar com salario negativo.

*/

void ColetaDados()
{
    float percentual, salario, maiorSalario, somaSalario = 0, contHabitantes = 0, mediaSalario, contSalarioAte1000 = 0;
    float quantFilhos,  somaFilhos = 0, mediaFilhos;
    int x = 1;
    while(x == 1)
    {
        printf("Digite o seu salario em reais: \n R$ ");
        scanf("%f", &salario);
        printf("\nQual a quantidade de filhos que voce tem: ");
        scanf("%f", &quantFilhos);
        somaFilhos += quantFilhos;
        somaSalario += salario;

        if(x == 1){
            maiorSalario = salario;
        }

        if(salario > maiorSalario){
            maiorSalario = salario;
        }
        if(salario < 1000){
            contSalarioAte1000++;
        }


        contHabitantes++;

        printf("\nDeseja continuar ? \n1 - Sim \n2 - Nao \n OPCAO: ");
        scanf("%d", &x);


    }

    mediaFilhos = somaFilhos/contHabitantes;
    mediaSalario = somaSalario/contHabitantes;
    percentual = ((contSalarioAte1000 * 100) / contHabitantes);

    printf("\nA media do numero de filhos e' %.2f \nA media dos salarios e':  %.2f\nO maior salario e': %.2f \nO percentual de pessoas com salario ate 1000 reais e': %.2f", mediaFilhos, mediaSalario, maiorSalario, percentual);



}
int main()
{
    ColetaDados();
    return 0;
}
