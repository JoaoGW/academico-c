#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Armazenamento dos Valores
    float carros = 0;
    float casas = -1;
    float dinheiro = 0;
    float soma = 0;
    float multa = 12.89;

    do{
        printf("Quantos Carros ha nesta residencia?");
        scanf("%f", &carros);
            if(carros > 2 && carros !=999)
                soma = soma + (carros - 2);
                casas = casas + 1;
    }while (carros !=999);

    dinheiro = soma * multa;
    printf("A Multa Mensal desta Residência sera de: %f \n", dinheiro);
    printf("A Quantidade de Casas e de: %f", casas);

    return 0;
}
