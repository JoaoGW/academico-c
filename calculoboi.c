#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {

    //Armazenamento das Variáveis Peso e Quantidade de Bois
    float bois[100];
    float peso;
    int numBoi = 1;
    bool fim = false;
    float maiorPeso;
    float menorPeso;
    int j;
    int posMaior;
    int posMenor;

    //Repetição até o Usuário Decidir Interromper
    do {
        //User Moment
        printf("Insira o Peso do Boi: ");
        scanf("%f", &peso);
        if (peso > 0) {
            printf("O Peso Inserido foi de: %.2f kg Boi No %d\n", peso, numBoi);
            bois[numBoi] = peso;
            numBoi +=1;
            if(numBoi == 100) {
                fim = true;
            }
        }else{
            fim = true;
        }
    }
    while (!fim);

    if(numBoi > 1) {
        maiorPeso = bois[0];
        menorPeso = bois[0];
        for(j=1; j<numBoi; j++) {
            if(bois[j] > maiorPeso) {
                maiorPeso = bois[j];
                posMaior = j;
            }
            if(bois[j] < menorPeso) {
                menorPeso = bois[j];
                posMenor = j;
            }
        }
        printf("O Maior Peso %f kg esta na posicao %d\n", maiorPeso,posMaior);
        printf("O Menor Peso %f kg esta na posicao %d\n", menorPeso,posMenor);
    }

    return 0;
}
