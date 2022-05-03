#include <stdio.h>
#include <stdlib.h>

int main(void)

{
    int id1, id2, id3;

    printf("informe sua idade aluno 1\n");
    scanf("%d",&id1);

    printf("informe sua idade aluno 2\n");
    scanf("%d",&id2);

    printf("informe sua idade aluno 3\n");
    scanf("%d",&id3);

    if ((id1>id2)&&(id1>id3))
    {
        printf("O aluno 1 e mais velho\n");
    }
    else if ((id2>id1)&&(id2>id3))
    {
        printf("O aluno 2 e mais velho\n");
    }
    else if ((id3>id1)&&(id3>id2))
    {
         printf("O aluno 3 e mais velho\n");
    }
    else
    {
        printf("Os alunos tem a mesma idade\n");
    }
    




    return 0;
}