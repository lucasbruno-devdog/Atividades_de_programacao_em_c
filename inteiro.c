#include <stdio.h>
#include <stdlib.h>

int main(void)

{  
        int n1;
        

    printf("\n\nDIGITE UM NUMERO:\n");
          scanf("%d",&n1);
          
        while (n1 % 2 == 0)
        {
          printf("O NUMERO INFORMADO FOI: %d",n1);

          printf("\n\nDIGITE UM NUMERO:\n");
          scanf("%d",&n1);
        }

        printf("\n\nDIGITASTE UM NUMERO IMPAR ANIMAL");
        


    return 0;
}