#include <stdio.h>

/*
	Fun��o: Verifica se os valores digitados pelo usu�rio atende �s condi��es para ser um tri�ngulo.
	Dados de entrada: 
		x: lado n�mero 1 do tri�ngulo.
		y: lado n�mero 2 do tri�ngulo.
		k: lado n�mero 3 do tri�ngulo.
	Sa�da de dados:
		Devolve 1: se atende as condi��es para ser um tri�ngulo.
		Devolve 0: caso contr�rio da condi��o citada acima.
*/

int eTringulo(int x, int y, int k)
{
	if (x < y + k && y < x + k && k < x + y) return 1; 
	
	return 0;
}

/*
	Fun��o: Determina o tipo de tri�ngulo. Equil�tero se, e somente se, 3 lados s�o iguais.
			Isosceles se, e somente se, 2 lados s�o iguais. Escaleno se, e somente se 3 lados s�o di-
			ferentes.
	Dados de entrada:
		x: lado n�mero 1 do tri�ngulo.
		y: lado n�mero 2 do tri�ngulo.
		k: lado n�mero 3 do tri�ngulo.
	Sa�da de dados:
		Devolve 0: Se tri�ngulo � Equil�tero.
		Devolve 1: Se tri�ngulo � Is�sceles .
		Devolve 2: Se tri�ngulo � Escaleno  .
*/
int qualTriangulo(int x, int y, int k)
{
	if (x == y && y == k) 				 return 0;
	else if (x == y || x == k || y == k) return 1;
	else 								 return 2;								   
}

int main()
{
	// Dicion�rio de dados:
	int lado1, lado2, lado3, verifica, triangulo;
	
	// Entrada de dados:
	printf("Entre com 3 valores > 0 respectivamente para os lados de um triangulo. \n");
	printf("Formato: lado1,lado2,lado\n >>");
	scanf("%d,%d,%d",&lado1,&lado2,&lado3);
	
	verifica = eTringulo(lado1, lado2, lado3);
	
	if (verifica) {
		triangulo = qualTriangulo(lado1, lado2, lado3);
		if (triangulo == 0) 	 printf("Triangulo Equilatero !! \n");
		else if (triangulo == 1) printf("Triangulo Isosceles !! \n") ;
		else 					 printf("Triangulo Escaleno !! \n")  ;
	}
	else 		  				 printf("\n Erro: os dados digitados nao correspondem ao valores dos lados de um triangulo !! \n");
	
return 0;
}
