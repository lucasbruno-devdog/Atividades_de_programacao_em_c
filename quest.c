#include <stdio.h>
#include <stdlib.h>

int main()

{
    {

    int matricula;

 

    printf("Digite seu numero de matricula e será exibido qual a sua sala de aula:");

 

    scanf("%d", &matricula);

 

    if(matricula>=50 && matricula<=70)

    {

        printf("L6-101");

    }

    else if(matricula>=80 && matricula<=100)

        {

            printf("L6-116");

        }

        else if(matricula>=110 && matricula<=130)

            {

                printf("S1-101");

            }

            else if(matricula>=140 && matricula<=170)

                {

                    printf("L6-201A");

                }

                else if(matricula>=180 && matricula<=300)

                    {

                        printf("Diretoria");

                    }

                    else if(matricula > 300 && matricula<=1200)

                    {

                        printf("S6-303");

                    }

                    else

                    {

                        printf("Matricula invalida.");

                    }
    

    return 0;

}