#include <stdio.h>
#define TAM 6
int main ()
{
	// Dicion�rio de dados:
	int bloco[TAM];
	int i, j;
	
	// Entrada de dados:
	printf("Entre com '6' numeros de blocos:\n");
	for (i = 0; i < TAM; i++) {
		printf("%d[] = ",i);
		scanf("%d",&bloco[i]);
	}
	
	// Processamento:
	for (i = TAM; i > 1; i--) {
		for (j = 0; j < i - 1; j++) {
			bloco[j] = bloco[j] + bloco[j + 1];
		}
	}
	// Sa�da de dados: 
	printf("%d",bloco[0]); 
 	return 0;
}
