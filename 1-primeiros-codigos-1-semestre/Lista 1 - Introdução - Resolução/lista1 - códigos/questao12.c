#include <stdio.h>
#include <math.h>
#define PI 3.14

int main(){
	// Descri��o: Leia um �ngulo em graus e apresente-o convertido em radianos. A f�rmula da convers�o �
	//	      R=G�(p /180) , sendo G o �ngulo em graus e R em radianos. (Obs: defina uma constante para o
	//	      valor de p ).
	// Dados de entrada: valor em graus.
	// Dados de sa�da: valor em radianos.
	
	float G,R;
	printf("\tConverte graus em radianos:\n");
	
	printf("Digite um valor em GRAUS >>");
		scanf("%f", &G);
	
	R = G * (PI / 180);
	
	printf("%.1f GRAUS, convertidos para RADIANOS e = %f radianos.\n ", G,R);
	return 0;
}