#include <stdio.h>
#include <stdlib.h>
int i;
	void limites (int *vet, int n, int *min, int *max)
	{
		*max = vet[0];
		*min = vet[0];
		for (i = 0; i < n; i++) {
			if (vet[i] > *max) *max = vet[i];
			if (vet[i] < *min) *min = vet[i];
		}
	}
int main ()
{
	// Dicion�rio de dados:
	int n;
	int a, b; 
	int *vet; // ponteiro 
	
	// Leitura de dados:
	printf("Entre com um numero 'n' de elementos que voce deseja ler: ");
	scanf("%d",&n);
	
	vet = (int*) malloc (n * sizeof(int));
	             // malloc retorna o endere�o do primeiro pedacinho (1� byte) de mem�ria do bloco que malloc alocou dinamicamente.
// vet est� armazenando esse primeiro endere�o que malloc retornou.

// obs: posso usar esse ponteiro vet, como um vetor.
// Lembrando que vetores s�o ponteiros.
	
	if (vet == NULL) {
		printf("Erro: malloc nao consegui alocar um bloco de memoria !!");
		exit(1);
	}
	
	for (i = 0; i < n; i++) {
		printf("vet[%d] = ",i);
		scanf("%d",(vet+i));
					// aqui est� ocorrendo a aritm�tica de ponteiros.
					// scanf() recebe como argumento um determinado endere�o para onde o valor
					// digitado no teclado fica armazenado.	
	}
	
	// chamada de fun��o
	limites (vet, n, &a, &b);
	printf("max = %d, min = %d \n",b,a);
	
	// desalocando mem�ria.
	free(vet);
	
	return 0;
}
