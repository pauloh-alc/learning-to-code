#include <stdio.h>
#include <string.h>
#define SIZE 20
// Aritim�tica de ponteiros: imprimindo caracteres de uma string separando por virgula.
// Cada vers�o � mais otimizada que outra. Vers�o 5 mais otimizada.
int main ()
{
	char cor[SIZE] = "Vermelho";
	int i, n;
	char *p;
	
	// Vers�o 1:
	printf("Versao 1: ");
	for (i = 0; i < SIZE; i++) {
		printf("%c,",cor[i]);
	}
	printf("\n");
	
	// Vers�o 2:
	printf("Versao 2: ");
	for (i = 0; i < strlen(cor); i++) {
		printf("%c,",cor[i]);
	}
	printf("\n");
	
	// Vers�o 3:
	n = strlen(cor);
	printf("Versao 3: ");
	for (i = 0; i < n; i++) {
		printf("%c,",cor[i]);
	}
	printf("\n");
	
	// Vers�o 4:
	/* Vamos analisar o que acontece a cada REPETI��O:
	 * 2 acessos ao vetor cor[0..4]
	 * 1 compara��o
	 * 1 incremento inteiro
	 * 1 opera��o de escrita
	 */
	printf("Versao 4: ");
	for (i = 0; cor[i] != '\0'; i++) {
		printf("%c,",cor[i]);
	}
	printf("\n");
	
	// Vers�o 5:
	/* Vamos analisar o que acontece  a cada REPETI��O:
	 * 0 Acessos ao vetor. Acesso foi evitado gra�as ao uso de ponteiros.
	 * 1 compara��o
	 * 1 incremento no ponteiro
	 * 1 opera��o de escrita
	*/	
	printf("Versao 5: ");
	//   p = &cor[0];
	for (p = cor; *p != '\0'; p++) {
		printf("%c,",*p);
	}
	printf("\n");
	return 0;
}
