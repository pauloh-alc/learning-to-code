#include <stdio.h>
#include <math.h>

int main(){
	// Descri��o:Escreva um programa que leia as coordenadas (x,y) de um ponto e retorne a sua dist�ncia at� a
	//	     origem do sistema de coordenadas.
	// Dados de entrada: ponto x e y (x,y);
	// Dados de sa�da: dist�ncia at� a origem (0,0)
	float x,y, distancia;
	printf("Entre com o valor de x >>");
		scanf("%f",&x);
	printf("Entre com o valor de y >>");
		scanf("%f",&y);
	
	
	distancia = sqrt(pow(abs(x),2) + pow(abs(y),2));
	
	printf("A DISTANCIA dos pontos (%.1f, %.1f) da ORIGEM (0,0) e = %f.\n", x, y, distancia);
}
