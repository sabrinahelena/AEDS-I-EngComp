#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 1, voto, contadorVotoC1 = 0, contadorVotoC2 = 0, contadorVotoC3 = 0, contadorVotoC4 = 0, contadorVotoB = 0, contadorVotoN = 0;

    while(x == 1)
    {
        printf("Digite seu voto: \n1 - Cadidato Joao \n2 - Candidato Marcos \n3 - Candidata Luana \n4 - Candidata Sabrina \n5 - Voto nulo \n6 - Voto em branco \nVOTO: ");
        scanf("%d", &voto);

        switch(voto)
        {
        case 1:
            contadorVotoC1++;
            break;
        case 2:
            contadorVotoC2++;
            break;
        case 3:
            contadorVotoC3++;
            break;
        case 4:
            contadorVotoC4++;
            break;
        case 5:
            contadorVotoB++;
            break;
        case 6:
            contadorVotoN++;
            break;
        case 0:
            x = 0;
            break;
        default:
            printf("\nVoto invalido. ");
            break;
        }


    }

    printf("\nA quantidade de votos para o candidato 1 (Joao) foi: %d \nA quantidade de votos para o candidado 2 (Marcos) foi: %d \nA quantidade de votos para a candidata 3 (Luana) foi: %d \nA quantidade de votos para a candidata 4 (Sabrina) foi: %d \nA quantidade de votos em branco foi: %d \nA quantidade de votos em nulo foi: %d ", contadorVotoC1, contadorVotoC2, contadorVotoC3, contadorVotoC4, contadorVotoB, contadorVotoN);
    return 0;
}
