#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct 
{
    char nome[20];
    int idade;
}clientes;

clientes cli[3];
char nome[200];


int main(void)
{
int esc, idade;
char nome;
int i = 0;

printf("\n\nSistema de cadastro de clientes\n\n");
printf("MENU\n\n");
printf("1 - Cadastrar informacoes de um novo cliente\n");
printf("2 - Imprimir dados do cliente mais velho\n");
printf("3 - sair \n\n");
printf("Digite a sua escolha: ");
scanf("%d", &esc);
printf("\n");

switch (esc)
{
case 1:

    for (i = 0; i < 3; i++)
    {
        cli[i].idade = 0;
        strcpy(cli[i].nome, "NULL");
        
    }
    
    for (i = 0; i < 3; i++)
    {

    printf(" Digite a idade do cliente: ");
    scanf("%d%*c", &cli[i].idade);
    printf(" Digite o nome do cliente: ");
    scanf("%s%*c", &cli[i].nome);
    printf("\n");

    }

    for (i = 0; i < 3; i++)
    {
       printf("\n A idade do cliente e: %d", cli[i].idade);
       printf("\n O nome do cliente e: %s", cli[i].nome);
       printf(" \n ------------------------------------------------------------------------");
    }
    
    
    break;
case 2:
    /* code */
    break;
case 3:
    /* code */
    break;        

default:
    break;
}

    return 0;
}