#include <stdio.h>

int main ()
{
	int y, *p, x;
			  //  Mem�ria: //
	y = 0;    // y = 0
	p = &y;   // p guarda o endere�o onde y est� alocado na mem�ria
	x = 4;    // x = 4
	(*p)++;   // y = 0 + 1 = 1
	x--;      // x = 3
	(*p) += x;// *p = *p + x --> *p = 1 + 3 --> y = 4
	printf("y = %d \n",y);
	
	return 0;
}
