#include <stdio.h>
#include <stdlib.h>

int main()
{
    float cidadeA = 800000000; //habitantes
    float cidadeB = 65000000; //habitantes
    float taxaCrescimentoA = 1.5, taxaCrescimentoB = 3.0;
    int contadorAnos = 0;
    while(cidadeB < cidadeA){
        cidadeA += (cidadeA * (taxaCrescimentoA/100));
        cidadeB += (cidadeB * (taxaCrescimentoB/100));
        contadorAnos++;

        printf("\n %d : Cidade A: %.0f - Cidade B: %.0f", contadorAnos, cidadeA, cidadeB);
    }
    printf("\n\nA cidade B atingiu a cidade A em: %d anos, considerando que no final desses anos, a cidade A ficou com %.0f habitantes e a cidade B %.0f habitantes", contadorAnos, cidadeA, cidadeB);
    return 0;
}
