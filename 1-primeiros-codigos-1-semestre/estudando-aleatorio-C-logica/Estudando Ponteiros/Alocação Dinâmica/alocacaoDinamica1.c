#include <stdio.h>
#include <stdlib.h>
// Aloca��o din�mica de mem�ria.

// utilizando fun��o: malloc e free
				
	// par�metros   ponteiro   tipo b�sico  
	void escreve (int *numeros, int n)
	{
		int i;
		
		printf("\nNumeros lidos: ");
		for (i = 0; i < n; i++) {
			printf("%d, ",*(numeros + i));
		}
		printf("\n");
	}
int main ()
{
	int *numeros;
	int n, i;
	
	printf("Entre com a quantidade de numeros: ");
	scanf("%d",&n);
	
	 // alocando quantidade de mem�ria que o usu�rio precisa usar:
	 
	numeros = (int *) malloc(n * sizeof(int));   // o ponteiro 'numeros' agora vai agir como um vetor. 
	                 
	if (numeros == NULL) {
		printf("Erro: malloc nao alocou memoria !! \n"); // Em caso de erro de aloca��o
		exit(1);
	}
	
	// Entrada de dados:
	for (i = 0; i < n; i++) {
		printf("Numero %d: ",i);
		scanf("%d",&numeros[i]);
	}
	
	// Chamada da fun��o. Argumentos passados s�o: numeros, que � um ponteiro e n, que � uma vari�vel int do tipo b�sico.
	escreve (numeros, n);
	
	free(numeros); // Desalocando mem�ria.
	
	return 0;
}
