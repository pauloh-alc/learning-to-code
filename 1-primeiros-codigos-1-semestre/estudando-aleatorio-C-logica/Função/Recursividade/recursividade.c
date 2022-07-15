#include <stdio.h>
// n! = n*(n-1)                   5! = 5 * 4 * 3 * 2 * 1 = 5 * 4!
// 1! = 1  BASE DA RECURS�O.

// Recursividade � uma t�cnica de programa��o onde a fun��o chama a si mesmo. FUN��O CHAMA ELA MESMA

// determinado caso = caso-base
// caso onde n�o precisa de uma chamada de fun��o pra resolver, � um caso simples, que retorna algo imediatamente. Ex: 1! = 1.


// chamada recursiva -> � uma chamada da mesma fun��o com argumentos um pouco mais simples do que os par�metros 
// da fun��o recebida.

int fatorial (int n) // vou supor que n = 5. ent�o n come�a de 5
{
	// caso-base
	if (n == 1) return 1;
	// chamada recursiva
	else {
		int f = fatorial (n - 1);  // fatorial (4) --> fatorial (3) --> fatorial (2) -- > fatorial (1) return 1
		int r = n * f; 
		return r;
	}
}// fatorial (1){ return 1;}


int main ()
{
	int numero, fat;
	
	printf("Entre com o numero: ");
	scanf("%d",&numero);    // digitei 5, numero = 5
	
	fat = fatorial (numero);
	
	printf("%d \n",fat);
	return 0;
}
