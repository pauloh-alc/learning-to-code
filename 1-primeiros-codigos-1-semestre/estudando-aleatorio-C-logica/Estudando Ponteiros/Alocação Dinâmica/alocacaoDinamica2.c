#include <stdio.h>
#include <stdlib.h>
	void entradaDados (char **nomes, int n)
	{
		int i;
		for (i = 0; i < n; i++) {
			printf("Nome %d: ",i);
			fflush(stdin);
			scanf("%[^\n]s",nomes[i]);
		}
	}
	
	void escreve (char **nomes, int n)
	{
		int i;
		for (i = 0; i < n; i++) {
			printf("%s\n",nomes[i]);
		}
	}
int main () {
	char **nomes; // Vetor de apontadores
	int i, n, size;
	
	printf("Quantidade de strings: ");
	scanf("%d",&n);

	nomes = malloc (n * sizeof(char*)); // Alocando mem�ria para o vetor de ponteiros
	
	printf("Tamanho de cada string: ");
	scanf("%d",&size);
	
	for (i = 0; i < n; i++) {
		nomes[i] = malloc (size * sizeof(char)); // Alocando mem�ria para a quantidade total do tamanho da string.
	}
	
	// Chamando fun��es:
	entradaDados (nomes, n);
	escreve (nomes, n);
	
	// Desalocando mem�ria:
	for (i = 0; i < n; i++) {
		free(nomes[i]);     // Desalocando primeiro as strings alocadas.
	}
	
	free(nomes); // desalocando o vetor de ponteiros.
	return 0;
}
