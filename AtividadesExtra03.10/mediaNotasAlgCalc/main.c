#include <stdio.h>
#include <stdlib.h>

/* Le notas de calculo 1 e algoritmo 1 */

float media(float nota, float soma)
{

    return nota/soma;
}


int main()
{
    int x = 1, genero;
    float notaAlg, notaCalc, somaAlg = 0.0, somaCalc = 0.0, mediaAlg, mediaCalc, contadorMulheres = 0.0, contadorHomens = 0.0;

    while(x == 1)
    {
        printf("Ola aluno! Digite a sua nota em algoritmos I: \nNOTA: ");
        scanf("%f", &notaAlg);
        somaAlg+=notaAlg;
        printf("\nAgora digite sua nota em calculo I: \nNOTA: ");
        scanf("%f", &notaCalc);
        somaCalc+=notaCalc;

        printf("\nAgora digite o seu genero, sendo: \n1 - FEMININO \n2 - MASCULINO \nOPCAO: ");
        scanf("%d", &genero);
        if(genero == 1)
        {
            contadorMulheres++;
        }
        else
        {
            contadorHomens++;
        }

        printf("\nDeseja calcular de mais algum aluno? \n1 - SIM \n2 - NAO \nOPCAO: ");
        scanf("%d", &x);
        if(x == 2)
        {
            mediaAlg = media(somaAlg, contadorMulheres);
            mediaCalc = media(somaCalc, contadorHomens);

            printf("\nA media das meninas em algoritmo foi: %.2f", mediaAlg);
            printf("\nA media dos meninos em calculo foi: %.2f", mediaCalc);


        }

    }
    return 0;
}
