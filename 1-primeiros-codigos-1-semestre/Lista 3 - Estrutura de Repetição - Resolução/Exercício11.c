#include <stdio.h>

int main(){
	// Exerc�cio 11 -
	
	int valorInicial, razao, quantidadeElementos;
	int i, elemento;
	
	printf("Entre com o valor inicial da sua progressao aritmetica PA >>>");
	scanf("%d",&valorInicial);
	printf("Entre com a razao da sua progressao aritmetica PA >>>");
	scanf("%d",&razao);
	printf("Entre com a quantidade demelementos da sua progressao aritmetica PA >>>");
	scanf("%d",&quantidadeElementos);
	
	printf("\nProgressao Aritimetica = ");
	elemento = valorInicial;
	for(i = 1; i <= quantidadeElementos; i++){

		printf("%d",elemento);
		elemento = elemento + razao;
		
		if(i < quantidadeElementos) printf(", "); // S� para n�o mostrar a ultima v�rgula da sequ�ncia.
	}
	
	printf("\n\n");
	
return 0;
}
