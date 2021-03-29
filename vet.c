#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

 

int main()
{

 

    setlocale(LC_ALL,"");

 

    

 

    float n1[3],n2[3],media[3];
    int a;
    
    for(a=0;a<3;a++)
    {
        system("pause");
        system("cls");

 

        
        printf("\n\n ++++++++++++++++++++++++++++++++\n\n");

 

        printf("\n\n Informe sua nota na primeira prova\n\n");
        scanf("%f",&n1[a]);

 

        printf("\n\n Informe sua nota na segunda prova\n\n");
        scanf("%f",&n2[a]);
        

 

        media[a]=(n1[a]+n2[a])/2;
        printf("\n\n Sua média foi %.2f\n\n",media[a]);
        printf("\n\n ++++++++++++++++++++++++++++++++\n\n");
    }

    for (a = 0; a < 2 ; a++)
    {
        
        printf("As notas do aluno %d foi %.2f e %.2f\n", a, n1[a], n2[a]);
        printf("\n\n ++++++++++++++++++++++++++++++++\n\n");
        
    }

    printf("\n\n ++++++++++++++++++++++++++++++++\n\n");
    printf("A media do primeiro aluno foi %.2f\n\n", media[0]);
    printf("A media do ultimo aluno foi %.2f\n\n", media[2]);
    printf("\n\n ++++++++++++++++++++++++++++++++\n\n");


       return 0;
}