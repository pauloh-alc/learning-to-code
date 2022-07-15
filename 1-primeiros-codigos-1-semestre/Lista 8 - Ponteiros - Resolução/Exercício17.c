#include <stdio.h>
#include <stdlib.h>

	// Fun��o: calcula a quantidade de caracteres.
	int strleN (char *string)
	{
		int qtd = 0;
		char *p;
		p = &string[0]; // Utilizando outro ponteiro para armazenar endere�o do primeiro caractere
						// do vetor de char chamado string. 
		
		while (*p != '\0') {
			qtd += 1;
		p++; // Aritm�tica de ponteiro 
		}
		
	return qtd;
	}
	
	// Fun��o: faz uma c�pia de string.
	void strcpY (char *destino, char *origem)
	{
		while (*origem != '\0') {
			*destino = *origem;
		origem  += 1;
		destino += 1;
		}
		*destino = '\0';
	}
	
	// Fun��o: armazena dados do usu�rio
	void entradaDados (char *nomes[], int i)
	{
		int tamanho;
		char string[50];
		
		printf("Entre com a string %d: ", i);
		fflush(stdin);
		scanf("%[^\n]s",string);
		
		tamanho = strleN (string) + 1;
		nomes[i] = (char*) malloc (tamanho * sizeof(char));
		if (nomes[i] == NULL) {
			printf ("Erro: erro na alocacao de memoria !!\n");
			exit(1);
		}
		else { 
			printf ("Memoria alocada por malloc() com sucesso ! \n");
			strcpY (nomes[i], string);
		}
	}
	// Fun��o: exibir nomes
	void exibir (char *nomes[], int i)
	{
		for (i = 0; i < 5; i++) {
			printf("%s",*(nomes + i));
		printf("\n");
		}
	}
	
int main ()
{
	char *nomes [5];
	char destino[70];
	int i;
	
	for (i = 0; i < 5; i++) {
		entradaDados (nomes, i);
	}
	
	exibir(nomes, i);
	
	// Desalocar mem�ria:
	for (i = 0; i< 5; i++) {
		free(nomes[i]);
	}
	
	return 0;
}
