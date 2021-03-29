#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;

    printf("\n\n \t NÚMEROS PARES ENTRE 0 E 100 ");

        for (n = 0; n <= 100; n++)
        {
            if (n % 2 == 0)
            {
                printf("\n %d", n);
            }
            
        }
    
    return 0;
}