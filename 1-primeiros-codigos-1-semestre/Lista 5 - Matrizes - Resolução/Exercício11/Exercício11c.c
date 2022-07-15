#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 4
int main(){
	// Dicion�rio de dados:
	int mat[SIZE][SIZE];
	int i, j, x, k, a, b;
	
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
	// Trecho respons�vel por receber um n�mero 'x', um n�mero de linha 'a' e um n�mero de linha 'b', os n�meros das linhas devem est�
	// no intervalo [0..SIZE-1]. Posteriormente, multiplicar os elementos da linha 'b' por 'x' e somar os resultados correspondentes com 
	// cada elemento da linha 'a' armazenando o resultado sobre a pr�pria linha 'a'.
		
		// Entrada de dados:
		printf("Entre com um numero x: ");
		scanf("%d",&x);
		
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
		mat[a][k] = mat[a][k] + (mat[b][k] * x);
	}

	// Sa�da de dados:
	// Exibindo matriz resultante.
	printf("\n");
	for (i = 0; i < SIZE; i++) {
		printf("|");
		for (j = 0; j < SIZE; j++) {
			printf("%4d",mat[i][j]);
		}
		printf(" |\n");
	}
return 0;
}
