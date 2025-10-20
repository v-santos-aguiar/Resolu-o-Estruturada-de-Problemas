#include <stdio.h>
#include <conio.h>

/*7.	Leia uma matriz de 3 x 3 elementos. Calcule a soma dos elementos que estão abaixo da média da diagonal principal.*/

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
	int l;
	int soma = 0; 
	float media;  
	
	for(l = 0; l < TL; l++){
		soma += mat[l][l]; 
	}
	
	media = (float)soma / TL;
	
	return media;
}

int somar_elementos_abaixo_media(int mat[TL][TC], float media){
	int l, c, soma = 0;

	for(l = 0; l < TL; l++){
		for(c = 0; c < TC; c++){
	
			if(mat[l][c] < media){
				soma += mat[l][c];
			}
		}
	}
	
	return soma;
}

void main(){
	int mat[TL][TC], soma_abaixo_media;
	float media_diagonal;

	ler_matriz(mat);
	media_diagonal = media_diagonal_principal(mat);
	soma_abaixo_media = somar_elementos_abaixo_media(mat, media_diagonal);
	
	printf("\nA media da diagonal principal foi: %.2f\n", media_diagonal);
	printf("A soma dos elementos da matriz que estao ABAIXO desta media e: %d\n", soma_abaixo_media);
}
