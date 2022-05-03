#include <stdio.h>
#include <stdlib.h>

 

int main()
{

 


    float p,qtd,total=0;
    int fim=0;

 

    while(fim==0)
    {
            printf("\n\nInforme preco");
            scanf("%f",&p);

 

            printf("\n\nInforme quantidade");
            scanf("%f",&qtd);

 

            total=total+(p*qtd);

 

            printf("\n\nDeseja continuar? \n Digite 0-SIM ou 1-NAO");
            scanf("%d",&fim);
    }

 

    printf("\n\nTOTAL A PAGAR R$%.2f",total);

 

    return 0;
}
 