#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main() {

    int num, i, j;

    do {
      printf("Insira um numero inteiro entre 1 e 40: ");
      scanf("%d", &num);
    } while (num < 1 || num > 40);

    for(i=1; i<=num; i++)
    {
        // Logic to print numbers
        for(j=1; j<=i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}
