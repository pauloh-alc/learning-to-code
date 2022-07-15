#include <stdio.h>
/*
	Fun��o: Calcula a soma dos n primeiros n�meros naturais.
	Dados de entrada:
		n: n�mero natural fornecido pelo usu�rio.
	Dados de sa�da:
		soma: soma dos n primeiros n�meros naturais come�ando de 1.
*/
int somaInt(int n)
{
	int i, soma = 0;
	
	for (i = 1; i <= n; i++) {
		soma = soma + i;
	}
	
	return soma;
} 

int main()
{	
	int n, resultado;
	
	// Entrada de dados:
	do {
		printf("Entre com um numero 'n': ");
		scanf("%d", &n);
		
		resultado = somaInt(n);
		
		// Sa�da de dados:
		printf("A soma dos '%d' primeiros numeros naturais e: %d. \n", n, resultado);
	} while (n > 0);

return 0;
}
