#include <stdio.h>
#include <conio.h>

/*2.	Declare uma matriz 5 x 5. Preencha com 1 a diagonal principal e com 0 os demais elementos. Escreva ao final a matriz obtida.*/

#define TL 5
#define TC 5

void preencher_mat_diagonal(int mat[TL][TC]){
	int l, c;
	
	for(l = 0; l < TL; l++){
		for(c = 0; c < TC; c++){
			
			// Verifica se a posição atual está na diagonal principal
			// A diagonal principal ocorre quando (linha == coluna)
			if(l == c){
				mat[l][c] = 1; // Posições [0][0], [1][1], [2][2], [3][3], [4][4]
			}
			else {
				mat[l][c] = 0; // Todos os "demais elementos"
			}
		}
	}
}

void exibir_matriz(int mat[TL][TC]){
	int l, c;
	for(l = 0; l < TL; l++){
		for(c = 0; c < TC; c++){
			printf("%d\t |", mat[l][c]);
		}
	printf("\n");
	}
}

void main(){
	int mat[TL][TC];

	preencher_mat_diagonal(mat);
	exibir_matriz(mat);
}
