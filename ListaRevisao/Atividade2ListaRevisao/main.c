#include <stdio.h>
#include <stdlib.h>

int main()
{
    int serie[10], somaPar = 0, somaImpar =0;

    serie[0] = 2;
    serie[1] = 5;
    serie[2] = 7;
    serie[3] = 8;
    serie[4] = 4;
    serie[5] = 12;
    serie[6] = 3;
    serie[7] = 9;
    serie[8] = 6;
    serie[9] = 15;

    for(int i =0; i<10; i++){
        if(serie[i]%2 == 0)
            somaPar+=serie[i];
        else
            somaImpar+=serie[i];
    }
    printf("A soma de pares e': %d \nA soma de impares e': %d", somaPar, somaImpar);
    return 0;
}
