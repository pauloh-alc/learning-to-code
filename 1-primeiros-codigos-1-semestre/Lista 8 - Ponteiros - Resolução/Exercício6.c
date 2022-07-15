#include <stdio.h>

int main ()
{	// Exibe os elementos do vetor vec [] = {4,9,13}
	// O processo ocorre por meio da altera��o do endere�o
	// que o ponteiro vec armazena. Isso permite o acesso ao
	// conte�do presente nesses endere�os.
	
	int vec[] = {4 ,   9,   13};
// endere�o     900 | 904 | 908
	int i;
	int *vet;
	vet = &vec[0]; // poderia ser vet = vec
	// vet guarda o endere�o de v[0].
	// vamos supor que o endere�o de mem�ria de v[0] seja 900 
	
	for (i = 0; i < 3; i++) {
		printf("%d,",*(vet+i));
	}
	// Memory:
	// 1int 4 bytes
	// i = 0 | 0 < 3 [verdade] | *(900 + 0int) = 900 | tela: 4,
	// i = 1 | 1 < 3 [verdade] | *(900 + 1int) = 904 | tela: 4,9,
	// i = 2 | 2 < 3 [verdade] | *(900 + 2int) = 908 | tela: 4,9,13,
	// i = 3 | 3 < 3 [falso] | sai do la�o for. 
	
	printf("\n");
	for (i = 0; i < 3; i++) {
		printf("%p\n",vet+i);
	}
	return 0;
}
