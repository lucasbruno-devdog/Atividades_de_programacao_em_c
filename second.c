#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <string.h>
 
typedef struct
{
    int idade;
    char nome[200];
} Cliente;
 
Cliente clie[5];
char nome[200];

 
int main()
{
 
int i = 0;
setlocale(LC_ALL,"portuguese");

for(i=0; i<5; i++)
 {
    clie[i].idade = 0;
    strcpy(clie[i].nome, "NULL");
 }

for(i=0; i<5; i++)
 {
    printf(" Digite a idade do cliente: ");
    scanf("%d%*c", &clie[i].idade);
    printf(" Digite o nome do cliente: ");
    scanf("%s%*c", &clie[i].nome);
 }

 
    for(i=0; i<5; i++)
    {
        printf(" \n A idade do cliente é: %d ", clie[i].idade);
        printf(" \n O nome do cliente é: %s ", clie[i].nome);
        printf(" \n ------------------------------------------------------------------------");
     }    

    return 0;
}