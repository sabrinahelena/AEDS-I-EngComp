#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=0, resultado, contCoroa = 0, contCara = 0;
    while(x<5){
        printf("Digite \n1 - COROA \n2 - CARA\n");
        scanf("%d", &resultado);
        if(resultado == 1){
            contCoroa++;
        }
        else if (resultado == 2){
            contCara++;
        }
        else{
            printf("\n1 ou 2 apenas\n");
        }
        x++;
    }


    if(contCara > contCoroa ){
        printf("\nMaior ocorrencia: CARA \n\nResultado: \nCara = %d \nCoroa = %d ", contCara, contCoroa);
    }
    else if(contCara < contCoroa){
        printf("\nMaior ocorrencia: COROA \n\nResultado: \nCara = %d \nCoroa = %d ", contCara, contCoroa);
    }
    else{
        printf("\nTiveram mesma quantidade de ocorrencia.");
    }
    return 0;
}
