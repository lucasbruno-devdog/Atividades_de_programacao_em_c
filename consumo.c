#include <stdio.h>
#include <stdlib.h>

int main(void)

{

    float d, l, cm, my;

    printf("\nInforme quantos litros seu carro faz ou fara por KM:\n");
    scanf("%f", &l);

    printf("\nInforme a distancia percorrida ou que percorrera:\n");
    scanf("%f", &d);

    cm=d/l;
    my=cm*4.572;

    
    printf("\nO consumo medio foi de: %.2fL \n", cm);
    printf("\nO gasto em dinheiro foi de:R$%.2f \n", my);


    return 0;
}