#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=0, genero, contMulheres=0, contHomens=0;
    float somaMedia = 0, media, peso;


    while(x < 5){
        printf("Digite o seu genero, sendo: \n1 - MULHER \n2 - HOMEM \n");
        scanf("%d", &genero);
        printf("\nDigite o seu peso: ");
        scanf("%f", &peso);
        somaMedia +=peso;

        if(genero == 1){
            contMulheres++;
        }
        else{
            contHomens++;
        }

        x++;
    }
    media = somaMedia/5;

    if(contMulheres>contHomens){
    printf("\nMulheres foram a maior quantidade. \nO numero de mulheres no grupo e': %d \nO numero de homens no grupo e': %d \nA media dos pesos e': %.2f", contMulheres, contHomens, media);

    }
    else if(contMulheres<contHomens){
    printf("\nHomens foram a maior quantidade. \nO numero de mulheres no grupo e': %d \nO numero de homens no grupo e': %d \nA media dos pesos e': %.2f", contMulheres, contHomens, media);

    }
    else{
    printf("\nHomens e mulheres tiveram a mesma quantidade. \nO numero de mulheres no grupo e': %d \nO numero de homens no grupo e': %d \nA media dos pesos e': %.2f", contMulheres, contHomens, media);

    }
    return 0;
}
