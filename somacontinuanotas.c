#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Armazenamento dos Dados
    float nota = 0;
    float soma = 0;
    float media = 0;
    float n = -1;

    //Insira a nota
    do {
        printf("Informe a Nota:");
        scanf("%f", &nota);
        if (nota != -1)
            soma = soma + nota;
            n = n + 1;
    }while (nota != -1);

    media = soma / n;
    printf("A sua media foi de %f", media);

    return 0;
}
