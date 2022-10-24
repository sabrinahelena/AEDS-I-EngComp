#include <stdio.h>
#include <stdlib.h>


float CalcularMedia(float s, float c){
return s/c;
}


int main()
{

    float consumo[8], maiorConsumo, menorConsumo, somaConsumoResidencial = 0, mediaConsumoResidencial;
    int tipoConsumidor[8], quantCIndustrial = 0, quantCComercial = 0, quantCResidencial = 0;

    for(int i = 0; i<8; i++)  //for para leitura de dados
    {
        printf("\nQual tipo de consumidor voce e'? \n1 - Residencial \n2 - Comercial \n3 - Industrial \nTIPO: ");
        scanf("%d", &tipoConsumidor[i]);
        printf("\nQual seu consumo em kWh? \nCONSUMO: ");
        scanf("%f", &consumo[i]);
        if(tipoConsumidor[i] == 1)
        {
            quantCResidencial++;
            somaConsumoResidencial+= consumo[i];
        }
        else if(tipoConsumidor[i] == 2)
        {
            quantCComercial++;
        }
        else if(tipoConsumidor[i] == 3)
        {
            quantCIndustrial++;
        }
    }

    for(int i = 0; i<8; i++)  //for verificar maior e menor
    {
        if(i == 0)
        {
            maiorConsumo = consumo[i];
            menorConsumo = consumo[i];
        }
        else if(consumo[i] > maiorConsumo)
        {
            maiorConsumo = consumo[i];
        }
        else if(consumo[i] < menorConsumo)
        {
            menorConsumo = consumo[i];
        }
    }
    for(int i = 0; i<8; i++)  //for verificar maior e menor e tipo do consumidor
    {

        if(consumo[i] == maiorConsumo)
        {
            printf("\nO maior consumo e': %.2f na posicao [%d] do vetor de consumo, e pertence ao tipo de consumidor %d. ", consumo[i], i, tipoConsumidor[i]);
        }
        else if(consumo[i] == menorConsumo)
        {
            printf("\nO menor consumo e': %.2f na posicao [%d] do vetor de consumo, e pertence ao tipo de consumidor %d. ", consumo[i], i, tipoConsumidor[i]);

        }

    }

    for(int i = 0; i<8; i++)  //traz todos os consumos do tipo industrial
    {
        if(tipoConsumidor[i] == 3){
            printf("\nConsumo: %.2f do tipo industrial. ", consumo[i]);
        }

    }


    for(int i = 0; i<8; i++)  //traz todos os consumos comerciais
    {
        if(tipoConsumidor[i] == 2){
            printf("\nConsumo: %.2f do tipo comercial. ", consumo[i]);
        }
    }

    mediaConsumoResidencial = CalcularMedia(somaConsumoResidencial, quantCResidencial);

    printf("\nA quantidade de consumidores do tipo 1 - Residencial e': %d \nA quantidade de consumidores do tipo 2 - Comercial e': %d \nA quantidade de consumidores do tipo 3 - Industrial e': %d", quantCResidencial, quantCComercial, quantCIndustrial);
    printf("\nA media dos consumos residencias e': %.2f ", mediaConsumoResidencial);
    return 0;
}
