#include <stdlib.h>
#include <stdio.h>

#define TAM 101

int main()
{
    float v1[TAM];
    float v2[TAM];
    float n = -10;
    int i;

    for (i = 0; i <= 100; i++)
    {
        v1[i] = n;
        v2[i] = n * n;
        n += 0.2;
    }

    for (i = 0; i <= 100; i++)
    {
        printf ("%.2f\n", v1[i]);
    }
    printf ("\nO quadrado de cada n do primeiro vetor sera: \n");

    for (i = 0; i <= 100; i++)
    {
        printf ("%.2f\n", v2[i]);
    }
    return 0;
}