#include <stdio.h>
// Array � um Ponteiro
int main ()
{
	// Lembrando que um vetor � um ponteiro.
	int a[3];
	
	a[0] = 1;
	a[1] = 2;
	a[2] = 3;
	
	printf("a[0] = %d, a[1] = %d, a[2] = %d \n",*a, *(a + 1),*(a + 2));
									// Realizando a aritm�tica de ponteiros.
									
									
	char s[] = "Paulo Henrique";
	char *p = "Paulo";
	
	puts(s);
	puts(p);
	
	return 0;
}
