// Ci�ncia da Computa��o 2020.1.
// Nome - Paulo Henrique Diniz de Lima Alencar.
// Matr�cula - 494837.
// Quest�o 4:
#include <stdio.h>
#define TAM 50
int main(){
	// Dicion�rio de dados:
	char S[TAM], R[TAM];
	char caractere;
	int i,n;
	
	// Entrada de dados:
	printf("Entre com um string 'S': ");
	gets(S);
	
	printf("Entre com o 'caractere' que voce deseja remover: ");
	scanf("%c",&caractere);
	
	// Processamento:
	i = 0;
	n = 0;
	while(S[i] != '\0'){
		if(S[i] != caractere){
			R[n] = S[i];
			n++;
		}
	i++;
	}
	R[n] = '\0';
	
	// Sa�da: escrevendo R na tela
	i = 0;
	while(R[i] != '\0'){
		printf("%c,",R[i]);
	i++;
	}
	
return 0;
}
