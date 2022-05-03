#include <stdio.h>
#include <stdlib.h>

 

int main()
{
    int voto, fim=0;

 
    while (fim==0)
    {
       printf("\n ELEICOES DO CEET\n");
    printf("123 - PEDRO\n");
    printf("456 - MARCOS\n");
    printf("145 - FELIPE\n");

 

    printf("\n >>>>>INFORME NUMERO DO SEU CANDIDATO>>> ");
    scanf("%d",&voto);

 


    switch(voto)
    {
        case 123: printf("Voto computado para o Pedro\n");
                 break;
        case 456: printf("Voto computado para o Marcos\n");
                 break;
        case 145:
                 printf("Voto computado para o Felipe\n");
                 break;
        default: printf("Voto invalido\n");
    }

     printf("\n\nDeseja continuar? \n Digite 0-SIM ou 1-NAO \n");
            scanf("%d",&fim);
    }
    
   

 


    return 0;
}