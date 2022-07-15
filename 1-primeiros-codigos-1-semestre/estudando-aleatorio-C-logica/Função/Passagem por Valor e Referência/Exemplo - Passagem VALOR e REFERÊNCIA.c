#include <stdio.h>
// passagem por valor = copia o argumento para o par�metro.
// passagem por refer�ncia = par�metro e argumento est�o ligados
// ou seja, se alterar o par�mtro, altera tbm o argumento.

void f (int a, float *b, char *c)
{
	*b = (float) a / 2;
	*c = a + 'a';
}

int main () 
{
	int x;
	float y;
	char z;
	
	printf("Entre com valor de x:");
	scanf("%d",&x);
	
	f(x, &y, &z); // argumento � a express�o ou 'vari�vel' na chamada da fun��o. Nesse caso, x,y,z s�o argumentos.

	printf("x = %d, y = %.2f, z = %c \n", x, y, z);
	
}
