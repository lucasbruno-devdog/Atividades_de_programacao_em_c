#include <stdio.h>
#include <stdlib.h>

int main(void)

{
    int anos;
    float salario, nvsalario;

    printf("\nInforme o seu salario:\n");
    scanf("%f", &salario);

    printf("\nQuantos anos tem de empresa?\n");
    scanf("%i", &anos);

    if (anos>=5)
    {
        nvsalario=2000+salario;
        printf("\nSeu novo salario e:R$%.2f\n", nvsalario);
        
    }

    else
    {
        nvsalario=1000+salario;
        printf("\nSeu novo salario e:R$%.2f\n", nvsalario);
    }
    
    
    return 0;
}
