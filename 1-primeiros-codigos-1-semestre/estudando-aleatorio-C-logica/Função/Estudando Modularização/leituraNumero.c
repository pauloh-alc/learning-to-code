#include <stdio.h>

// Fun��o sem lista de par�metros

int leituraNumero(void){
	int x;
	
	printf("Digite um numero: ");
	scanf("%d",&x);
	
	return x; // O retorno dessa fun��o � do tipo 'int'
}

int main(){
	printf("%d",leituraNumero());
return 0;
}
