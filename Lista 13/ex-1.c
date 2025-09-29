#include <stdio.h>
#include <conio.h>

#define TL 3
#define TC 3

/*1.	Carregar uma matriz 3x3 e preencher com valores de 10 em 10 e exibir a soma da matriz no final.*/

void ler_matriz(int mat[TL][TC]){
	int l, c, num = 0;
	for(l = 0; l < TL; l++){
		for(c = 0; c < TC; c++){
			mat[l][c] = num;
			num += 10;
		}	
	}
	
}

void somar_matriz(int mat[TL][TC]){
	int l, c, soma = 0;
	for(l = 0; l < TL; l++){
		for(c = 0; c < TC; c++){
			soma += mat[l][c];
		}	
	}
	printf("\nSoma: %d", soma);
}

void exibir_matriz(int mat[TL][TC]){
	int l, c;
	for(l = 0; l < TL; l++){
		for(c = 0; c < TC; c++){
			printf("\nMatriz[%d][%d]: %d", l, c, mat[l][c]);
		}
		
	}
}

void main(){
	int mat[TL][TC];
	ler_matriz(mat);
	exibir_matriz(mat);
	somar_matriz(mat);
}
