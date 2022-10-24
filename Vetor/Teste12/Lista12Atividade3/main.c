#include <stdio.h>
#include <stdlib.h>

float CalcularMedia(float soma)
{
    return soma/7;
}

int main()
{
    int notasAED[7], notasCalc[7], maiorNotaC, maiorNotaAEDS, menorNotaC, menorNotaAEDS, somaNotaC = 0, somaNotaAlg= 0, mediaC, mediaA;
    int genero[7];

    for(int i = 0; i<7; i++)
    {
        printf("\nDigite a sua %d nota em AEDs: ", i);
        scanf("%d", &notasAED[i]);
        printf("\nDigite a sua %d nota em Calculo: ", i);
        scanf("%d", &notasCalc[i]);
        somaNotaC += notasCalc[i];
        somaNotaAlg += notasAED[i];
        printf("\nDigite o seu genero, sendo \n1 - Masculino \n2 - Feminino ");
        scanf("%d", &genero[i]);

        if(i == 0)
        {
            maiorNotaAEDS = notasAED[i];
            menorNotaAEDS = notasAED[i];
        }
        if(notasAED[i] > maiorNotaAEDS)
        {
            maiorNotaAEDS = notasAED[i];
        }
        else if (notasAED[i] < menorNotaAEDS)
        {
            menorNotaAEDS = notasAED[i];
        }
    }

    for(int i = 0; i<7; i++)
    {
        if(i == 0)
        {
            maiorNotaC = notasCalc[i];
            menorNotaC = notasCalc[i];
        }
        if(notasCalc[i] > maiorNotaC)
        {
            maiorNotaC = notasCalc[i];
        }
        else if(notasCalc[i] < menorNotaC)
        {
            menorNotaC = notasCalc[i];
        }

    }

    mediaC = CalcularMedia(somaNotaC);
    mediaA = CalcularMedia(somaNotaAlg);

    for(int i = 0; i<7; i++)
    {
        if(genero[i] == 1)
        {
            printf("\nAs notas de calculo de homens e': %d", notasCalc[i]);
        }
        else if(genero[i] == 2)
        {
            printf("\nAs notas de AEDs das mulheres e': %d", notasAED[i]);
        }
    }

    printf("\nA media da turma em AEDs foi: %d \nA media da turma em calculo foi: %d \nA maior nota em AEDs foi: %d \nA menor nota em calculo foi: %d", mediaA, mediaC, maiorNotaAEDS, menorNotaC);
    return 0;
}
