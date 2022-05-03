    #include <stdio.h>
    #include <stdlib.h>
    
    int main(void)
    {
    char y;
    float n1, n2, media;

        printf("------------------\n");
        printf("Escolha a turma:\n1\n2\n3\n");
        printf("------------------\n");
            scanf(" %c",&y);

    switch(y)
    {

    case '1':    
        printf("Digite a nota do trabalho (0 a 10):\n");
            scanf("%f",&n1);
        printf("Digite a nota da avaliacao (0 a 10):\n");
            scanf("%f",&n2);

        media = (n1+n2)/2;
        
    if (media >= 8)
    {
        printf("Aprvovado!\n\n");
    }
    else if (media < 6)
    {
        printf("Reprovado!\n\n");
    }
    else 
    {
        if (6 < media < 8 )
        {
          printf("Prova final!\n\n");
        }
           
    }

    break;

    case '2': 
        printf("Digite a nota do trabalho (0 a 10):\n");
            scanf("%f",&n1);
        printf("Digite a nota da avaliacao (0 a 10):\n");
            scanf("%f",&n2);

        media = (n1+n2)/2;

     if (media >= 7)
    {
        printf("Aprvovado!\n\n");
    }
    else if (media < 5)
    {
        printf("Reprovado!\n\n");
    }
    else 
    {
        if (5 < media < 7 )
        {
          printf("Prova final!\n\n");
        }
           
    }
        
    break;

    case '3': 
        printf("Digite a nota do trabalho (0 a 10):\n");
            scanf("%f",&n1);
        printf("Digite a nota da avaliacao (0 a 10):\n");
            scanf("%f",&n2);

        media = (n1+n2)/2;

    if (media >= 6)
    {
        printf("Aprvovado!\n\n");
    }
    else if (media < 4)
    {
        printf("Reprovado!\n\n");
    }
    else 
    {
        if (4 < media < 6 )
        {
          printf("Prova final!\n\n");
        }
           
    }
        
    break;
    }


                return 0;
    }



















































































































































































































































































































































































































//Written by |Lucas_Bruno|