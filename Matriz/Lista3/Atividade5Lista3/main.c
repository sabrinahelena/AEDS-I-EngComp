#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matriz[4][4];

    for(int i = 0; i<4; i++)
    {
        for(int j =0; j<4; j++)
        {
            if(i < 3 && j <3){
            printf("\nDigite os valores para a matriz[%d][%d] = ", i,j);
            scanf("%d", &matriz[i][j]);
            }
            if(j == 3)
            {
                matriz[i][3] = matriz[i][0] +matriz[i][1] + matriz[i][2];
            }
            else if(i == 3)
            {
                matriz[3][j] = matriz[0][j] +matriz[1][j] + matriz[2][j];
            }
        }
    }

    for(int i = 0; i<4; i++)
    {
        for(int j =0; j<4; j++)
        {
            printf("   %d", matriz[i][j]);

        }
        printf("\n");
    }
    return 0;
}
