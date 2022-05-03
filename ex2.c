#include <stdio.h>
#include <stdio.h>

int main(void)
{
    int vetor[3];
    int x, i, total = 0;



    for (i = 0; i < 3; i++) //Este laço faz o scan de cada elemento do vetor//
    {
        printf("Digite um numero: \n");
        scanf("%d", &vetor[i]);

        if (vetor[i] % 2 == 0)
        {
          total = total + vetor[i];
        }

    }
    printf("A soma dos pares foi:%d\n", &total);

    printf("Concluido");
    return 0;
}
