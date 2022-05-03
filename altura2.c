#include <stdio.h>
#include <stdlib.h>

int main(void)

{
    float al1, al2, al3, al4, al5, var = 0;

    printf("informe sua altura aluno 1\n");
    scanf("%f",&al1);

    if (al1 > var)
    {
      var = al1;
    }
    
    printf("informe sua altura aluno 2\n");
    scanf("%f",&al2);

    if ( al2 < var)
    {
        var = al2;
    }
    
    printf("informe sua altura aluno 3\n");
    scanf("%f",&al3);

    if (al3 < var)
    {
        var = al3;
    }
    
    printf("informe sua altura aluno 4\n");
    scanf("%f",&al4);

    if (al4 < var)
    {
        var = al4;
    }
    
    printf("informe sua altura aluno 5\n");
    scanf("%f",&al5);
    
    if (al5 < var)
    {
        var = al5;
    }
    
        printf("A menor altura e:%.2f\n", var);
    

    return 0;
}