#include <stdio.h>

int main(){
	// Descri��o: 7� - Escreva um programa que leia os lados de um ret�ngulo e retorne a sua �rea.
	// Dados de entrada: Lados de um ret�ngulo.
	// Dados de sa�da: �rea de um ret�ngulo.
	
	float base, altura, area;	
	
	printf("\t Calcula AREA de um retangulo:\n");
	
	printf("Digite o valor da base do retangulo >>");
		scanf("%f",&base);
	printf("Digite a altura do retangulo >>");
		scanf("%f",&altura);
	
	area = base * altura;
	
	printf("\nA AREA do retangulo eh: %.2f. \n\n", area);
	return 0;

}