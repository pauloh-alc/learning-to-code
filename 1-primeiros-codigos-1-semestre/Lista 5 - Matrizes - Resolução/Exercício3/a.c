#include <stdio.h>
#define TAM 5
// Exerc�cio 3, item a) a soma dos elementos que est�o na diagonal principal.
int main(){
	// Dicion�rio de dados:
	int matriz[TAM][TAM];
	int i, j, somaP;
	
	// Entrada de dados:
	// Trecho que recebe elementos para a matriz[0..TAM-1][0..TAM-1],
	// verificando se as posi��es 'i' e 'j' s�o iguais. Se a condi��o for
	// verdadeira, atualiza o valor de 'SomaP', pois o elemento verificado
	// faz parte da diagonal principal. Caso contr�rio 'somaP' continua com o mesmo valor.
	
	somaP = 0;
	for(i = 0; i < TAM; i++){
		for(j = 0; j < TAM; j++){
			printf("Digite o elemento da linha %d coluna %d: ",i,j);
			scanf("%d",&matriz[i][j]);
			if(i == j) somaP = somaP + matriz[i][j];
		}
		printf("\n");
	}
	
	// Sa�da de dados:
	// Trecho que imprime a matriz[0..TAM-1][0..TAM-1]
	// com os elementos de acordo com suas respectivas 
	// linhas e colunas. Logo depois exibe o resultado 
	// da Soma dos elementos da diagnal principal.
	
	printf("Matriz[%d][%d]:\n\n",TAM,TAM);
	for(i = 0; i < TAM; i++){
		printf("|");
		for(j = 0; j < TAM; j++){
			printf(" %d ",matriz[i][j]);
		}
		printf("|\n");
	}
	printf("\nA soma dos elementos que est�o na diagonal principal: %d. \n",somaP);
return 0;
}
