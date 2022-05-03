#include <stdio.h>
#include <stdlib.h>

int main(void)

{
    float al1, al2, al3, al4, al5, var;

    printf("informe sua altura aluno 1\n");
    scanf("%f",&al1);

    printf("informe sua altura aluno 2\n");
    scanf("%f",&al2);

    printf("informe sua altura aluno 3\n");
    scanf("%f",&al3);

    printf("informe sua altura aluno 4\n");
    scanf("%f",&al4);

    printf("informe sua altura aluno 5\n");
    scanf("%f",&al5);

    if ((al1<al2)&&(al1<al3)&&(al1<al4)&&(al1<al5))
    {
        printf("O aluno 1 e o menor com:%.2f\n", al1);
    }
    else if ((al2<al1)&&(al2<al3)&&(al2<al4)&&(al2<al5))
    {
        printf("O aluno 2 e menor com:%.2f\n", al2);
    }
    else if ((al3<al1)&&(al3<al2)&&(al3<al4)&&(al3<al5))
    {
         printf("O aluno 3 e menor com:%.2f\n", al3);
    }
    else if ((al4<al1)&&(al4<al2)&&(al4<al5))
    {
        printf("O aluno 4 e menor com:%.2f\n", al4);
    }
    else if ((al5<al1)&&(al5<al2)&&(al5<al4))
    {
        printf("O aluno 5 e menor com:%.2f\n", al5);
    }
    else
    {
        printf("Os alunos tem a mesma altura\n");
    }
    

    return 0;
}s