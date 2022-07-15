#include <stdio.h>

int main ()
{
	int *pti;   // Declarando ponteiro
	int i = 10; // Declarando vari�vel i e atribuindo valor 10 para a mesma
	pti = &i;	// Ponteiro *pti agora aponta para i
				// pti guarda o endere�o de mem�ria onde i est� alocado.
	
	printf("pti = %p, endereco(i) = %p \n",pti,&i); // a) pti armazena endere�o de i.[VERDADE]
	printf("*pti = %d \n",*pti);   					// b) *pti � iguala 10. [VERDADE]
	
	
	printf("valor(i) antes = %d \n",i);
	*pti = 20;										// c) ao se executar *pti = 20; i passar� a ter valor 20. [VERDADE]
	printf("valor(i) depois = %d \n",i);
	
	i = 300;
	printf("valor(i) = %d, *pti = %d \n",i,*pti);   // d) ao se alterar o valor de i, *pti ser� modificado.  [VERDADE]
	
	printf("pti = %p \n",pti);                      // e) pti � igual a 10. [FALSO]
	
													// O conte�do de pti � o Endere�o onde i est� alocado,
													// esse endere�o pode variar de m�quina para m�quina ou 
													// de execu��o para execu��o.
}
