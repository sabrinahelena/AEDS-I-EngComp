#include <stdio.h>
#include <stdlib.h>

int main()
{

    int x = 1, numPortas, respAuto, anoFabri, anoModel, numVeicQuatroPortas = 0, numVeicDuasPortModeloSup2020 = 0, numCarros = 0;
    int contadorGeral = 0;

    while(x == 1)
    {
        printf("Digite o numero de portas do seu automovel, 2 ou 4 portas: \nRESPOSTA: ");
        scanf("%d", &numPortas);
        if(numPortas != 2 && numPortas != 4)
        {
            printf("\nNumero de portas invalido. ");
            x = 2;
        }
        else
        {
            printf("\nO carro e' automatico? \n1 - SIM \n2 - NAO \nRESPOSTA: ");
            scanf("%d", &respAuto);
            printf("\nQual o ano de fabricacao? \nANO: ");
            scanf("%d", &anoFabri);
            printf("\nQual o ano do modelo? \nANO: ");
            scanf("%d", &anoModel);
            if(numPortas == 4 && respAuto == 1)
            {
                numVeicQuatroPortas++;
            }
            else if(anoModel > 2020 && numPortas == 2 && respAuto == 2)
            {
                numVeicDuasPortModeloSup2020++; //numero de veiculos com duas portas, modelo superior a 2020 e nao automatico.
            }
            else if(anoFabri >= 2015 && anoFabri <= 2022)
            {
                numCarros++;
            }

            contadorGeral++;
            printf("\nDeseja cadastrar outro carro? \n1 - SIM \n2 - NAO \nOPCAO: ");
            scanf("%d", &x);
        }






    }
    printf("\nO numero de carros de 4 portas e que sao automaticos e': %d \nA quantidade de veiculos cujo ano do modelo seja acima de 2020, possui duas portas e nao sao automaticos e': %d \nO total de veiculos fabricados entre 2015 e 2022 incluindo os dois anos: %d", numVeicQuatroPortas, numVeicDuasPortModeloSup2020, numCarros);
    printf("\nO numero total de veiculos: %d", contadorGeral);
    return 0;
}
