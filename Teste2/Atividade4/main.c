#include <stdio.h>
#include <stdlib.h>

int main()
{
    float t1,t2,t3,media;
    printf("Digite a primeira temperatura medida do dia: ");
    scanf("%f", &t1);
    printf("Digite a segunda temperatura medida do dia: ");
    scanf("%f", &t2);
    printf("Digite a terceira temperatura medida do dia: ");
    scanf("%f", &t3);

    media = (t1+t2+t3)/3;

    if(media <= 10){
        printf("\nMuito frio! \nMedia das temperaturas medidas: %.2f", media);
    }
    else if(media >10 && media<=20){
        printf("\nFrio!  \nMedia das temperaturas medidas: %.2f", media);
    }
    else if(media >20 && media<=30){
        printf("\nQuente! \nMedia das temperaturas medidas: %.2f", media);
    }
    else{
        printf("\nMuito quente! \nMedia das temperaturas medidas: %.2f", media);
    }
}
