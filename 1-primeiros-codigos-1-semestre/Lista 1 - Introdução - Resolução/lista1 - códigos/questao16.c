#include <stdio.h>
#include <math.h>

int main(){
	// Descri��o: 16� - O imposto brasileiro sobre acess�rios de video-games � de 40%. Escreva um programa que leia
	//	      o valor de um acess�rio e retorne a quantia repassada ao governo por imposto.
	// Dados de entrada: Valor do acess�rio.
	// Dados de sa�da: quantia repassada para o governo por imposto.
	
	float valor, imposto;

	printf("Entre com o valor de um Acessorio >>");
		scanf("%f",&valor);
	
	imposto = valor * 40/100;

	printf("O valor repassado para o governo por IMPOSTOS E = %.3f.\n",imposto);
	return 0;

}