#include <stdio.h>
/*
	Fun��o: Verifica se valores de entrada do usu�rio corresponde a um
			tri�ngulo ret�ngulo.
	Dados de entrada:
		x: lado 1 do tri�ngulo.
		y: lado 2 do tri�ngulo.
		z: lado 3 do tri�ngulo.
	Sa�da de dados:
		Devolve 1: se for um tri�ngulo ret�ngulo.
		Devolve 0: caso contr�rio da condi��o acima.
	 
*/
int verificaTriRet (int x, int y, int z)
{
	
	if (x > y && x > z) {
		if (x*x == y*y + z*z) {
			return 1;
		}	
	}
	else if (y > x && y > z) {
		if (y*y == x*x + z*z) {
			return 1;
		}
	}
	else {
		if (z*z == x*x + y*y) {
			return 1;
		}
	}
	return 0;
}
/*
	Fun��o: respons�vel exibir mensagem para o usu�rio.
	Dados de entrada: 
		x: lado 1 do tri�ngulo.
		y: lado 2 do tri�ngulo.
		z: lado 3 do tri�ngulo.
	Sa�da de dados:
		Exibe se � ou n�o triangulo ret�ngulo .
		
*/
void exibir (int l1, int l2, int l3)
{
	int retorno;
	
	retorno = verificaTriRet (l1, l2, l3);
	
	if (retorno) printf("E um triangulo retangulo ;D !! \n");
	else 		 printf("Nao e triangulo retangulo :( !! \n");		 
}
int main()
{
	// Dicion�rio de dados:
	int lado1, lado2, lado3;
	
	// Entrada dados:
	printf("Entre com tres lados de um triangulo respectivamente no seguinte formato lado1,lado2,lado3. \n");
	printf(">>");
	scanf("%d,%d,%d",&lado1,&lado2,&lado3);
	
	exibir (lado1, lado2, lado3);

return 0;
}
