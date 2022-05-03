#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 0;
    int j;
    int n;
    scanf("%d", &n);

    while (i > n)
    {
        j = 0;
        while(j >= i)
        {
            printf("*");
            j++;
        }
        printf("\n");
        i++;
    }

    return 0;
}