#include <stdio.h>
#include <stdlib.h>

int main()
{
    int genero[5], idade[5], estadoCivil[5], contA = 0, contB = 0, contC = 0, contD = 0;

    for(int i = 0; i<5; i++)
    {
        printf("\nDigite o seu genero: \n1 - Masculino \n2 - Feminino \nGENERO: ");
        scanf("%d", &genero[i]);
        printf("\nDigite a sua idade: ");
        scanf("%d", &idade[i]);
        printf("\nDigite o seu estado civil: \n1 - Casado \n2 - Solteiro ");
        scanf("%d", &estadoCivil[i]);

    }

    for(int i = 0; i<5; i++)
    {
        if(idade[i] > 30 && estadoCivil[i] == 2)
        {
            contA++;
            printf("\nO genero da pessoa com mais de 30 anos solteira e': %d ", genero[i]);
        }
        else if(idade[i] >= 20 && idade[i]<=30 && estadoCivil == 1)
        {
            contB++;
            printf("\nO genero da pessoa com idade entre 20 e 30 e casada e': %d", genero[i]);
        }

    }

    for(int i = 0; i<5; i++)
    {
        if(idade[i] < 35 && genero[i] == 2 && estadoCivil[i] == 2)
        {
            contC++;
        }
        else if(estadoCivil == 1 && idade[i] > 20 && idade[i]<30)
        {
            contD++;
        }
    }

    printf("\nA quantidade de pessoas com idade acima de trinta e': %d \nA quantidade de pessoas com idade entre 20 e 30 e casada e': %d \nA quantidade de mulheres com menos de 30 anos solteiras e': %d \nA quantidade de homens casados com idade entre 20 e 30 e': %d", contA, contB, contC, contD);
    return 0;
}
