#include <stdio.h>
#include <stdlib.h>

/*
Programa que le 6 lançamentos de cara ou coroa de uma moeda.
- Mostra a quantidade de caras e a quantidade de coroas
- A posição no vetor onde dá cara
- O resultado de maior ocorrencia
*/

void Vencedor(int contadorCara, int contadorCoroa)
{

    if(contadorCara > contadorCoroa)
    {
        printf("\nCara venceu!");
    }
    else if (contadorCoroa > contadorCara)
    {
        printf("\nCoroa venceu! ");
    }
    else
    {
        printf("\nEmpate! ");
    }
}

int main()
{
    int moeda[6], contCara = 0, contCoroa = 0;

    for(int i = 0; i < 6; i++)
    {
        printf("\nDigite o %d lancamento: \n1- Cara \n2 - Coroa \nLANCAMENTO: ", i + 1); //1 - Cara 2 - Coroa
        scanf("%d", &moeda[i]);
        if(moeda[i] == 1)
        {
            contCara++;
        }
        else
        {
            contCoroa++;
        }
    }

    for(int i = 0; i < 6; i++)
    {
        if(moeda[i] == 1)
        {
            printf("\nmoeda[%d] = cara", i);
        }
    }
    printf("\nO resultado de maior ocorrencia foi: ");
    Vencedor(contCara, contCoroa);
    return 0;
}
