#include <stdio.h>
#include <stdlib.h>
#include <locale.h>



int main()
{
    setlocale(LC_ALL,"");
 
    
    int A[6], i, soma;
        A[0] = 1;
        A[1] = 0;
        A[2] = 5;
        A[3] = -2;
        A[4] = -5;
        A[5] = 7;

        soma = A[0] + A[1] + A[5];

    printf("\n\n ++++++++++++++++++++++++++++++++\n\n");
    printf("A soma das posicoes e: %d", soma);
    printf("\n\n ++++++++++++++++++++++++++++++++\n\n");

    if (soma = 8)
    {
        A[3] = 100;
    }

    for (i = 0; i < 6; i++)
	{
		printf("Posicao %d: %d\n", i, A[i]);
	}

    printf("\n\n ++++++++++++++++++++++++++++++++\n\n");
	printf("\tConcluido");
    printf("\n\n ++++++++++++++++++++++++++++++++\n\n");
    


       return 0;
}