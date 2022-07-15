#include <stdio.h>

int potencia (int b, int e, int cont)
{
	if (cont == e) return 1; // Base da recurs�o, isto �, meu crit�rio de parada.
	
	int devolveu = potencia (b, e, cont + 1);
	int r = b * devolveu;
	return r;
	 
	// OUTRA FORMA:
	//	return b * potencia (b, e, cont + 1);
	
	 // TESTES:
	 //		r = 8			   // r = 4				 // 2 ->> devolveu = 1 ->> r = b * devolveu ->> r = 2 * 1 --> r = 2.
	 // potencia (2,3,0) --> potencia(2,3,1) --> potencia(2,3,2) -> potencia (2,3,3) return 1 para a fun��o que chamou, isto � potencia(2,3,2)
}

int main ()
{
	// Dicion�rio de dados:
	int k, n, pot;
	
	// Entrada de dados:
	printf("Entre com um numero 'k' para base: ");
	scanf("%d",&k);
	
	printf("Entre com um numero 'n' para expoente: ");
	scanf("%d",&n);
	
	// Chamada dda fun��o:
	pot = potencia (k, n, 0);
	
	// Sa�da de dados:
	printf("%d",pot);
	
	return 0;
}
