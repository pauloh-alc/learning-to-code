#include <stdio.h>

int eDivisor(int x, int y){
	if(!y){
		return -1;  //  y = 0
	}
	if(x % y){
		return 0;  // N�o � divisor
	}
	return 1; // y � divisor
}

int main(){
	int a, 
		b;
	
	printf("Entre com os valores de x e y respectivamente >>> ");
	scanf("%d%d",&a,&b);
	
	int retorno = eDivisor(a,b);
	
	printf("%d",retorno);
return 0;
}
