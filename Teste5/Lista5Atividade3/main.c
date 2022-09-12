    #include <stdio.h>
    #include <stdlib.h>

    int main()
    {
        int x = 1, contadorRepeticao = 0;
        float consumoAgua, consumoAguaMaior,consumoAguaMenor, somaConsumo = 0, mediaConsumo;

        while(x == 1){
        contadorRepeticao++;
        printf("Digite o consumo de agua da sua residencia em m3: \n");
        scanf("%f", &consumoAgua);

        if(contadorRepeticao == 1){
            consumoAguaMaior = consumoAgua;
            consumoAguaMenor = consumoAgua;
        }

        if(consumoAgua > consumoAguaMaior){
            consumoAguaMaior = consumoAgua;

        }
        else{
            consumoAguaMenor = consumoAgua;
        }
        somaConsumo+= consumoAgua;

        printf("\nDeseja continuar? 1 para sim 2 para nao: ");
        scanf("%d", &x);

        }

        mediaConsumo = somaConsumo/contadorRepeticao;

        printf("\nO numero de consumidores analisados foi de: %d \nA media do consumo total foi de: %.2f \nO maior consumo verificado foi de: %.2f \nO menor consumo verificado foi de: %.2f", contadorRepeticao, mediaConsumo, consumoAguaMaior, consumoAguaMenor);
        return 0;
    }
