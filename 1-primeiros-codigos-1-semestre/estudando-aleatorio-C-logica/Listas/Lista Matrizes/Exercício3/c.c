// Exerc�cio 3, item c) soma dos elementos que est�o abaixo da diagonal principal.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 5
#define MAX 10 
int main(){
	// Dicion�rio de dados:
	int matriz[TAM][TAM];
	int i,j;
	int somaAbaixo; // soma dos elementos que est�o abaixo da diagonal principal
	
	// Entrada de dados - gerando matriz:
	srand(time(NULL));
	for(i = 0; i < TAM; i++){
		for(j = 0; j < TAM; j++){
			matriz[i][j] = rand() % MAX;
		}
	}
	
	// Sa�da de dados - exibindo matriz gerada:
	printf("\n");
	for(i = 0; i < TAM; i++){
		printf("|");
		for(j = 0; j < TAM; j++){
			printf(" %d ",matriz[i][j]);
		}
		printf("|\n");
	}
	
	// Processamento: soma dos elementos que est�o abaixo da diagonal principal.
	somaAbaixo = 0;
	for(i = 0; i < TAM; i++){
		for(j = 0; j < TAM; j++){
			if(i == j && i != 0){
				somaAbaixo += matriz[i][j-1]; 
			}
		}
	}
	printf("\nA soma dos elementos que estao 'abaixo' da diagonal principal: %d. \n",somaAbaixo);
return 0;
}
