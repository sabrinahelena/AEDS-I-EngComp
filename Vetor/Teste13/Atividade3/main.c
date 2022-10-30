#include <stdio.h>
#include <stdlib.h>

float CalcularMedia(float s)
{
    return s/7; //7 dias
}
int main()
{

    float temperaturas[7],temp, somaT = 0, maiorT, menorT, media;
    int contDiasInferiores = 0, contDiasSuperiores = 0;

    for(int i = 0; i<7; i++)
    {
        printf("\nDigite a temperatura do %d dia: ", i + 1);
        scanf("%f", &temp);

        if(temp > 5 && temp<40)
        {
            temperaturas[i] = temp;
            somaT +=temp;
        }
        else
        {
            temperaturas[i] = 0;
        }
    }

    for(int i = 0; i<7; i++)
    {
        if(i == 0)
        {
            maiorT = temperaturas[i];
            menorT = temperaturas[i];
        }

        if(temperaturas[i] > maiorT)
        {
            maiorT = temperaturas[i];
        }
        else if(temperaturas[i] < menorT)
        {
            menorT = temperaturas[i];
        }
    }


    //for(int i = 0; i<7; i++){
    //    printf("\nVetorTemp[%d] = %.2f ", i, temperaturas[i]);
    //}

    media = CalcularMedia(somaT);

    printf("\nA media de temperaturas medidas durante os 7 dias e': %.2f ", media);

    printf("\nMaior temp: %.2f \nMenor temp: %.2f", maiorT, menorT);

    for(int i = 0; i<7; i++)
    {
        if(temperaturas[i]<media)
        {
            contDiasInferiores++;
            printf("\nAs temperaturas inferiores a media foi: %.2f ", temperaturas[i]);
        }
        else if(temperaturas[i]>media)
        {
            contDiasSuperiores++;
            printf("\nAs temperaturas superiores a media foi: %.2f ", temperaturas[i]);
        }
    }

    printf("\nA quantidade de dias que a temperatura ficou inferior a media foi: %d \nA quantidade de dias que a temperatura ficou superior a media foi: %d ", contDiasInferiores, contDiasSuperiores);

    return 0;
}
