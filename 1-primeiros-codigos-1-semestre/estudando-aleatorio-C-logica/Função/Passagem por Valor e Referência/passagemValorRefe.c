#include <stdio.h>

void copia (int x, int b)
{
	b = b + x;  // Altera��o no b, n�o afetar� o a.
}

void referencia (int x, int *b)
{
	*b = *b + x; // Altera��o do b, modifica o a. Isso ocorre porque b est� apontando para a.
}

int main()
{
	int a = 0;
	
	copia (10, a);
	printf("a = %d \n", a);
	
	referencia (10, &a);
	printf("a = %d \n", a);
	
}
