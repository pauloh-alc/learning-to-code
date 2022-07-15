#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10
#define MAX 10
int main(){
	// Dicion�rio de dados:
	int matriz[TAM][TAM];
	int i,j;
	int maior,linha,coluna;
	
	// Trecho respons�vel por preencher uma matriz[0..TAM-1][0..TAM-1]
	// de forma aleat�ria com fun��o rand() (n�meros gerados entre [0-9]).
	
	srand(time(NULL));
	for(i = 0; i < TAM; i++){
		for(j = 0; j < TAM; j++){
			matriz[i][j] = rand() % MAX;
		}
	}
	
	// Processamento - trecho respons�vel por encontrar o maior elemento da matriz por
	// atrav�s de uma varredura na matriz[0..TAM-1][0..TAM-1]. Maior elemento da matriz
	// inicia com elemento matriz[0][0] com sua respectiva linha e coluna. Durante a varredura
	// compara-se o elemento na posi��o matriz[0..TAM-1][0.TAM-1] com 'maior'. Se elemento analisado
	// for maior do que vari�vel 'maior', a vari�vel 'maior', 'linha' e 'colunas' s�o atualizadas.

	
	for(i = 0; i < TAM; i++){
		for(j = 0; j < TAM; j++){
			if(i == 0 && j == 0) {
				maior = matriz[i][j];
				linha = i;
				coluna = j; 	
			}
			if(matriz[i][j] > maior){
				maior = matriz[i][j];
				linha = i;
				coluna = j; 	
			}
		}
	}
	
	// Sa�da de dados:
	for(i = 0; i < TAM; i++){
		printf("|");
		for(j = 0; j < TAM; j++){
			printf(" %d ",matriz[i][j]);
		}
		printf("|\n");
	}
	
	printf("\nMaior elemento da matriz[%d][%d] e: %d na linha %d e coluna %d.\n",TAM,TAM,maior,linha,coluna);
	
return 0;
}
