#include <stdio.h>
#include <math.h>

int main(){
	// Descri��o: 19� - Fa�a um programa que leia um n�mero inteiro positivo de tr�s d�gitos e imprima o n�mero
	//	      formado pelos d�gitos invertidos do n�mero lido. Ex: N�mero lido = 123 ? N�mero escrito = 321.
	// Dados de entrada: n�mero inteiro de 3 digitos.
	// Dados de sa�da: n�mero inteiro invertido.
	
	int numero, dezenas, centenas, resto, unidades;
	printf("Entre com um numero inteiro positivo de 3 digitos >>");
		scanf("%d", &numero);
	centenas = numero / 100;
	resto = numero % 100;
	dezenas = resto / 10;
	unidades = resto % 10;
		
	printf("O numero invertido fica >> %d%d%d", unidades,dezenas,centenas);
	return 0;
}