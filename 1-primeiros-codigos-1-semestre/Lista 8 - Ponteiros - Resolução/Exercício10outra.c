#include <stdio.h>
	// Fun��o: dobra cada elemento do vetor v[0..4]
	// Entrada de dados:
	//		v[0..4] - vetor de elementos inseridos pelo usu�rio.
	// Sa�da dados:
	// 		Exibe: elementos do vet[0..4] com valor dobrado.
	void dobro (int vet[])
	{
		int *j, *f;
		f = &vet[5]; // o ponteiro armazena o endere�o v[5]
		
		printf("\nvet dobro = ");
		for (j = vet; j < f; j++) {
			(*j) *= 2;
			printf("%d, ",*j);
		}
	}
int main ()
{
	// Dicion�rio de dados:
	int i;
	int vet[5];
	
	// Leitura de dados:
	for (i = 0; i < 5; i++) {
		printf("vet[%d] = ",i);
		scanf("%d",&vet[i]);
	}
	
	// Chamada de fun��o:
	dobro (vet);
	
	return 0;
}
