#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int nalunos = 0, matricula, notas = 0;
    float n1, media = 0;
    
    printf("\t Este e um programa para calcular a media de 4 alunos\n\n\n");

    while (nalunos < 4)
    {
        printf("\n\t\tAluno %d digite o numero da sua matricula: ", nalunos++);
        scanf("%d", &matricula);
        while (notas < 3)
        {
            printf("\n\t\t\t  Digite sua %dª nota: ", notas++);
            scanf("%f", &n1);
            media = media + n1;
            notas++;
        }
        printf("\n\t\tAluno %d de matricula %d sua media e: %.2f \n\n", nalunos++, matricula, media/3);
        media = 0;
        notas = 0;
        nalunos++;
    }

    printf("\n\n\t\t\t\t\tFIM!\n\n");


    return 0;
    
}