// C�digo para Estudo:
#include <stdio.h>
#define TAM 20
/*
	Fun��o: Converte os hor�rios 1 e dois para um �nica grandeza (segundos).
	Dados de entrada: 
		h: horas.
		m: minutos.
		s: segundos.
	Sa�da de dados:
		temp: devolve o hor�rio convertido para segundos.
*/
int converteHorario (int h, int m, int s)
{
	int temp;
	
	h = h * 60 * 60;
	m = m * 60;
	temp = h + m + s;
	
	return temp;
}
/*

	Fun��o: Calcula a diferen�a entre dois hor�rios.
	Dados de entrada:
		h1: armazena a hora do hor�rio 1 digitada pelo usu�rio.
		m1: armazena os minutos do hor�rio 1 digitada pelo usu�rio.
		s1: armazena os segundos do hor�rio 1 digitada pelo usu�rio.
		h2: armazena a hora do hor�rio 2 digitada pelo usu�rio.
		m2: armazena os minutos do hor�rio 2 digitada pelo usu�rio.
		s2: armazena os segundos do hor�rio 2 digitada pelo usu�rio.
	Sa�da de dados:
		dif: diferen�a entre hor�rio 1 e hor�rio 2 em segundos. Posteriormente 
		     dif � passada como argumento da fun��o converteParaRelogio(). 
*/

void diferencaHora (int h1, int m1, int s1,
				    int h2, int m2, int s2)
{
	int temp1, temp2, dif;
	
	temp1 = converteHorario (h1, m1, s1);
	temp2 = converteHorario (h2, m2, s2);
	
	dif = temp1 - temp2;
	
	if (dif < 0) dif = -dif;
	
	printf("Diferenca em HH:MM:SS e:"); 
	converteParaRelogio(dif);
	
}
/*
	Fun��o: Converte um determinado tempo em segundos para o seguinte formato:
			HH:MM:SS, exemplo - 3660 segundos � a mesma coisa que 1h:01min:00s.
	Dados de entrada: 
		seg: total de segundos ap�s a diferen�a entre hor�rio 1 e 2.
	Sa�da de dados:
		Exibe diferen�a entre hor�rio 1 e 2 no formato HH:MM:SS.
	
*/
void converteParaRelogio(int seg)
{
	int horas, minutos, segundos;
	
	horas = seg / 3600;          
	minutos = seg % 3600; 
	segundos = minutos % 60;
	minutos = minutos / 60;        
	 
	printf("\n%02d:%02d:%02d ",horas,minutos,segundos); 
}

int main()
{	
    // Dicion�rio de dados 
	int horas1, minutos1, segundos1, horas2, minutos2, segundos2;
	
	// Entrada de dados:
	printf("Entre com um horario 1 no formato HH:MM:SS >>> ");
	scanf("%d:%d:%d",&horas1,&minutos1,&segundos1);
	
	printf("Entre com um horario 2 no formato HH:MM:SS >>> ");
	scanf("%d:%d:%d",&horas2,&minutos2,&segundos2);
	
	diferencaHora(horas1, minutos1, segundos1,
				  horas2, minutos2, segundos2);	// horas1, minutos1, segundos1, horas2, minutos2, segundos2 s�o
				  								// os ingredientes que a fun��o diferencaHora precisa para calcular 
				  								// a diferen�a de hor�rio.
				  
return 0;
}
