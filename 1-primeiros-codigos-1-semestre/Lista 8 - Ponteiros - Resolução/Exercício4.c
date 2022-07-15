#include <stdio.h>

int main ()
{
	int v[] = {1,4,30,7,11,1,2,3,4,5,6,7,8,9,0,3,2,3,4,5,3,2,4,5,5};
	int *p;
	p = v; // o ponteiro agora guarda o endere�o do primeiro
		   // elemento de v[0..4]. Ele guarda o endere�o de v[0].
		   // poderia ser p = &v[0]
	
	/* 
	Portanto, p++ incrementa 1 inteiro ao endere�o de mem�ria atual de p.
	OBS: na maioria das m�quinas 1 inteiro corresponde a 4 bytes, para saber 
	quanto vale em bytes algum tipo, utilize a fun��o sizeof(tipo_dado).
	*/

	printf("Conteudo de (p) = %p \n",p);
	p++;
	printf("Depois de p++: \n");
	printf("Conteudo de (p) = %p \n",p); 
	
	/*
	Portanto, o conte�do para onde o ponteiro p aponta vai ser incrementado
	em 1. Se antes v[1] = 4, ap�s (*p)++; a vai passar a ser v[1] = 5.
	*/
	(*p)++;
	printf("O conteudo presente onde o ponteiro aponta, e = %d \n",*p);
	
	/*
	Com isso, o endere�o atual de p passar a ser 1 inteiro
	maior, isto �, 4 bytes s�o adicionados ao atual endere�o de 
	p. Se antes p guardava o endere�o 900 agora vai deter o 
	endere�o 904. Dessa forma, *(p++) vai mostrar o conte�do
	presente no endere�o 904. 
	*/
	*(p++);
	printf("O conteudo presente onde o ponteiro aponta, e = %d \n",*p);

	printf("O conteudo presente onde o ponteiro aponta, e = %d \n",*(p+10));
	
	return 0;
}
