#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define nt 2
#define nj 2

int main(void)
{
    int njogadores = 0, times, idade = 0, totalp = 0;
    float altura = 0.0, peso = 0.0, mediaI = 0.0, mediaA = 0.0, menor = 0;

    printf("\n\n \t CAMPEONATO BRASILEIRINHAS FUTEBOL CLUBE\n\n");

    totalp = nt * nj;


    for (times = 0; times < nt; times++)
    {
        mediaI = 0.0;
        for (njogadores = 0; njogadores < nj; njogadores++)
        {
            printf("Digite a idade do jogador %d do time %d\n", njogadores + 1, times + 1);
                scanf("%d", &idade);
            printf("Digite o peso do jogador em KG\n");
                scanf("%f", &peso);
            printf("Digite a altura do jogador em M\n");
                scanf("%f", &altura);
        
        

             

        if (menor == 0)
        {
            menor = peso;
        }
        else if(peso < menor)
        {
            menor = peso;
        }
            mediaI = mediaI + idade;
            mediaA = mediaA + altura;
        }
        

        mediaI = mediaI / nj;
        printf("\n\n \t A idade media do time %d e %.2f\n\n",times + 1, mediaI);
        system("pause");
        system("cls");

    }

    mediaA = mediaA / totalp;
    printf("\n<---------------------------------------------------->\n\n");
    printf("\n\n O jogador com menor peso possui %.2f KG\n\n", menor);
    printf("\n\n Media das alturas do campeonato e de %.2f M\n\n", mediaA);
    printf("\n<---------------------------------------------------->\n\n");


    return 0;
}