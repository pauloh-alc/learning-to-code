#include <stdio.h>

// Fun��o sem par�metro e sem retorno: Seu principal objetivo � evitar repeti��o de c�digo

void saudacao(void){
	printf("Bem-vindo ao programa Calculo Eletronico,\n");
	printf("onde seus calculos sao resolvido rapidamente\n");
	printf("Para mais informacoes e atualizacoes,\n");
	printf("Acesse o site: https://www.calculoeletronico.edu.br\n");
}

int main(){
	saudacao(); // Chamando a fun��o 
	printf("\n");
	saudacao();
return 0;
}
