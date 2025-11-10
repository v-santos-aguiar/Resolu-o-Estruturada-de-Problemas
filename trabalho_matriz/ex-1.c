#include <stdio.h>
#include <conio.h>

/*1.	Leia uma matriz 4 x 4, conte e escreva quantos valores maiores que 10 ela possui.*/

#define TL 4
#define TC 4

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

int contar_maiores_que_10(int mat[TL][TC]){
	int l, c, cont = 0;
	
	for(l = 0; l < TL; l++){
		for(c = 0; c < TC; c++){
			
			if(mat[l][c] > 10){
				cont++;
			}
		}
	}
	
	return cont;
}

void main(){
	
	int mat[TL][TC], total_maiores;
	
	ler_matriz(mat);
	
	total_maiores = contar_maiores_que_10(mat);

	printf("A matriz possui %d valores maiores que 10.\n", total_maiores);
}
