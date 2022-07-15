#include <stdio.h>

int main () {
	// Dicion�rio de dados:
	char binario[30];
	char binario_invertido[30];
	int lenght, i, n;
	int soma = 0, potencia = 0; 
	
	// Entrada de dados:
	printf("Entre com uma sequencia binaria: ");
	scanf("%s",binario);
	
	// Quantidade de caracteres:
	lenght = 0;
	while (binario[lenght] != '\0') lenght++;
	
	// Invertendo sequ�ncia bin�ria para facilitar no c�lculo:
	n = 0;
	binario_invertido[lenght] = '\0';
	for (i = lenght - 1; i >= 0; i--) {
		binario_invertido[i] = binario[n];
		n++;
	}
	
	// Convertendo de bin�rio para decimal:
	i = 0;
	while (binario_invertido[i] != '\0') {
		
		if (binario_invertido[i] == '1') {
			if (i == 0) potencia = 1;
			else        potencia = potencia * 2;
			soma = soma + potencia;
		}
		else {
			if (i == 0) potencia = 1;
			else        potencia = potencia * 2;
		}
	i++;
	}
	
	// Sa�da de dados:
	printf("\nnumero = %d",soma);
	
	return 0;
}
