#include <stdio.h>
// Exerc�cio 10

	// Fun��o: mostra os elementos de um vetor, que foram inseridos pelo usu�rio.
	void vetRaiz (int vet[], int *i, int *f)
	{
		printf("\nvet lido = ");
		for (i = vet; i < f; i++) {
			printf("%d, ",*i);
		}
	}
	
	// Fun��o: calcula e exibe o dobro dos elementso de um vetor, que foram 
	// inseridos pelo usu�rio.
	void dobro (int vet[], int *i, int *f)
	{
		printf("\nvet dobro = ");
		for (i = vet; i < f; i++) {
			printf("%d, ",(*i)*2);
		}
	}
	
int main ()
{
	// Dicion�rio de dados:
	int vet[5];
	int *i, *f;
	int k = 0;
	
	f = &vet[5]; // ponteiro armazena endere�o de vet[5].
	
	// Leitura de dados:
	for (i = vet; i < f; i++) {
		printf("v[%d] = ",k);
		scanf("%d",i);
	k++;
	}
	
	// Chamda das fun��es: 
	vetRaiz (vet, i, f); 
	dobro   (vet, i, f);
	
	return 0;
}
