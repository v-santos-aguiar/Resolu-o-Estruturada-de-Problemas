#include <stdio.h>
#include <conio.h>

#define TL 4
#define TC 4

/*3.	Ler uma matriz SOMA 4x4, calcular e escrever as seguintes somas:
a) da linha 3
b) da coluna 2
c) de todos os elementos da matriz
*/

void carregar_matriz(int mat[TL][TC]){
	int l, c;
	for(l = 0; l < TL; l++){
		for(c = 0; c < TC; c++){
			printf("Matriz[%d][%d]:", l, c);
			scanf("%d", &mat[l][c]);
		}	
	}
}

void somar_matriz(int mat[TL][TC]){
	int l, c, somat = 0, somal = 0, somac = 0;
	for(l = 0; l < TL; l++){
		for(c = 0; c < TC; c++){
			if(l == 2){
				somal += mat[l][c];
			}
			if(c == 1){
				somac += mat[l][c];
			}
			somat += mat[l][c];
		}	
	}
	printf("\nSoma linha 3: %d ", somal);
	printf("\nSoma coluna 2: %d ", somac);
	printf("\nSoma Total Matriz: %d", somat);
}


void main(){
	int mat[TL][TC];
	carregar_matriz(mat);
	somar_matriz(mat);
}
