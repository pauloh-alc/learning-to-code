#include <stdio.h>
	
	// Fun��o: calcula a quantidade de caracteres de uma string.
	int minhaStrlen (char *nome)
	{
		int qtd = 0;
		
		char *i;
		i = &nome[0];
		
		while (*i != '\0') {
			qtd++;
		i++; // aritm�tica de ponterios, + (1byte) a cada itere��o
		}
	
	return qtd;
	}

int main ()
{
	char nome[30];
	
	printf("Entre com seu nome: ");
	scanf("%[^\n]s",nome);
	
	int tam = minhaStrlen(nome);
	printf("Quantidade de caracteres e: %d. \n",tam);
	
	return 0;
}
