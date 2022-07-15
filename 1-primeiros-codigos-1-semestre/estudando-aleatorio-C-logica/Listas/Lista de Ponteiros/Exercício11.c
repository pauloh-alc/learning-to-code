#include <stdio.h>
#define TAM 50
int i;
	// Fun��o: armazena nas vari�veis min e max passadas por refer�ncia
	// o valor m�nimo e v�ximo do vetor v[0..n].
	void limites (int vet[], int n, int *min, int *max)
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
	int vet[TAM];
	int n;
	int min, max; 
	
	// Leitura de dados:
	printf("Entre com um numero 'n' de elementos que voce deseja ler: ");
	scanf("%d",&n);
	
	for (i = 0; i < n; i++) {
		printf("vet[%d] = ",i);
		scanf("%d",&vet[i]);	
	}
	
	// Sa�da de dados:
	limites (vet, n, &min, &max);
	printf("max = %d, min = %d \n",max,min);
	
	return 0;
}
