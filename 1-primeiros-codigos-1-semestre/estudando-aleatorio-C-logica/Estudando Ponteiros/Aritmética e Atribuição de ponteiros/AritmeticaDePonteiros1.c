#include <stdio.h>
// Aritim�tica de ponteiros:
int main ()
{
	int v[6] = {1,2,3,4,5};
	int *p;

	// Endere�o do primeiro elemento do v[0..4], isto �, v[0] est� em p. 
	// Portanto, p aponta para essa posi��o.
	// Poderia ser p = &v[0].
	p = v;
	
	printf("Antes: %d \n",v[0]);
	
	*p = 10; // Estou alterando o conte�do para onde ponteiro p aponta.
	
	printf("Depois: %d \n",v[0]);
	printf("Depois: %d \n",*v);
	
	
	return 0;
}
