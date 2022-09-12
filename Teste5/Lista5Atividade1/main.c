#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 1, moeda, contCara = 0, contCoroa = 0;

    while(x == 1){
        printf("Digite 1 para CARA e 2 para COROA: ");
        scanf("%d", &moeda);
        if(moeda == 1){
            contCara++;
        }
        else{
            contCoroa++;
        }
        printf("\nDeseja continuar? Digite 1 para SIM e 2 para NAO: ");
        scanf("%d", &x);
    }
    printf("\nQuantidade de vezes que foi cara: %d \nQuantidade de vezes que foi coroa: %d", contCara, contCoroa);
    return 0;
}
