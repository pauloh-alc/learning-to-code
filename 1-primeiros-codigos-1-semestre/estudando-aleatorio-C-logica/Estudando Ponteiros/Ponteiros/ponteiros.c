#include <stdio.h>

	void troca (int x, int y)
	{
		int temp;
		
		x = y;
		y = temp;
		
	}

int main ()
{
	int a;
	int *b; // endere�o de mem�ria - ponteiro que ir� "apontar" para int
	// apontar - � ter o endere�o de mem�ria de uma mem�ria
	a = 2;
	b = &a; // b aponta para a
	
	*b = 5;
	
	printf("end(a) = %p, valor(a) = %d \n", &a, a);
	printf("end(b) = %p, valor(a) = %x \n", &b, b);
	return 0;
}
