#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <tchar.h>

int main(void)

{

float F, C, K;

printf("Digite a temperatura em C: ");
scanf("%f", &C);

F = ((9*C)/5)+32;
K = C + 273;
    
printf("\nOs valores das temperaturas serao: %.2f C  %.2f F  %.2f K",C,F,K);    
    return 0;
}