#include <stdio.h>
#include <math.h>

int main(){
	// Descri��o: 9� - Escreva um programa que leia os coeficientes A, B e C de uma equa��o Ax2+Bx+C=0 e calcule
	//		   o valor do discriminante delta e as ra�zes da equa��o.
	// Dados de entrada: coeficientes das raizes.
	// Dados de sa�da: delta e raizes da equa��o.
	
	float a,b,c, delta, x1,x2;
	
	printf("Entre com o coeficiente a >>");
		scanf("%f", &a);
	printf("Entre com o coeficiente b >>");
		scanf("%f", &b);
	printf("Entre com o coeficiente c >>");
		scanf("%f", &c);
	
	delta = b*b - 4*a*c;
	
	if(delta < 0){
		printf("Nao possui raizes reais !!!");
	}else{
		if(delta == 0){
			x1 = (- b + sqrt(delta)) / (2*a);
			printf("So possui uma raiz!\n");
			printf("x1 = %f\n", x1);
		}else{
			x1 = (- b + sqrt(delta)) / (2*a);
			x2 = (- b - sqrt(delta)) / (2*a);
			printf("x1 = %f\n", x1);
			printf("x2 = %f\n", x2);
		}
	}
	return 0;
}