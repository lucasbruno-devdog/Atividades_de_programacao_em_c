#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float n1, n2, media;

    printf("\nDigite a sua primeira nota:\n");
    scanf("%f", &n1);

    printf("\nDigite a sua segunda nota:\n");
    scanf("%f", &n2);

    media=(n1+n2)/2;

    printf("\nA sua media foi:%.2f\n",media);
    

    return 0;
}