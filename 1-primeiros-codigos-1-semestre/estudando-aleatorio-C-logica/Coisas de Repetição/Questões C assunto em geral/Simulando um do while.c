#include <stdio.h>

int main(){
	int numero;
	// SIMULA��O DO LA�O 'do while'
	;
	/*
	do{
		printf("Entre com um numero positivo:");
		scanf("%d",&numero);
	}while(numero <= 0);
	*/
	
	while(1){  							// poderia ser !0    (pois, zero em C � falso, nega��o de falso � verdadeiro).
		printf("Entre com um valor: ");
		scanf("%d",&numero);
		
	if(numero >= 0) break;
	}
return 0;
}
