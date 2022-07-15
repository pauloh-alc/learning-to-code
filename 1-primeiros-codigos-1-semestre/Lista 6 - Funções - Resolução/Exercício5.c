#include <stdio.h>
#define tamanhoString 20
#define TAM 12
/*
	Fun��o: encontra a posi��o da maior temperatura no v[0..TAM-1].
	Dados de entrada:
		meses: tamanho do vetor que deve ser percorrido 0..TAM-1.
		v[]  : vetor v[0..TAM-1] que armazena as temperaturas do ano.
		mes  : matriz mes[0..TAM-1][tamanhoString] respons�vel por armazenar
			   o nome dos meses do ano. 
	Sa�da de dados:
		Exibe: a maior temperatura encontrada e em qual m�s ela ocorreu.
*/
void maiorTemp(int meses, float v[], char mes[][tamanhoString])
{
	int i, posicao = 0;
	float maior;
	
	maior = v[0];
	for (i = 1; i < meses; i++) {
		if (v[i] > maior) {
			maior = v[i];
			posicao = i;
		}
	}
	printf("Maior temperatura do ano e: %.2f no mes de %s. \n", maior, mes[posicao]);
}

/*
	Fun��o: encontra a posi��o da menor temperatura no v[0..TAM-1].
	Dados de entrada:
		meses: tamanho do vetor que deve ser percorrido 0..TAM-1.
		v[]  : vetor v[0..TAM-1] que armazena as temperaturas do ano.
		mes  : matriz mes[0..TAM-1][tamanhoString] respons�vel por armazenar
			   o nome dos meses do ano. 
	Sa�da de dados:
		Exibe: a menor temperatura encontrada e em qual m�s ela ocorreu.
*/

void menorTemp(int meses, float v[], char mes[][tamanhoString])
{
	int i, posicao = 0;
	float menor;
	
	menor = v[0];
	for (i = 1; i < meses; i++) {
		if (v[i] < menor) {
			menor = v[i];
			posicao = i;
		}
	}
	printf("A menor temperatura do ano e: %.2f no mes de %s. \n", menor, mes[posicao]);
}

int main()
{
	// Dicion�rio de dados:
	char mesesAno[TAM][tamanhoString] = {
									{"Janeiro"},{"Fevereiro"},{"Marco"},
									{"Abril"},{"Maio"},{"Junho"},
									{"Julho"},{"Agosto"},{"Setembro"},
									{"Outubro"},{"Novembro"},{"Dezembro"},
								   };
	float temp[TAM];
	int i;
	
	// Entrada de dados:
	// Trecho respo�vel por armazenar cada temperatura do m�s no vetor temp[0..TAM-1]
	for (i = 0; i < TAM; i++) {
		printf("Mes %d: ", i + 1);
		scanf("%f",&temp[i]);
	}
	
	// Chamando das fun��es.
	maiorTemp(TAM, temp, mesesAno);
	menorTemp(TAM, temp, mesesAno);
	
	// A vantagem de usar fun��o � que eu n�o precisei criar �s mesmas instru��es, igual a da fun��o menorTemp() para
	// descobrir a menor temperatura de outro vetor, apenas precisei chamar a fun��o j� criada quando precisei da utilidade
	// que ela fornece, por�m tive que ter o cuidado, passando os argumentos corretamente. Isso me fez economizar linhas c�digo, 
	// processamento e armazenamento. Tornando assim, o programa mais confi�vel, elegante e eficiente.
	
	float vetor[12] = {22.5,15.40,30,-6.0,44.4,33.4,29.3,8,11.2,33.58,14.56,12.78};
	menorTemp(12, vetor, mesesAno);
}
