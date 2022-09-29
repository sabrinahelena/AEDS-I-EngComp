#include <stdio.h>
#include <stdlib.h>


float calcularMediaPeso(float peso, float contador){
float media;

media = peso/contador;

return media;
}

int main()
{
    int genero;
    float somaPesoMulher=0, somaPesoHomem = 0, contMulheres = 0, contHomens = 0, peso;
    for(int i = 1; i<=4; i++){
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

    float resultadoM = calcularMediaPeso(somaPesoMulher, contMulheres);
    float resultadoH =calcularMediaPeso(somaPesoHomem, contHomens);
    printf("\nPara mulheres : %.2f", resultadoM);
    printf("\nPara homens : %.2f", resultadoH);


    return 0;
}
