#include <stdio.h>
#include <math.h>

int main(){
	// Descri��o: 11� - Escreva um programa que leia os dois catetos de um tri�ngulo ret�ngulo e retorne o valor da
	//		    hipotenusa.
	// Dados de entrada: valores do cateto 'a' e cateto 'b'.
	// Dados de sa�da: valor da hipotenusa.

	float a,b, h;
	printf("Entre com o valor do CATETO a >>");
		scanf("%f", &a);
	printf("Entre com o valor do CATETO b >>");
		scanf("%f", &b);

	// h= sqrt(a*a + b*b);

	h = sqrt(pow(a,2) + pow(b,2));
	
	printf("\nO valor da HIPOTENUSA e = %.2f.\n", h);
	return 0;
}
