#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 4
int main(){
	// Dicion�rio de dados:
	int mat[SIZE][SIZE];
	int i, j, k, a, b;
	
	// Gerando matriz com n�meros pseudoaleat�rios com fun��o rand() 
	// os n�mero gerando pertence ao intervalo [0-10[
	
	srand((time(NULL)));
	for (i = 0; i < SIZE; i++) {
		for (j = 0; j < SIZE; j++) {
			mat[i][j] = rand() % 10;
		}
	}
	// Exibindo matriz gerada:
	for (i = 0; i < SIZE; i++) {
		printf("|");
		for (j = 0; j < SIZE; j++) {
			printf("%4d",mat[i][j]);
		}
		printf(" |\n");
	}
	
	// Processamento:
	// Trecho respons�vel por receber um n�mero de linha 'a' e um n�mero de linha 'b', esses n�meros devem est� no intervalo [0..SIZE-1]. 
	// Posteriormente, somar os elementos correspondentes das linhas 'a' e 'b', armazenando o resultado sobre a linha 'a'.
		
		// Entrada de dados:
		do {
			printf("Entre com um numero de linha 'a': ");
			scanf("%d",&a);
		} while (a < 0 || a >= SIZE);
		
		do {
			printf("Entre com um numero de linha 'b': ");
			scanf("%d",&b);
		} while (b < 0 || b >= SIZE);
	
	// Processamento:	
	for (k = 0; k < SIZE; k++) {
		mat[a][k] = mat[a][k] + mat[b][k];
	}

	// Sa�da de dados:
	// Exibindo matriz resultante.
	for (i = 0; i < SIZE; i++) {
		printf("|");
		for (j = 0; j < SIZE; j++) {
			printf("%4d",mat[i][j]);
		}
		printf(" |\n");
	}
return 0;
}
