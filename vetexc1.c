#include <stdio.h>
#include <stdlib.h>


int main()
{
    
    int vetor[5], i, cont = 0, total;
    float media = 0;

    for (i = 0; i < 5; i++)
    {
       printf("Digite um valor para o vetor:\n");
       scanf("%d", &vetor[i]);  
       media = (vetor[0] + vetor[1] + vetor[2] + vetor[3] + vetor[4])/5;

    }
    for (i = 0; i < 5; i++)
    {
   
     if (media < vetor[i])
        {
            cont++;
        }
    }
    printf("\n\n ++++++++++++++++++++++++++++++++\n\n");
    printf("A media das idades e: %.2f\n", media);
    printf("A quantidade de pessoas com idade superior a media e: %d\n", cont);

    printf("\n\n ++++++++++++++++++++++++++++++++\n\n");
    printf("\tConcluido");
    printf("\n\n ++++++++++++++++++++++++++++++++\n\n");
        


       return 0;
 }