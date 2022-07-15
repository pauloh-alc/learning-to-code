#include <stdio.h>
	/* 
		Fun��o: calcula a soma dos elementos de um vetor em um determinado intervalo.
		Dados de entrada:
			v[]:  vetor com 12 elementos |2||6||4||8||1||9||20||14||6||7||0||64|    <--- valores
										  0  1  2  3  4  5  6   7   8  9 10  11     <--- �ndices
			x  :  posi��o inicial do intervalo [x,y];
			y  :  posi��o final do intervalo   [x,y];
		Sa�da de dados:
			Devolve: a soma dos elementos do vetor no intervalo
					 [x,y], exemplo usado [1,3], ent�o a fun��o vai somar: |6|+|4|+|8| = 18
					                                                        1   2   3   <--- �ndices
	*/
	int somaIntervalo (int v[], int x, int y)
	{
		// Base da recurs�o:
		// Devolve: v[1]
		if (x == y) return v[y];
		
		return somaIntervalo (v, x, y - 1) + v[y];
		// Exemplo de execu��o: main() -> 
		//					              somaIntervalo(v, x = 1, y = 3) -> 
		//					              Devolve: v[1] + v[2] + v[3]	    somaIntervalo(v, x = 1, y = 2) -> 
		//										                            Devolve: v[1] + v[2]	            somaIntervalo(v, x = 1, y = 1) 
		//																	                                    Chegou no caso Base >> Devolve: v[1] para a fun��o que chamou ela.
	}																			
int main ()
{
	// Dicion�rio de dados:
	int i, f, soma;
	int vetor[] = {2,6,4,8,1,9,20,14,6,7,0,64};
	
	// Entrada de dados: i = 1, f = 3
	printf("Entre com a posicao  0 <= 'i' < 12: ");
	scanf("%d",&i);
	printf("Entre com a posicao  i <= 'j' < 12: ");
	scanf("%d",&f); 
	
	soma = somaIntervalo(vetor, i, f);
	printf("%d\n", soma);
	return 0;
}
