#include <stdio.h>
#include <conio.h>
#include <string.h>

#define TL 3
#define TC 3

/*4.	Carregar uma matriz 3x3 com número inteiros, gerar uma nova matriz com os número da matriz carregada, multiplicados por 2.*/

void carregar_matriz(int mat[TL][TC]){
	int l, c;
	printf("<<Carregar Matriz>>\n\n");
	for(l = 0; l < TL; l++){
		for(c = 0; c < TC; c++){
			printf("Informe Mat[%d][%d]: ", l, c);
			scanf("%d", &mat[l][c]);
		}
	}
	system("cls");
}

void exibir_matriz(int mat[TL][TC]){
	int l, c;
	printf("\n<<Exibir Matriz>>\n");
	for(l = 0; l < TL; l++){
		for(c = 0; c < TC; c++){
			printf("\nMatriz[%d][%d]: %d", l, c, mat[l][c]);
		}
	}
}

void multi_mat(int mat[TL][TC], int matdupli[TL][TC]){
	int l, c;
	printf("\n\n<<Multiplicando Matriz Multiplicada>>\n");
	for(l = 0; l < TL; l++){
		for(c = 0; c < TC; c++){
			matdupli[l][c] = mat[l][c] * 2;
		}
	}
	printf("<<Multiplicacao Concluida>>\n");
}


void main(){
	int mat[TL][TC], matdupli[TL][TC];
	carregar_matriz(mat);
	exibir_matriz(mat);
	multi_mat(mat, matdupli);
	exibir_matriz(matdupli);
	
}
