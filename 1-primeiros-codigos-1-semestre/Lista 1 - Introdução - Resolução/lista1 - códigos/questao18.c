#include <stdio.h>
#include <math.h>

int main(){
	// Descri��o: 18� - Fa�a um programa que leia um n�mero inteiro positivo de 4 d�gitos e imprima 1 d�gito por
	//		    linha.
	// Dados de entrada: n�mero inteiro positivo.
	// Dados de sa�da: Imprimir um d�gito por linha.

	int numero, milhar, centena, dezena, unidade, resto;

	printf("Entre com um numero de 4 digitos >>");
		scanf("%d",&numero);

	milhar = numero / 1000;
	resto = numero % 1000;
	centena = resto / 100;
	resto = resto % 100;
	dezena = resto / 10;
	unidade = resto % 10;

	printf("%d\n", milhar);
	printf("%d\n", centena);
	printf("%d\n", dezena);
	printf("%d\n", unidade);
	return 0;
}