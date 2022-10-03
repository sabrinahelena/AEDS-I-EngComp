#include <stdio.h>
#include <stdlib.h>

int verificarTriangulo(int l1, int l2, int l3)
{

    if(l1 == l2 && l1 == l3 && l3 == l2)
    {
        return 1;
    }
    else if(l1 == l2|| l1 == l3 || l3 == l2)
    {
        return 2;
    }
    else
    {
        return 3;
    }

}

int main()
{
    int x, y, z, somaXY, somaXZ, somaYZ, trianguloVerificado;

    printf("Digite o valor do primeiro lado do triangulo: \nX: ");
    scanf("%d", &x);
    printf("\nDigite o valor do segundo lado do triangulo: \nY: ");
    scanf("%d", &y);
    printf("\nDigite o valor do terceiro lado do triangulo: \nZ: ");
    scanf("%d", &z);
    somaXY = x + y;
    somaXZ = x + z;
    somaYZ = z + y;

    if( x <= somaYZ && y<= somaXZ && z<= somaXY)
    {
        trianguloVerificado = verificarTriangulo(x,y,z);
        if(trianguloVerificado == 1)
        {
            printf("\nE um triangulo equilatero. ");

        }
        else if(trianguloVerificado == 2)
        {
            printf("\nE um triangulo isosceles. ");

        }
        else
        {
            printf("\nTriangulo escaleno. ");
        }
    }
    return 0;
}
