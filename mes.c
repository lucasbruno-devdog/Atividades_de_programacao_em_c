 #include <stdio.h>
 #include <stdlib.h>
    
    int main(void)

    {

    int mes;

        printf("------------------\n");
        printf("Digite o mes:\n");
        printf("------------------\n");
            scanf("%d",&mes);

    switch(mes)

    {

    case 1:    
        printf("JANEIRO\n");
    break;

    case 2:    
        printf("FEVEREIRO\n");
    break;

    case 3:    
        printf("MARCO\n");
    break;

    case 4:    
        printf("ABRIL\n");
    break;

    case 5:    
        printf("MAIO\n");
    break;

    case 6:    
        printf("JUNHO\n");
    break;

    case 7:    
        printf("JULHO\n");
    break;

    case 8:    
        printf("AGOSTO\n");
    break;

    case 9:    
        printf("SETEMBRO\n");
    break;

    case 10:    
        printf("OUTUBRO\n");
    break;

    case 11:    
        printf("NOVEMBRO\n");
    break;

    case 12:    
        printf("DEZEMBRO\n");
    break;
    }
    
                return 0;
    }