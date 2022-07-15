// Ci�ncia da Computa��o 2020.1.
// Nome - Paulo Henrique Diniz de Lima Alencar.
// Matr�cula - 494837.
// Quest�o 1:
#include <stdio.h>

int main(){
	// Dicion�rio de dados:
	int A,B;
	int i,
		num1,
		num2,
		maxDivisor;
		
	// Entrada de dados:
	printf("Entre com um numero A: ");
	scanf("%d",&A);
	printf("Entre com um numero B: ");
	scanf("%d",&B);
	
	// Processamento: divisores de cada n�mero individualmente.
	// Do n�mero 'A'
	i = 1;
	printf("Divisores de A: ");
	while(A / i > 0){
		if(A % i == 0){
			printf("%d, ",i);
		}
	i++;	
	}
	
	printf("\n");
	
	// Do n�mero 'B'
	i = 1;
	printf("Divisores de B: ");
	while(B / i > 0){
		if(B % i == 0){
			printf("%d, ",i);
		}
	i++;	
	}
	
	// Processamento: maior divisor comum (MDC)
	num1 = A;
	num2 = B;
	i = 2;
	maxDivisor = 1;          
	while(num1 != 1 || num2 != 1){
		
		if(num1 % i == 0 && num2 % i == 0) maxDivisor = maxDivisor * i;
		
		if(num1 % i == 0) num1 = num1 / i;
		if(num2 % i == 0) num2 = num2 / i;
		
		if(num1 % i != 0 && num2 % i != 0) i++;
	}
	
	printf("\nO MDC(%d,%d) = %d.\n",A,B,maxDivisor);
	
return 0;
}
