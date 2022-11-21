#include <stdio.h>
#include <stdlib.h>

int main()
{
    int serie[20], x =2, somaSerie= 0;

    for(int i = 0; i<20; i++){
        serie[i] = x;
        printf("\nserie[%d] = %d", i, x);
        x = x+3;
    }

    //Soma

    for(int i = 0; i<20; i++){
        somaSerie += serie[i];
        printf("\nSoma atual: %d", somaSerie);
    }
    printf("\nA soma e': %d", somaSerie);
    return 0;
}
