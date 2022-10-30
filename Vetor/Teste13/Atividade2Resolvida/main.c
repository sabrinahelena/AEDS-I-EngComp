#include <stdlib.h>
#include <stdio.h>


int main(void)
{
    int vet1[10], vet2[10], vet3[20];
    for (int i = 0; i < 10; i++)
    {
        printf("\nDigite um valor para o vetor A na %d posicao: ", i + 1);
        scanf("%i", &vet1[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("\nDigite um valor para o vetor B na %d posicao: ", i + 1);
        scanf("%i", &vet2[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        vet3[i*2] = vet1[i];
    }
    for (int i = 0; i < 10; i++)
    {
        vet3[i*2+1] = vet2[i];
    }
    printf("Vetor A: ");
    for (int i = 0; i < 10; i++)
    {
        printf("%i ", vet1[i]);
    }
    printf("\n");
    printf("Vetor B: ");
    for (int i = 0; i < 10; i++)
    {
        printf("%i ", vet2[i]);
    }
    printf("\n");
    printf("Vetor C: ");
    for (int i = 0; i < 20; i++)
    {
        printf("%i ", vet3[i]);
    }
    return 0;
}
