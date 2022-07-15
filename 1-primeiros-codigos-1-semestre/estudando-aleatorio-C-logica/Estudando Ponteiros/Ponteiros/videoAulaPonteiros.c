#include <stdio.h>

int main ()
{
	// Dicion�rio de dados: reservado espa�os na mem�ria para cada vari�vel.
	char   a = 'R';
	int    b = 2;
	float  c = 4.5f;
	double d = 3.14;
	
	// sizeof() - fun��o que retorna o tamanho em bytes de cada tipo.
	// '&' operador "endere�o de".
	
	printf("size(a) = %ld bytes, location(a) = %p \n", sizeof(a),&a);
	printf("size(b) = %ld bytes, location(b) = %p \n", sizeof(b),&b);
	printf("size(c) = %ld bytes, location(c) = %p \n", sizeof(c),&c);
	printf("size(d) = %ld bytes, location(d) = %p \n", sizeof(d),&d);
	
	return 0;
}
