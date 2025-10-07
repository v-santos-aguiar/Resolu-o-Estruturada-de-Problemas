#include <stdio.h>
#include <conio.h>
#include <string.h>

#define TL 5
#define TC 5

/*6.	Faça um procedimento que receba, por parâmetro, duas matrizes A(5,5) e B(5,5) e retorna uma matriz C, também por parâmetro, que seja a soma da matriz A e B.*/

void carregar_matriz(int mat[TL][TC]){
	int l, c, cont = 0;
	printf("<<Carregar Matriz>>\n\n");
	for(l = 0; l < TL; l++){
		for(c = 0; c < TC; c++){
			mat[l][c] = cont++;
		}
	}
}

void exibir_matriz(int mat[TL][TC]){
	int l, c;
	for(l = 0; l < TL; l++){
		for(c = 0; c < TC; c++){
			printf(" %d |", mat[l][c]);
		}
	printf("\n");
	}
	printf("\n");	
}

void somar_mats(int mat_a[TL][TC], int mat_b[TL][TC], int mat_c[TL][TC]){
	int l, c;
	printf("\n<<Soma Matrizes A e B>>\n\n");
	for(l = 0; l < TL; l++){
		for(c = 0; c < TC; c++){
			mat_c[l][c] = mat_a[l][c] + mat_a[l][c];
		}	
	}
}

void main(){
	int mat_a[TL][TC], mat_b[TL][TC], mat_c[TL][TC];
	carregar_matriz(mat_a);
	exibir_matriz(mat_a);
	carregar_matriz(mat_b);
	exibir_matriz(mat_b);
	somar_mats(mat_a, mat_b, mat_c);
	exibir_matriz(mat_c);
}
