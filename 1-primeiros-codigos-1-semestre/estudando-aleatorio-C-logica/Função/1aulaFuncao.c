#include <stdio.h>
// Procedimento: uma fun��o que n�o devolve nada (void)

void olaMundo(void)
{
	printf("Ola Mundo !! \n");	
}

// Fun��o: uma fun��o com retorno (int, float, double...)
void soma(int a, int b)
{	
	int c; // 'c' � uma vari�vel local. Pertencendo assim somente ao Escopo da fun��o soma()
	c = a + b;
	printf("Soma = %d. \n",c);
	olaMundo();
}

int entrada()
{
	int x, y; // Essa vari�veis s� v�o ser reconhecidas nesse escopo
	printf("Entre com o valor de 'x': ");
	scanf("%d",&x);
	printf("Entre com o valor de 'y': ");
	scanf("%d",&y);
	
	soma(x,y); // 'x' e 'y' s�o os par�metros.
}

int main()
{	
	entrada();
	return 0;
}
