#include <stdio.h>

/*  
	Fun��o: calcula o dobro de um n�mero.
	Entrada de dados:
 		x: valor inteiro fornecido pelo usu�rio.
 	Sa�da de dados:
 		x: n�mero fornecido pelo usu�rio multiplicado por 2.
 		
*/

	int dobro(int x)
	{
		x = x * 2;
		return x;
	}

int main()
{
	int numero, resultado;
	
	// Entrada de dados:
	printf("Entre com um numero inteiro: ");
	scanf("%d",&numero);
	
	resultado = dobro(numero);
	
	printf("O dobro do numero %d e: %d. \n", numero, resultado);
return 0;
}
