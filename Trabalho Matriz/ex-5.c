#include <stdio.h>
#include <conio.h>

/*5.	Leia uma matriz de 3 x 3 elementos. Calcule a média dos elementos que estão na diagonal principal.*/

#define TL 3
#define TC 3

void ler_matriz(int mat[TL][TC]){
	int l, c; 
	printf("--- Digite os %d valores da Matriz %dx%d ---\n", TL*TC,TL, TC);
	
	for(l = 0; l < TL; l++){
		for(c = 0; c < TC; c++){
			printf("Matriz[%d][%d]: ", l, c);
			scanf("%d", &mat[l][c]); 
		}	
	}
}

float media_diagonal_principal(int mat[TL][TC]){
	int l, soma = 0;
	float media;

	for(l = 0; l < TL; l++){
		soma += mat[l][l];
	}
	
	media = (float)soma / TL;
	
	return media;
}

void main(){
	int mat[TL][TC];
	float media_res;
	
	ler_matriz(mat);
	media_res = media_diagonal_principal(mat);
	
	printf("\nA media dos elementos da diagonal principal e: %.2f\n", media_res);
}
