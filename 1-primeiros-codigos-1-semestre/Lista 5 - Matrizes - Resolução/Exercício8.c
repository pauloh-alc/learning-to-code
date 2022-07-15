#include <stdio.h>
#define ALUNOS 3 
#define NOTAS 5
#define C 30 							// Usada para delimitar a quantidade de caracteres.

int main(){
	// Dicion�rio de dados:
	
	// O matriz bidimensional 'notas' permite o armazenamento de 15 nomes,  
	// com no m�ximo 29 caracteres cada string, pois � necess�rio guardar 
	// uma posi��o para armazenar o '\0'.
	char nomes[ALUNOS][C];
	
	float notas[ALUNOS][NOTAS];
	float media[ALUNOS]; 				// Usado para armazenar as m�dias de cada aluno.
	float soma, somaTotal, mediaFinal;
	int i,j;
	
	//Entrada de dados:
		// Preenchimento da matriz nomes[0..ALUNOS-1][0..C-1] com os nomes alunos:
	printf("\n Entre com as notas dos alunos: \n\n");
	for (i = 0; i < ALUNOS; i++) {
		printf(" Entre com o 'nome' do aluno %d: ",i + 1);
		scanf("%s",nomes[i]);
	}
	
		// Preenchimento das notas dos alunos:
	printf("\n Vamos preencher as notas dos alunos:\n\n");
	
	for (i = 0; i < ALUNOS; i++) {
		
		printf("[Aluno %d] \n",i + 1);
		
		for (j = 0;  j < NOTAS; j++) {
			printf(" Nota %d: ",j + 1);
			scanf("%f",&notas[i][j]);
		}
	printf("\n");
	}
	
	// Processamento: 
	// Trecho respons�vel por calcular a media de cada Aluno.
	// A media de cada aluno � armazenada em um vetor media[0..ALUNOS-1]. 
	// A estrutura tbm se encarrega de realizar uma soma sucessiva das notas 
	// de todos os Alunos, para que na linha '62' calcule a media da turma.
	// No fim do trecho s�o realizados testes de verifica��es para saber a 
	// situa��o do aluno e logo em seguida � exibido a media final da turma.
	
	somaTotal = 0;
	for (i = 0; i < ALUNOS; i++) {
		soma = 0;
		for (j = 0; j < NOTAS; j++) {
			soma += notas[i][j];
		}
		media[i] = soma / NOTAS;
		somaTotal += soma;
		
		// Sa�da de dados:
		printf("\n[Aluno %d]\n",i + 1); 
		printf(" Nome: %s. \n",nomes[i]);
		printf(" Media: %.2f. \n",media[i]);
		
		if(media[i] >= 7) 						printf(" Situacao: Aprovado. \n");
		else if(media[i] >= 4 && media[i] < 7)	printf(" Situacao: Prova final. \n");
		else 									printf(" Situacao: Reprovado. \n");
	}
	
	mediaFinal = somaTotal / ALUNOS;
		// Sa�da de dados:
		printf("\n A media final da turma e: %.2f",mediaFinal);

return 0;
}
