#include <stdio.h>

int main ()
{
	char *p = "Paulo"; // mesmo que   char p[] = "Paulo";
	
	//putchar(*p);
	printf("%c",*p); 
	p++; // acrescentando 1char(1byte) no endere�o de p
	printf("%c",*p);
	return 0;
}
