#include <stdio.h>
#include <stdlib.h>
//Ler genero masc=1 fem=2, e peso de 10 pessoas. Mostrar media do peso das mulheres e media do peso dos homens

void calcularMediaPeso(float peso, float contador){
float media;

media = peso/contador;

printf("\nA media de peso e': %.2f", media );
}

int main()
{
    int genero;
    float somaPesoMulher=0, somaPesoHomem = 0, contMulheres = 0, contHomens = 0, peso;
    for(int i = 1; i<=10; i++){
        printf("Digite o seu genero: \n1 - Masculino \n2 - Feminino \n");
        scanf("%d", &genero);
        printf("\nDigite o seu peso: \n");
        scanf("%f", &peso);

        if(genero == 2){
            somaPesoMulher+=peso;
            contMulheres++;
        }
        else{
            somaPesoHomem+=peso;
            contHomens++;
        }
    }
    printf("\nPara mulheres :");
    calcularMediaPeso(somaPesoMulher, contMulheres);
    printf("\nPara homens :");
    calcularMediaPeso(somaPesoHomem, contHomens);
    return 0;
}
