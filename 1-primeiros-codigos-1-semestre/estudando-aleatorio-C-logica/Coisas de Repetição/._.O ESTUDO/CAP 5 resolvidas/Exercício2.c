#include <stdio.h>

int main(){
	// Exerc�cio resolvidos - 2
	int i, j;
	int fat, N;
	float E;
	
	printf("Entre com um valor para 'N' inteiro e positivo >>> ");
	scanf("%d",&N);
	E = 1;
	printf("E = 1 + ");
	for(i = 1; i <= N; i++){
		fat = 1;
		for(j = 2; j <= i; j++){ // La�o respons�vel por calcular o 'fatorial'.
			fat = fat * j;
		}
		printf("1/%d!",i);
		if(i < N) printf(" + "); // Codi��o para n�o aparecer o simbolo '+' no ultimo numero;
		E = E + 1.0 / fat; // 1.0 � importante, porque se foss somente '1'  o  'C' s� iria pegar a parte inteira;
		
		// Lembrando que:
		//  float / inteiro   Return 'float'
		//  inteiro / float   Return 'float'
    }
    printf("\n");
    printf("Valor de E = %.4f. \n", E);
    
 
    
return 0;
}
