#include <stdio.h>

int main() {
    int a[2][3], b[2][3], c[2][3], d[2][3], e[2][3];

    //Lendo a matriz A

    for(int i = 0; i<2; i++)
        for(int j = 0; j<3; j++){
            printf("\nEntre com o A[%d][%d] = ",i+1,j+1);
            scanf("%d", &a[i][j]);
        }

    printf("\nMATRIZ A: \n");
    for (int i=0; i<2; i++)
    {
        for (int j=0; j<3; j++)
        {
            printf ("    %d",a[i][j]);
        }
        printf ("\n");
    }
    printf ("\n\n");

    //Lendo a matriz B

    for(int i = 0; i<2; i++)
        for(int j = 0; j<3; j++){
            printf("\nDigite o valor para [%d][%d] no vetor B: ", i+1, j+1);
            scanf("   %d", &b[i][j]);
        }

    printf("\nMATRIZ B: \n");

    for(int i = 0; i<2; i++){
        for(int j = 0; j<3; j++){
            printf ("   %d",b[i][j]);
    }
        printf("\n");

    }
    printf ("\n\n");


    //Lendo matriz C
    for(int i = 0; i<2; i++)
        for(int j = 0; j<3; j++){
            c[i][j] = a[i][j] + b[i][j];
        }

    printf("\nMATRIZ C: \n");

    for(int i = 0; i<2; i++){
        for(int j = 0; j<3; j++){
            printf("   %d", c[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");

    //Lendo matriz D

    for(int i = 0; i<2; i++)
        for(int j = 0; j<3; j++){
            d[i][j] = ((2 * a[i][j]) - b[i][j]);
        }

    printf("\nMATRIZ D: \n");

    for(int i = 0; i<2; i++){
        for(int j = 0; j<3; j++){
            printf("   %d", d[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");

    //Lendo matriz E

    for(int i = 0; i<2; i++)
        for(int j = 0; j<3; j++){
            e[i][j] = (c[i][j] + (2 * d[i][j]));
        }

    printf("\nMATRIZ E: \n");

    for(int i = 0; i<2; i++){
        for(int j = 0; j<3; j++){
            printf("   %d", e[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");

    return 0;
}
