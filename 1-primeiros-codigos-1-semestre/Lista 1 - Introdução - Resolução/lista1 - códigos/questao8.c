#include <stdio.h>
#include <math.h>

int main(){
	// Descri��o: Escreva um programa que leia um valor x e retorne o resultado de sua aplica��o na fun��o
        //	      f(x) = 3x^2 -6x + 5.
	// Dados de entrada: valor de x.
	// Dados de sa�da: f(x) da fun��o.
	
	float x, y;	

	printf("\n\tCalcula o valor de f(x) = 3x^2 -6x + 5.\n\n ");
	
	printf("Entre com um valor para x >>" );
		scanf("%f",&x);
	
	y = (3 * pow(x,2)) - (6 * x) + 5;
	
	printf("O valor  da funcao f(%.1f) = 3x^2 -6x + 5 com x = %.2f eh : %.2f.\n",x, x, y);
	return 0;
}