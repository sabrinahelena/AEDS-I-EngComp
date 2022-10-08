#include <stdio.h>
#include <stdlib.h>


/*
    pesquisa da CEMIG, a respeito do comportamento de consumo em relação a uma região da cidade.
    Tipos de consumidores: 1 - Industrial, 2 - Comercial e 3 - Residencial.
    De cada consumidor deve-se ler consumo e KWh e tipo.
    Ao termino mostrar a quantidade de consumidores de cada tipo,
    a media de consumos de cada tipo,
    o maior e menor consumo verificado,
    a media geral do consumo e o total de consumidores.
*/

int CalcMediaConsumo(int soma, int contador)
{
    int media;
    media = soma/contador;
    return media;

}

int main()
{
    int tipoConsumidor, contadorIndustrial = 0, contadorComercial = 0, contadorResidencial = 0, consumoKWh, maiorConsumo, menorConsumo, contadorTotal = 0;
    int x = 1, somaInd = 0, somaCom = 0, somaRes = 0, somaTotal = 0;
    int mediaInd, mediaCom, mediaRes, mediaGeral;


    while(x == 1)
    {
        printf("\nDigite o tipo de consumidor que voce e': \n1 - Industrial \n2 - Comercial \n3 - Residencial \n4 - Sair do loop \nTIPO: ");
        scanf("%d", &tipoConsumidor);
        if(tipoConsumidor != 1 && tipoConsumidor != 2 && tipoConsumidor != 3)
        {
            x = 0;
        }
        else
        {
            printf("\nDigite o seu consumo em KWh: \nCONSUMO: ");
            scanf("%d", &consumoKWh);
            somaTotal+= consumoKWh;
            contadorTotal++;

            if(contadorTotal == 1)
            {
                maiorConsumo = consumoKWh;
                menorConsumo = consumoKWh;
            }
            if(consumoKWh > maiorConsumo)
            {
                maiorConsumo = consumoKWh;
            }
            else if(consumoKWh < maiorConsumo)
            {
                menorConsumo = consumoKWh;

            }
        }

        switch(tipoConsumidor)
        {
        case 1:
            somaInd+= consumoKWh;
            contadorIndustrial++;

            break;
        case 2:
            somaCom+= consumoKWh;
            contadorComercial++;
            break;
        case 3:
            somaRes+= consumoKWh;
            contadorResidencial++;

            break;
        case 4:
            printf("\nObrigado pela contribuicao! ");
            break;
        default:
            printf("\nInvalido. ");
            break;

        }

    }

    mediaInd = CalcMediaConsumo(somaInd, contadorIndustrial);
    mediaCom = CalcMediaConsumo(somaCom, contadorComercial);
    mediaRes = CalcMediaConsumo(somaRes, contadorResidencial);
    mediaGeral = CalcMediaConsumo(somaTotal, contadorTotal);

    printf("\nTotal de consumidores: %d \nConsumidores tipo industrial: %d \nConsumidores tipo comercial: %d \nConsumidores tipo residencial: %d", contadorTotal, contadorIndustrial, contadorComercial, contadorResidencial);
    printf("\nMedia de consumidores total: %d \nMedia de consumidores industriais: %d \nMedia de consumidores comerciais: %d \nMedia de consumidores residenciais: %d ", mediaGeral, mediaInd, mediaCom, mediaRes);
    printf("\nMaior consumo: %d \nMenor consumo: %d", maiorConsumo, menorConsumo);
    return 0;
}
