#include <stdio.h>
#include <stdlib.h>

int main (){

    //Armazenamento dos Valores
    float operando1;
    float operando2;
    float resultado = 0;

    int opcao;

    //Solicita��o dos Dados ao Usu�rio
    printf("Informe o Primeiro Operando:");
    scanf("%f", &operando1);

    printf("Informe o Segundo Operando");
    scanf("%f", &operando2);

    //Sele��o das Op��es
    printf("Opcao 1(+),2(-),4(/),3(*):");
    scanf("%d", &opcao);

    //Condicionais de acordo com as op��es
    if(opcao == 1)
        resultado = operando1 + operando2;
    else
        if(opcao == 2)
            resultado = operando1 - operando2;
    else
        if(opcao == 3)
            resultado = operando1 * operando2;
    else
        if(operando2 > 0)
            resultado = operando1 / operando2;
        else
            printf("Divisao por Zero e Impossivel!\n");
    printf("O Resultado da Operacao e: %f", resultado);


    return(0);
}
