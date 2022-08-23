#include <stdio.h>
#include <stdlib.h>

int CalcularIdade(int ano){
    return 2022-ano;
}

int main()
{
    int anoNascido,idade;

    printf("Em que ano voce nasceu? ");
    scanf("%d", &anoNascido);
    idade = CalcularIdade(anoNascido);

    if(idade <= 10){
        printf("\nVoce e' crianca pois sua idade e' %d.", idade);
    }
    else if(idade >10 && idade <= 17){
        printf("\nVoce e' adolescente pois sua idade e' %d.", idade);

    }
    else {
        printf("\nVoce e' adulto pois sua idade e' %d.", idade);
    }


}
