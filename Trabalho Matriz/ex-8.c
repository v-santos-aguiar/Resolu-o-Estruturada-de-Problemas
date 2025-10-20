#include <stdio.h>
#include <conio.h>
#include <stdlib.h> // Para rand() e srand()
#include <time.h>

/*8.	Fa�a um programa para gerar automaticamente n�meros entre 0 e 99 de uma cartela de bingo. 
Sabendo que cada cartela dever� conter 5 linhas de 5 n�meros, gere estes dados de modo rand�mico. 
O programa deve exibir na tela a cartela gerada.
Para fazer com que um n�mero 'x' receba um valor rand�mico entre 0 e 99, fazemos:

limite = 99
x = ( rand() % limite) -> fun��o rand�mica que calcula um n�mero aleat�rio at� o limite
usleep(100000) -> pausa o software por um per�odo de tempo. Necess�rio utilizar a biblioteca #include <unistd.h>
Utilizar a fun��o srand(time(NULL)) para n�o gerar n�meros sempre iguais. Necess�rio utilizar a biblioteca #include <time.h>

Obs.: tratar n�mero repetidos. N�o pode ter n�mero repetidos na matriz.
*/

#define TL 5
#define TC 5
#define LIMITE 100

int num_ja_existe(int mat[TL][TC], int num_gerado){
	int l, c;

	for(l = 0; l < TL; l++){
		for(c = 0; c < TC; c++){
			// Compara o n�mero gerado com cada posi��o
			if(mat[l][c] == num_gerado){
				return 1; // Encontrou! Retorna 1 (Verdadeiro)
			}
		}
	}
	
	return 0; // N�o encontrou. Retorna 0 (Falso)
}

void gerar_cartela_bingo(int mat[TL][TC]){
	int l, c, num_novo, ja_existe;
	
	// Limpa a matriz (garante que n�o tem "lixo" da mem�ria)
	// Come�a com -1, pois 0 � um n�mero v�lido do bingo
	for(l = 0; l < TL; l++){
		for(c = 0; c < TC; c++){
			mat[l][c] = -1;
		}
	}

	for(l = 0; l < TL; l++){
		for(c = 0; c < TC; c++){
			
			do {
				// Gera um n�mero aleat�rio (0 a 99)
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
			printf("%3d |", mat[l][c]);
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
