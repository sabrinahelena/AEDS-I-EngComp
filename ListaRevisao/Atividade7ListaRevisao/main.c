#include <stdio.h>
#include <stdlib.h>
float ConversorCelsiusFahrenheit(float temperatura)
{

    return (1.8 * temperatura) + 32;
}


int main()
{
    float temperaturasCelsius[10], temperaturasFahrenheit[10], somaTempC = 0, mediaTempC;

    for(int i = 0; i<10; i++)
    {
        printf("\nDigite a temperatura do dia %d em graus celsius: ", i + 1);
        scanf("%f", &temperaturasCelsius[i]);
        somaTempC+= temperaturasCelsius[i];

    }

    //a média das temperaturas do vetor A;

    mediaTempC = somaTempC/10;


    for(int i = 0; i<10; i++)
    {
        temperaturasFahrenheit[i] = ConversorCelsiusFahrenheit(temperaturasCelsius[i]);

    }

    //a maior e a menor temperatura de A e suas posições no vetor.
    float maiorTempC = temperaturasCelsius[0], menorTempC = temperaturasCelsius[0];
    for(int i = 0; i<10; i++)
    {
        if(temperaturasCelsius[i] > maiorTempC){
            maiorTempC = temperaturasCelsius[i];
        }
        else if(temperaturasCelsius[i] < menorTempC){
            menorTempC = temperaturasCelsius[i];
        }
    }

    printf("\nVETOR A: \n");
    for(int i = 0; i<10; i++)
    {
        printf("\n %.2f *C", temperaturasCelsius[i]);
    }

    printf("\nVETOR B: \n");
    for(int i = 0; i<10; i++)
    {
        printf("\n %.2f *F", temperaturasFahrenheit[i]);
    }

    //todas as temperaturas do vetor A que estão abaixo da média;

    printf("\nMEDIA: %.2f\n", mediaTempC);
    for(int i = 0; i<10; i++)
    {
        if(temperaturasCelsius[i] < mediaTempC){
            printf("\nA temperatura %.2f esta abaixo da media (%.2f). ", temperaturasCelsius[i], mediaTempC);
        }
    }

    //a maior e a menor temperatura de A e suas posições no vetor.
    for(int i = 0; i<10; i++)
    {
        if(temperaturasCelsius[i] == maiorTempC){
            printf("\nA temperatura %.2f e' a maior medida, e esta localizada na posicao [%d].  ", temperaturasCelsius[i], i);
        }
        else if(temperaturasCelsius[i] == menorTempC){
            printf("\nA temperatura %.2f e' a menor medida, e esta localizada na posicao [%d].  ", temperaturasCelsius[i], i);

        }
    }


    return 0;
}
