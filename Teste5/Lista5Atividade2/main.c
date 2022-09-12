#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 1, tipoConsumidor, contResidencia = 0, contComercio = 0, contTotal = 0;
    float consumoEnergia, somaResidencia = 0, somaComercio = 0, mediaR, mediaC, somaTotal = 0, mediaT;

    while(x == 1)
    {
        printf("Qual e' o tipo do consumidor? \n1 - Residencia \n2 -  Comercio \n");
        scanf("%d", &tipoConsumidor);
        printf("\nQual e' o consumo de energia eletrica? ");
        scanf("%f", &consumoEnergia);

        if(tipoConsumidor == 1){
            contResidencia++;
            somaResidencia += consumoEnergia;
        }
        else{
            contComercio++;
            somaComercio += consumoEnergia;
        }

        somaTotal += consumoEnergia;
        contTotal++;

        printf("\nDeseja continuar ? Digite 1 para sim e 2 para nao. ");
        scanf("%d", &x);

    }

    mediaR = somaResidencia/contResidencia;
    mediaC = somaComercio/contComercio;
    mediaT = somaTotal/contTotal;
    printf("\nA quantidade de consumidores do tipo residencia e': %d \nA quantidade de consumidores do tipo comercio e': %d \nA media de consumo das residencias e': %.2f \nA media de consumo do comercio e': %.2f \nA media total de consumo e': %.2f", contResidencia, contComercio, mediaR, mediaC, mediaT);
    return 0;
}
