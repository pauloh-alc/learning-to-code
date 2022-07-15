#include <stdio.h>
/*
	Fun��o: Recebe um n�mero inteiro e retorna a soma dos divisores desse n�mero.
	Dados de entrada:
		 n: n�mero fornecido pelo usu�rio.
	Dados de sa�da:
		 soma: armazena a soma dos divisores do n�mero fornecido pelo usu�rio.

*/

int somaDosDivisores(int n)
{
	int i, soma = 0;
	
	if (n == 0) return -1;
	
	for (i = 1; i <= n; i++) {
		if (!(n % i)) soma += i;
	}
	
	return soma;
}
int main()
{
	int valor, resultado;
	
	// Entrada de dados:
	printf("Entre com um valor inteiro positivo: ");
	scanf("%d",&valor);
	
	resultado = somaDosDivisores(valor);
	
	if (resultado == -1) printf("Erro: nao e possivel obter a soma dos divisores do numero 0. \n");
	else				 printf("A soma dos divisores do numero %d e: %d. \n", valor, resultado);
	
return 0;
}
