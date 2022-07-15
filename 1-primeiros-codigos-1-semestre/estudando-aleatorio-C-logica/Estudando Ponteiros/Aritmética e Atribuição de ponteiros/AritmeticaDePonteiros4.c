#include <stdio.h>
// Aritim�tica de ponteiros: imprimindo elementos de um vetor com ponteiros.
int main ()
{	
	int v[5] = {1,2,3,4,5};
	int *f = &v[5];       // v = [1][2][3][4][5][ ][ ][ ]
						//        0  1  2  3  4  5 
	int *i;
	
	for (i = v; i < f; i++) {
		printf("[%d] \n",*i);
	}
	
	// Como um vetor � alocado sequencialmente na mem�ria, podemos comparar
	// vetores e saber quem est� antes e depois. Por isso fiz a comparar i < f (feita uma compara��o de endere�os de mem�ria).
	
	return 0;
}
