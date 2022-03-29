#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Armazenamento dos valores em float
    float peso;
    float altura;
    float imc;

    //Solicita��o do Peso em Quilogramas do Uusu�rio
    printf("Insira o seu Peso em Quilogramas:");
    scanf("%f",&peso);

    //Solicita��o da Altura em Metros do Usu�rio
    printf("Insira a sua Altura em Metros:");
    scanf("%f",&altura);

    //C�lculo do IMC
    imc = peso / (altura * altura);

    //Apresenta��o dos Resultados
    if (imc < 18.5)
        printf("O seu IMC � considerado Peso Baixo");

    else if (imc >= 18.5 && imc <= 24.9)
        printf ("O seu IMC � considerado Peso Normal");

    else
        printf ("O seu IMC � considerado Sobrepeso");

    return 0;
}
