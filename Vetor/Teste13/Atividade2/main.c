#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetorA[10], vetorB[10], vetorC[20], x = 0, y = 0;


    while(x < 10){
        printf("\nDigite um valor para o vetor A: ");
        scanf("%d", &vetorA);
        x++;
    }

    while(y < 10){
        printf("\nDigite um valor para o vetor B: ");
        scanf("%d", &vetorB);
        y++;
    }

    for(int i = 0; i<20; i++){
        if(vetorC[i]%2 == 0){
            vetorC[i] = vetorA[i];
        }
        else{
            vetorC[i] = vetorB[i];
        }
    }



        for(int i = 0; i<20; i++){

            printf("\nVetor c: [%d] - %d", i, vetorC[i]);

    }
    printf("Hello world!\n");
    return 0;
}
