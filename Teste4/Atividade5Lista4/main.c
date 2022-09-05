#include <stdio.h>
#include <stdlib.h>

int main()
{
    int voto, /*sim =1/ nao = 2 */ genero; //mas=1 / fem=2
    int x = 1, contadorVotoSim = 0, contadorVotoNao = 0, contadorVMulheres = 0, contadorVHomens = 0; //grupo de 7 pessoas

    while(x <= 7){
        printf("\n***\nDigite o seu voto, 1 para SIM e 2 para NAO. ");
        scanf("%d", &voto);
        printf("\nDigite o seu genero, 1 para feminino e 2 para masculino: ");
        scanf("%d", &genero);

        switch(voto){
        case 1:
            contadorVotoSim++;
            break;
        case 2:
            contadorVotoNao++;
            break;
        default:
            printf("\nVoto invalido");
            break;
        }

        if(genero == 1 && voto == 1){
            contadorVMulheres++;
        }
        else if (genero == 2 && voto == 2){
            contadorVHomens++;
        }
        else{
            printf("Digite um genero valido");
        }

        x++;
    }
    printf("\nOcorrencia de SIM nos votos: %d \nOcorrencia de NAO nos votos: %d \nNumero de mulheres que responderam SIM: %d \nNumero de homens que responderam NAO: %d", contadorVotoSim, contadorVotoNao, contadorVMulheres, contadorVHomens);
    return 0;
}
