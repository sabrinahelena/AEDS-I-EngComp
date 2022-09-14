#include <stdio.h>
#include <stdlib.h>

int main()
{
    float C;
    for(float i = 50.0; i<=100.0; i = i + 5.0){
        C=((5.0/9.0)*(i - 32.0));
        printf("\nF: %.2f - C: %.2f", i, C);
    }
    printf("\nHello world!\n");
    return 0;
}
