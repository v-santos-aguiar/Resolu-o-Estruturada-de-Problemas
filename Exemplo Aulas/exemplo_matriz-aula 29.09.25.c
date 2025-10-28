#include <stdio.h>
#include <conio.h>

#define TL 3
#define TC 3

void ler_matriz(int mat[TL][TC]){
	int l, c;
	for(l = 0; l < TL; l++){
		for(c = 0; c < TC; c++){
			printf("Matriz[%d][%d]", l, c);
			scanf("%d", &mat[l][c]);
		}	
	}
	
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
}
