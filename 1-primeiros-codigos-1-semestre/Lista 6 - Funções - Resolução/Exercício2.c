#include <stdio.h>

/*
	Fun��o: Recebe um hor�rio no formato 2h, 40min e 10s e converte para segundos.
	Entrada de dados:
		h  : horas fornecidas pelo usu�rio.
		min: minutos fornecidos pelo usu�rio.
		seg: segundos fornecidos pelo usu�rio.
	Sa�da de dados:
		tSegundos: total de segundos.
	
*/

int converteParaSegundos(int h, int min, int seg)
{
	int tSegundos;
	
	h = (h * 60) * 60; 				// horas convertidos para segundos.
	min = min * 60;    				// minutos convertidos para segundos.
	tSegundos = h + min + seg; 		// total de segundos.
	
	return tSegundos;
}

void imprimeResultado(int h, int min, int seg)
{
	int segundosTotal;
	
	segundosTotal = converteParaSegundos(h, min, seg);
	printf("Segundos convertidos: %d. \n",segundosTotal);
}

int main()
{

	int hora, minutos, segundos;
	
	// Entrada de dados:
	
	printf("Entre com um horario no formato HH:MM:SS : ");
	scanf("%d:%d:%d",&hora,&minutos,&segundos);
	
	imprimeResultado(hora, minutos, segundos);
	imprimeResultado(2,40,10);
	// Posso chamar minha fun��o diversas vezes.
return 0;
}
