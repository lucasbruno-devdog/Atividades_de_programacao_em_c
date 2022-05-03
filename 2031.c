#include <stdio.h>
#include <stdlib.h>

int main(void)

{
    int ano, idade;

    printf("\nInforme o ano em que nasceu:\n");
    scanf("%i", &ano);

    idade=2031-ano;

    printf("\nVoce tera %i anos \n", idade);


    return 0;
}