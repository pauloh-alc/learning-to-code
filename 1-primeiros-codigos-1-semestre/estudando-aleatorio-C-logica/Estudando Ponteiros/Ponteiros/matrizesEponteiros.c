#include <stdio.h>
// Matrizes s�o ponteiros. E como um vetor � um tipo espec�fico de matriz, temos que um vetor � um ponteiro.
int main ()
{
	int i;
	int v[] = {1,2,3,4,5};
	int *p;
	
	p = v; // Estou enviando o vetor v[0..4] para o ponteiro p;
	
	// Vetor antes da altera��o.
	for (i = 0; i < 5; i++) {
		printf("v[%d] = %d. \n",i,v[i]);
	}
	
	printf("\n");
	
	// Processamento: Lembrando que elementos do vetor est�o armazenados de forma consecutiva / sequencialmente na mem�ria.
	// Obs: O ponteiro � um endere�o de mem�ria e ele armazena o endere�o do primeiro elemento que t� na mem�ria, 
	// por meio disso podemos acessar cada elemento do vetor por meio do seu endere�o. Como?
	// imagine que p inicialmente armazena o seguinte endere�o: p = 9000. Se realirzamos a seguinte opera��o: p = p + 1;
	// p vai para o endere�o p = 9004, pois 1 inteiro = 4 bytes
	 
	
	*p = 89; // Primeiro elemento do vetor v[0] vai ser alterado para n�mero 89.
	
	 p = p + 1; // Somando ao endere�o do ponteiro p
	 
	*p = 60;

	
	for (i = 0; i < 5; i++) {
		printf("v[%d] = %d. \n",i,v[i]);
	}
	return 0;
}
