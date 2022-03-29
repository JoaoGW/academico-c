#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Armazenamento dos Valores em Float
    float TF; //Valor da Temperatura em Fahrenheint
    float TC  = 32; //Valor da Subtra��o da F�rmula
    float AD = 1.8; //Valor da Divis�o da F�rmula
    float Celsius; //Valor Final em Celsius

    //Solicitando os valores em Celsius do Usu�rio
    printf("Insira o Valor da Temperatura em Fahrenheint:");
    scanf("%f",&TF);

    //F�rmula para obten��o dos valores em Celsius
    Celsius = (TF - TC)/ AD;

    //Apresenta��o da Temperatura em Celsius para o Uus�rio
    printf("De acordo com os valores inseridos, a temperatura em Celsius e de: %f \n", Celsius);

    if (Celsius <= 0)
        printf("O Estado deste Material e Solido");

    else if (Celsius > 0 && Celsius <= 99)
        printf("O Estado deste Material e Liquido");

    else
        printf("O Estado deste Material e Gasoso");

    return 0;
}
