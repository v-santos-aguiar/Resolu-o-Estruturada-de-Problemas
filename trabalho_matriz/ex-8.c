#include <stdio.h>
#include <conio.h>
#include <stdlib.h> // Para rand() e srand()
#include <time.h>

/*8.	Faça um programa para gerar automaticamente números entre 0 e 99 de uma cartela de bingo. 
Sabendo que cada cartela deverá conter 5 linhas de 5 números, gere estes dados de modo randômico. 
O programa deve exibir na tela a cartela gerada.
Para fazer com que um número 'x' receba um valor randômico entre 0 e 99, fazemos:

limite = 99
x = ( rand() % limite) -> função randômica que calcula um número aleatório até o limite
usleep(100000) -> pausa o software por um período de tempo. Necessário utilizar a biblioteca #include <unistd.h>
Utilizar a função srand(time(NULL)) para não gerar números sempre iguais. Necessário utilizar a biblioteca #include <time.h>

Obs.: tratar número repetidos. Não pode ter número repetidos na matriz.
*/

#define TL 5
#define TC 5
#define LIMITE 100

int num_ja_existe(int mat[TL][TC], int num_gerado){
	int l, c;

	for(l = 0; l < TL; l++){
		for(c = 0; c < TC; c++){
			// Compara o número gerado com cada posição
			if(mat[l][c] == num_gerado){
				return 1; // Encontrou! Retorna 1 (Verdadeiro)
			}
		}
	}
	
	return 0; // Não encontrou. Retorna 0 (Falso)
}

void gerar_cartela_bingo(int mat[TL][TC]){
	int l, c, num_novo, ja_existe;
	
	// Limpa a matriz (garante que não tem "lixo" da memória)
	// Começa com -1, pois 0 é um número válido do bingo
	for(l = 0; l < TL; l++){
		for(c = 0; c < TC; c++){
			mat[l][c] = -1;
		}
	}

	for(l = 0; l < TL; l++){
		for(c = 0; c < TC; c++){
			
			do {
				// Gera um número aleatório (0 a 99)
				num_novo = rand() % LIMITE;
				
				ja_existe = num_ja_existe(mat, num_novo);
				
			} while (ja_existe == 1);
			
			mat[l][c] = num_novo;
		}
	}
}

void exibir_matriz(int mat[TL][TC]){
	int l, c;
	
	printf("\n--- Cartela Bingo ---\n\n");
	
	for(l = 0; l < TL; l++){
		for(c = 0; c < TC; c++){
			printf("%2d |", mat[l][c]);
		}
		printf("\n"); 
	}
}

void main(){
	int cartela[TL][TC];

	srand(time(NULL)); 
	gerar_cartela_bingo(cartela);
	exibir_matriz(cartela);
}
