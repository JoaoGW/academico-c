#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Armazenamento dos valores em tipo float
    float P1; //Nota da Prova 1
    float P2; //Nota da Prova 2
    float A1; //Nota da Atividade 1
    float A2; //Nota da Atividade 2
    float N1; //calculo do N1 = (3xP1 + 2xA1)/5
    float N2; //calculo do N2 = (3xP2 + 2xA2)/5
    float MF; //calculo final da media final (N1+N2)/2

    //Solicitaçao ao usuario para inserir a nota da Prova 1
    printf("Insira a sua nota da Prova 1:");
    scanf("%f",&P1);

    //Solicitaçao ao usuario para inserir a nota da Prova 2
    printf("Insira a sua nota da Prova 2:");
    scanf("%f",&P2);

    //Solicitaçao ao usuario para inserir a nota da Atividade 1
    printf("Insira a sua nota da Atividade 1:");
    scanf("%f",&A1);

    //Solicitaçao ao usuario para inserir a nota da Atividade 2
    printf("Insira a sua nota da Atividade 2:");
    scanf("%f",&A2);


    //Calculo da Nota 1 e da Nota 2
    N1 = (3*P1+2*A1)/5;
    N2 = (3*P2+2*A2)/5;

    //Calculo da Media Final da Nota do Aluno
    MF = (N1+N2)/2;

    //Exibir na Tela a Nota final do Aluno
    printf("O Resultado da sua Media Final e de: %f",MF);

    return 0;
}
