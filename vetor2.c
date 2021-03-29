#include <stdio.h>
#include <stdlib.h>
#include <locale.h>



int main()
{
    setlocale(LC_ALL,"");
 
    
    int vetor[8], i = 0, soma, cont = 0;


    printf("Digite um valor X:\n");
    scanf("%d", &vetor[6]);
    printf("Digite um valor Y:\n");
    scanf("%d", &vetor[7]);
     system("cls");

    for (i = 0; i < 6; i++)
    {
       printf("Digite um valor para o vetor:\n");
       scanf("%d", &vetor[i]);

       if (vetor[i] > 24)
        {
            cont++;
        }

        system("cls");
    }
    
        soma = vetor[6] + vetor[7];

    printf("\n\n ++++++++++++++++++++++++++++++++\n\n");
    printf("A soma das posicoes e: %d\n", soma);
    printf("A quantidade de numeros maiores que 24 e: %d\n", cont);

    printf("\n\n ++++++++++++++++++++++++++++++++\n\n");
    printf("\tConcluido");
    printf("\n\n ++++++++++++++++++++++++++++++++\n\n");
        


       return 0;
 }