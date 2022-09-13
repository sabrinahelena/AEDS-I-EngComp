#include <stdio.h>
#include <stdlib.h>

/*
Prefeitura da cidade fez pesquisa entre habitantes, coletando dados sobre
salario e numero de filhos de cada habitante.

MEDIA SALARIO ?
MEDIA NUMERO FILHOS ?
MAIOR SALARIO ?
PERCENTUAL DE PESSOAS COM SALARIO ATE 100 REAIS

*/

int main()
{
    float x = 1, contadorSalarioAte100 = 0, contadorHabitanteR = 0, contadorSalario = 0;
    float salario, numeroFilhos, maiorSalario, somaSalario, somaFilhos, mediaFilhos, mediaSalario, percentualPessoasMenosDe100;

    while(x == 1){
        printf("Qual e' o seu salario?: ");
        scanf("%f", &salario);
        if(salario < 0){
            x = 2;
        }
        else{
        printf("\nQual o numero de filhos que voce tem?: ");
        scanf("%f", &numeroFilhos);

        if(x == 1){ //definindo maior salario como o primeiro do loop
            maiorSalario = salario;
        }

        if(salario > maiorSalario){
            maiorSalario = salario;
        }

        if(salario <= 100){
            contadorSalarioAte100++;
        }
        somaSalario+= salario;
        somaFilhos += numeroFilhos;
        contadorHabitanteR++;
        contadorSalario++;
        }


    }


    mediaFilhos = somaFilhos/(contadorHabitanteR);
    mediaSalario = somaSalario/(contadorSalario);
    percentualPessoasMenosDe100 = ((contadorSalarioAte100 * 100) / contadorHabitanteR);
    printf("\nA media do salario da populaçao e': %.2f \nA media do numero de filhos e': %.2f \nO maior salario e': %.2f \nO percental de pessoas com salario ate R$ 100.00 e': %.2f percento", mediaSalario, mediaFilhos, maiorSalario, percentualPessoasMenosDe100);
    return 0;
}
