#include <stdio.h>

int main(){
	// Descri��o: 6� - Leia um n�mero inteiro e imprima o seu antecessor e seu sucessor.
	// Dados de entrada: n�mero inteiro.
	// Dados de sa�da: antecessor e sucessor.
	
	int numero, antecessor, sucessor;
	
	printf("\tMostra o antecessor de um numero e o sucessor:\n");
	
	printf("\tUsuario, entre com um numero inteiro >>");
		scanf("%d",&numero);
	
	antecessor = numero - 1;
	sucessor = numero + 1;
	printf("\n\n");

	printf("O antecessor do numero %d eh %d.\n", numero, antecessor);
	printf("O sucessor do numero %d eh %d.\n", numero, sucessor);

	return 0;
}