#include <stdio.h>

int main(){
	// Exerc�cio 2 -
	
	int numero;

	printf("Entre com um valor inteiro e positivo >>");
	scanf("%d",&numero);
	
	if(numero % 2 == 0){
		printf("O numero informado (%d) e par.", numero);
	}
	else{
		printf("O numero informado (%d) e impar.", numero);
	}

return 0;

}