#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;

    printf("\n Digite um numero inteiro: ");
    scanf("%d", &num);

    if (num%2==0) {
        printf("\n O Numero digitado e par!\n");
            if (num/2%2==0)
                printf("\n A Sua Metade e par!\n");
            else
                printf("\n A Sua Metade e Impar!\n");
    }else{
        printf("\n O Numero Digitado e Impar!\n");
    }

    return 0;
}
