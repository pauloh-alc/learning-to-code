#include <stdio.h>

int main(){
	// Exerc�cio 1 -
	int i, N;
	printf("Entre com o valor de 'N' >>> ");
	scanf("%d",&N);
	
	for(i = 1; i <= N; i++){
		printf("%d",i);
		if(i < N) printf(", ");
	}
return 0; 
}
