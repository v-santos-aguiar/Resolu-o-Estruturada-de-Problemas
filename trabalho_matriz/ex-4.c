#include <stdio.h>
#include <conio.h>

/*4.	Leia duas matrizes 4 x 4 e escreva uma terceira com os maiores valores de cada posição das matrizes lidas.*/

#define TL 4
#define TC 4

void ler_matriz(int mat[TL][TC]){
	int l, c; 
	
	for(l = 0; l < TL; l++){
		for(c = 0; c < TC; c++){
			printf("Matriz[%d][%d]: ", l, c);
			scanf("%d", &mat[l][c]); 
		}	
	}
}

void mat_maiores(int matA[TL][TC], int matB[TL][TC], int matC[TL][TC]){
	int l, c;

	for(l = 0; l < TL; l++){
		for(c = 0; c < TC; c++){
			
			if(matA[l][c] > matB[l][c]){
				matC[l][c] = matA[l][c];
			}
			else {
				matC[l][c] = matB[l][c];
			}
		}
	}
}

void exibir_matriz(int mat[TL][TC]){
	int l, c;
	
	for(l = 0; l < TL; l++){
		for(c = 0; c < TC; c++){
			printf("%d\t", mat[l][c]);
		}
		printf("\n"); 
	}
}

void main(){
	int matA[TL][TC], matB[TL][TC], matC_res[TL][TC];

	printf("\n--- MATRIZ A ---\n\n");
	ler_matriz(matA);

	printf("\n--- MATRIZ B ---\n\n");
	ler_matriz(matB);

	mat_maiores(matA, matB, matC_res);
	
	printf("\n--- Matriz C (Maiores Valores) ---\n\n");
	exibir_matriz(matC_res);
}
