#include <stdio.h>
#include <stdlib.h>

int main(void)
{

int dias, jogos_disponiveis = 200, identificacao_do_cliente, jogos_alugados, alugar_mais_jogos, i, ddd, numtel, opcao;
float valor_da_diaria = 3.0, valor_multa = 1.5, valor_total = 0.0;
char o, nomecliente[9999];

printf("<----------------------------------->");
printf("\n\n \t LOCADORA DE JOGOS\n\n");
printf("<----------------------------------->\n\n");

printf("Já é cliente? Se sim digite 1, se não digite 0");
scanf("%c", &opcao);

   
  
    
    if (opcao == 0)
    {
            printf("Seja bem-vindo(a) a nossa central de cadastro!\n\n");
            printf("Nos informe o seu nome:\n");
            gets (nomecliente);
            printf("Informe o DDD:\n");
            scanf("%d", &ddd);
            printf("Digite o seu numero:\n");
            scanf("%d", &numtel);
    }

    else if (opcao == 1)
    {
        do
        { 
            printf("MENU\n");
            printf("\n 1 - Alugar jogos");
            printf("\n 2 - Devolução");
            printf("\n 3 - Sair\n");
            printf("Digite uma opção: ");
            scanf("%c", &o);

         switch (o)

            {
                
            case '1':
                printf("");
                break;

            case '2':
                printf("");
                break;

             case '3':
                    exit (0);
                break;

            default:
                break;
            }

  

        } while (o != 3);
    }

    else
    {
        printf("OPCAO INVALIDA\n\n");
    }
    
   

 

















    return 0;
}