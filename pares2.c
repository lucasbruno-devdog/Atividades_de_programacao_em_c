#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL,"Portuguese");

    int vetor[10];
    int n = 0, cont = 0, imp = 0;

    printf("\n\n \t NÚMEROS NO INTERVALO [10,20]\n\n");
    

        for (n = 0; n < 10 ; n++)
        {
            printf("\n DIGITE O NÚMERO: ");
            scanf("%d", &vetor[n]);
            if ((vetor[n] >= 10) && (vetor[n]<=20))
            {
                cont++; 
            }
            else
            {
                imp++; 
            }
        }
    
    printf("\n A QUANTIDADE DE NUMEROS DENTRO DO INTERVALO E: %d", cont);
    printf("\n A QUANTIDADE DE NUMEROS FORA DO INTERVALO E: %d", imp);

    return 0;
}