#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;

    printf("\n\n \t NÚMEROS PARES ENTRE 455 E 480 ");

        for (n = 455; n <= 480; n++)
        {
            if (n % 2 == 0)
            {
                printf("\n %d", n);
            }
            
        }
    
    return 0;
}