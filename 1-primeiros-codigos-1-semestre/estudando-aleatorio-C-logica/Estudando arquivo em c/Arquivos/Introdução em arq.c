#include <stdio.h>
#include <stdlib.h>
int main ()
{
	FILE *arq; // arq � um ponteiro.
	char nome[50];
	char ch;
	// Entrada de dados:
	printf("Me diga seu nome: ");
	fflush(stdin);
	scanf("%[^\n]s",nome);
	
	// Criar um arquivo:
	arq = fopen("olaMundo.txt","w");
	
	if (arq == NULL) {
		puts("Arquivo nao pode ser criado !\n");
		exit(1);
	}
	// Escrita em arquivo.
	//fputs("Ola Mundo!",arq);
	fprintf(arq,"Bem-vindo %s\n",nome);
	
	
	fclose(arq); // fechar o arquivo.
	
	//fopen= ("NomeDoArquivo","modoDeUso");
	// Modos de Uso:
	// r = read (apenas leitura de uma arquivo existente)
	// w = write (cria um arquivo e escreve conte�do nele)
	// r+ = read & write (l� e escreve em um arquivo j� exitente)
	// w+ = read & write (l� e escreve e cria um arquivo novo).
	
	return 0;
}
