#include <stdio.h>

int main(){
	// Exerc�cio 7 -
	int i, N;
	printf("Entre com um valor 'N' >>> ");
	scanf("%d",&N);
	
	printf("Divisores de %d sao: ",N);
	for(i = 1; i <= N; i++){
		if(!(N % i)){
			printf("%d",i);
			if(i < N) printf(", ");
		}
	}
return 0;
}
