#include <stdio.h>
int potencia (int b, int e) // b = 2  e = 3
{
	if (e == 0) return 1;
	
	int p = potencia (b, e - 1); // main() -> potencia(2,3) -> potencia(2,2) -> potencia(2,1) -> potencia(2,0) return 1
	int pot = b * p;
	return pot;
}
int main ()
{
	int k, // Base de uma pot�ncia    .
		n; // Expoente de uma pot�ncia.
	
	int resposta;
	
	printf("Entre com um numero 'k': ");
	scanf("%d",&k); // 2
	printf("Entre com um numero 'n': ");
	scanf("%d",&n); // 3
	
	resposta = potencia (k, n);
	printf("%d elevado a %d e: %d. \n", k, n, resposta);
	return 0;
}
