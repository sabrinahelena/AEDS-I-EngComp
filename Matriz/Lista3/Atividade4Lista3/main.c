#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matrizEscola[10][3], mediaProva, mediaTrabalho;


    //Matriz
    for(int i =0; i<10; i++){
        for(int j=0; j<3; j++){
            if(j == 0){
                printf("\nDigite a media da [%d] prova, de 0 a 70: ", i);
                scanf("%d", &mediaProva);
                if(mediaProva >= 0 && mediaProva<=70){
                    matrizEscola[i][0] = mediaProva;
                }
                else{
                    matrizEscola[i][0] = 0;
                }
            }
            else if(j == 1){
                printf("\nDigite a media do [%d] trabalho, de 0 a 30: ", i);
                scanf("%d", &mediaTrabalho);
                if(mediaTrabalho >= 0 && mediaTrabalho<=30){
                    matrizEscola[i][1] = mediaTrabalho;
                }
                else{
                    matrizEscola[i][1] = 0;
                }
            }
            else if(j==2){
                matrizEscola[i][2] = matrizEscola[i][0] + matrizEscola[i][1];
            }
        }
    }

    //Impressao da matriz
    printf("\n MATRIZ ESCOLAR: \n");

    for(int i =0; i<10; i++){
        for(int j=0; j<3; j++){
            printf("   %d", matrizEscola[i][j]);
        }
        printf("\n");
    }



    //Leitura da maior nota final
    int maiorNotaFinal = matrizEscola[0][2];

    for(int i =0; i<10; i++){
            if(matrizEscola[i][2] > maiorNotaFinal){
                maiorNotaFinal = matrizEscola[i][2];
            }
    }


    printf("\n MAIOR NOTA FINAL \n");
    for(int i =0; i<10; i++){
            if(matrizEscola[i][2] == maiorNotaFinal){
                printf("\nA maior nota final e': %d e foi o aluno de numero [%d]. ", maiorNotaFinal, i);
            }
    }

    printf("\n ALUNOS REPROVADOS \n");
    for(int i =0; i<10; i++){
            if(matrizEscola[i][2] < 60){
                printf("\nO aluno [%d] foi reprovado pois sua nota foi %d, abaixo de 60. ", i, matrizEscola[i][2]);
            }
    }




    return 0;
}
