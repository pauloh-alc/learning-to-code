#include <stdio.h>
#include <stdlib.h>
	void exibicao (int *ponteiro, int n)
	{
		int i;
		// Exibe os elementos do vetor.
		printf("Os elementos do vetor sao: ");
		for (i = 0; i < n; i++) {
			printf("%d, ",*(ponteiro+i));
		}
	}
int main ()
{
	// Este ponteiro vai deter a base do 
	// endere�o de um bloco criado.
	int* ptr;
	int n, i;
	
	// Obt�m o n�mero de elementos do vetor.
	
	printf("Entre com o numero de elementos 'n': ");
	scanf("%d",&n);
	
	// Usando malloc() para alocar mem�ria de forma din�mica.
	ptr = (int*) malloc (n * sizeof(int));
	
	// Checa se malloc alocou mem�ria ou n�o com sucesso.
	if (ptr == NULL) {
		printf("Erro: memoria nao alocada !!");
		exit(1);
	}
	else {
		// Mem�ria foi alocada com sucesso.
		printf("Memoria alocada com sucesso usando malloc(). \n");
		
		// Obt�m elementos do vetor
		for (i = 0; i < n; i++) {
			*(ptr+i) = i + 1;
		}
		// Chamada de fun��o:
		exibicao (ptr, n);
		// Desalocando mem�ria
		free(ptr);
	}
	return 0;
}
