#include <stdio.h>
#include <string.h>

// Estrutura do tipo conta.
struct conta{
	// As vari�veis de uma estrutura s�o frequentemente chamadas de 'campos' ou 'atributos' da estrutura.
	int num;	
	float saldo;
	char nome[50];
};

int main () 
{
	// conta - � o tipo da estrutura.
	struct conta C[2];
	// C � a vari�vel do tipo 'conta'. 

	C[0].num = 10;
	C[0].saldo = 5.50;
	strcpy(C[0].nome,"Rafael");
	
	C[1].num = 11;
	C[1].saldo = 6.0;
	strcpy(C[1].nome, "Paulo");
	 
	printf("Conta de %s \n",C[0].nome);
	printf("Numero = %d, Saldo = %.2f \n",C[0].num,C[0].saldo);
	
	printf("Conta de %s \n",C[1].nome);
	printf("Numero = %d, Saldo = %.2f \n",C[1].num,C[1].saldo);
	
	return 0;
}
