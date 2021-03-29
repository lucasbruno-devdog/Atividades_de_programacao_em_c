#include <stdio.h>
#include <stdio.h>

int main(void)
{
	int vetor[3];
	int i, total = 0;

	for (i = 0; i < 3; i++) //Este laço faz o scan de cada elemento do vetor//
	{
		printf("Digite um numero: \n");
		scanf("%d", &vetor[i]);

		if (vetor[i] % 2 == 0)
		{
			total = total + vetor[i];
		}
	}

	printf("A soma dos pares foi:%d\n", total);

	for (i = 0; i < 3; i++)
	{
		printf("Posicao %d: %d\n", i, vetor[i]);
	}

	printf("Concluido");
	return 0;
}