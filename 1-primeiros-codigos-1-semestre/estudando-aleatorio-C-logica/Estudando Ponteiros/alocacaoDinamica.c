#include <stdio.h>
#include <stdlib.h>
#include <string.h>

	void insereNome(char* palavras[], int pos) 
	{
		char aux[100];
		int tam;
		
		printf("Digite a string %d: ",pos);
		fflush(stdin);
		scanf("%[^\n]s",aux);
		tam = strlen(aux) + 1;
		
		palavras[pos] = malloc(tam*sizeof(char)); // alocando mem�ria
		
		// str: string, cpy: copy
		//strcpy(destino,origem)
		strcpy(palavras[pos], aux); // transferindo conte�do de aux, para o vetor palavra[0..4], lembrando que antes ele era um ponteiro,
	}
int main ()
{
	char* nomes[5]; // vetor de ponteiros.
	int i;
	
	//leitura
	for (i = 0; i < 5; i++) {
		insereNome (nomes, i); // chamada da fun��o
	}
	//escrita
	for (i = 0; i < 5; i++) {
		printf("nomes[%d] = %s \n", i, nomes[i]);
	}
	
	//desalocando mem�ria 
	for (i = 0; i < 5; i++) {
		free(nomes[i]); // desalocando mem�ria para cada posi��o que o vetor nomes[0..4] aponta.
	}
	
	return 0;
}
