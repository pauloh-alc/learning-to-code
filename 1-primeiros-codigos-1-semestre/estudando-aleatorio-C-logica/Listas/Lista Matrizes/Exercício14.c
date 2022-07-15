// Exerc�cio 14 
#include <stdio.h>
#define SIZE 3

int main()
{
	// Dicion�rio de dados:
	char m[SIZE][SIZE] = {
						{' ',' ',' '},
						{' ',' ',' '},
						{' ',' ',' '},
						};
	int i, j;
	int linha, coluna, jogador;
	int xDiagonalP, oDiagonalP, xDiagonalS, oDiagonalS, linhaO, linhaX, colunaX, colunaO, cheio = 0;
	int posicaoOcupada;

	// Gerando tabuleiro com espa�os em branco:
	printf("Tabuleiro Vazio: \n\n");
	for (i = 0; i < SIZE; i++) {
		for (j = 0; j < SIZE; j++) {
			printf(" %c ",m[i][j]);
			if (j != SIZE - 1) printf("|");  		  // Condi��o n�o permite exibir o caractere '|' em j = 2. 
		}
		if (i != SIZE - 1) printf("\n---+---+---\n"); // Condi��o n�o permite exibir o conjunto de caracteres da fun��o printf() em i = 2; 
	}
	
	// Procesamento:
	jogador = 1;
	do {
		// Trecho armazena 'x' ou 'o' de acordo com a respectiva posi��o escolhida pelo jogador 1 ou  pelo jogador 2.
		do	{
			posicaoOcupada = 0;
			if (jogador == 1) {
				printf("\n\nJogador %d entre com 'x' em uma posicao [linha][coluna], respectivamente: ",jogador);
				scanf("%d%d",&linha,&coluna);
				
				if (m[linha][coluna] == 'o') posicaoOcupada = 1;
				else 						 m[linha][coluna] = 'x';
			}
			else {
				printf("\n\nJogador %d entre com 'o' em uma posicao [linha][coluna], respectivamente: ",jogador);
				scanf("%d%d",&linha,&coluna); 
				
				if (m[linha][coluna] == 'x') posicaoOcupada = 1;
				else 						 m[linha][coluna] = 'o';
			}
				
		} while ((linha > 2 || linha < 0 || coluna > 2 || coluna < 0) || posicaoOcupada == 1); 
				// N�o permite o jogador colocar coordenadas [linha][coluna] em posi��es inv�lidas na matriz, al�m disso,
				// impossibilita o jogador colocar o 'x' ou 'o' em posi��es j� ocupadas. 
		
	
		// Atualizando dados do tabuleiro:
		// Trecho mostra tabuleiro atualizado.
		printf("\n");
		for (i = 0; i < SIZE; i++) {
			for (j = 0; j < SIZE; j++) {
				printf(" %c ",m[i][j]);
				if (j != SIZE - 1) printf("|");  		   
			}
			if (i != SIZE - 1) printf("\n---+---+---\n");  
		}
		
		// Verifica��es:
		// Trecho verifica se linha, coluna, diagonal principal ou secund�ria � composta somente por 'x' ou 'o'.
		// Isso � necess�rio, pois a depender dos valores obtidos nessa verifica��o, determinaremos o ganhador da partida.
		// Por exemplo, se a diagonal principal, secund�ria, linha ou coluna estiverem ocupadas apenas pelo caractere 'x', 
		// o jogador 1 � vencedor. O mesmo acontece com 'o'.
		
		xDiagonalP = 0;
		xDiagonalS = 0;
		oDiagonalP = 0;
		oDiagonalS = 0;
		
		for (i = 0; i < SIZE; i++) {
			linhaX = 0;
			linhaO = 0;
			colunaX = 0;
			colunaO = 0;	
			for (j = 0; j < SIZE; j++) {
				if (i == j) {						  // Analisando diagonal principal.	
					if(m[i][j] == 'x')      xDiagonalP++;
					else if(m[i][j] == 'o') oDiagonalP++;
				}
				if(i + j == SIZE - 1){				  // Analisando diagonal secund�ria.
					if(m[i][j] == 'x')       xDiagonalS++;
					else if (m[i][j] == 'o') oDiagonalS++;
				} 
				
				if (m[i][j] == 'x')     linhaX++; 	  // Analisando cada linha
				else if(m[i][j] == 'o') linhaO++;
				
				if(m[j][i] == 'x')      colunaX++;    // Analisando cada coluna
				else if(m[j][i] == 'o') colunaO++;
			} 
			if (linhaX == 3 || colunaX == 3) break;
			if (linhaO == 3 || colunaO == 3) break;
		}
		
		// Trecho respons�vel por verificar se algum jogador ganhou.
		// O jogador vai ganhar se preencher uma linha, coluna, diagonal principal ou diagonal secund�ria com 3 'x' ou 3 'o'.
		if (xDiagonalP == 3 || xDiagonalS == 3) {
			printf("\n\n Jogador 1 ganhou !"); break;
		} 
		else if (oDiagonalP == 3 || oDiagonalS == 3) {
			printf("\n\n Jogador 2 ganhou !"); break;
		}
		else if (linhaX == 3 || colunaX == 3) {
			printf("\n\n Jogador 1 ganhou !"); break;
		}
		else if (linhaO == 3 || colunaO == 3) {
			printf("\n\n Jogador 2 ganhou !"); break;
		}
		
		// Trecho alterna os jogadores da jogada.				
		if(jogador == 1) jogador = 2;
		else 			 jogador = 1;
		
		// Trecho verifica se o tabuleiro ficou cheio. Tabuleiro cheio se, e somente se, cheio = 9.
		cheio++;
		if (cheio == 9) printf("\n\nNinguem ganhou, deu velha !!\n");
	} while (1);
	
return 0;
}
