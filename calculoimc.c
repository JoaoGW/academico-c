#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Armazenamento dos valores em float
    float peso;
    float altura;
    float imc;

    //Solicitação do Peso em Quilogramas do Uusuário
    printf("Insira o seu Peso em Quilogramas:");
    scanf("%f",&peso);

    //Solicitação da Altura em Metros do Usuário
    printf("Insira a sua Altura em Metros:");
    scanf("%f",&altura);

    //Cálculo do IMC
    imc = peso / (altura * altura);

    //Apresentação dos Resultados
    if (imc < 18.5)
        printf("O seu IMC é considerado Peso Baixo");

    else if (imc >= 18.5 && imc <= 24.9)
        printf ("O seu IMC é considerado Peso Normal");

    else
        printf ("O seu IMC é considerado Sobrepeso");

    return 0;
}
