#include <stdio.h>
#include <stdlib.h>

int main(void)

{

    int idade, falta;

    printf("Digite a sua idade:");
    scanf("%i", &idade);

    if (idade>=18)
    {
        printf("\nVoce possui idade para ser habilitado!\n");
    }
    else
    {
        falta=18-idade;
        printf("\nVoce nao possui idade para ser habilitado, falta %i anos!\n", falta);
    }
    

    return 0;
}