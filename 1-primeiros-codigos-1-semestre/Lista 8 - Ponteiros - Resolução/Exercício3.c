#include <stdio.h>
// Exerc�cio 3
int main ()
{
	float a = 2.8;
	char b = 'z';
	
	float *p1;
	char *p2;
	
	p1 = &a; // a vari�vel ponteiro agora det�m o endere�o de a / aponta para a
	p2 = &b; // a vari�vel ponteiro agora det�m o endere�o de b / aponta para b
	
	// Alterando os valores das vari�veis a e b 
	// atrav�s de ponteiros.
	
	printf("Antes: valor de (a) = %.2f, valor de (b) = %c \n",a,b);
	
	*p1 = 5.36;
	*p2 = 'p';
	
	printf("Depois: valor de (a) = %.2f, valor de (b) = %c \n",a,b);
	
	return 0;
}
