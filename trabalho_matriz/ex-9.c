#include <stdio.h>
#include <conio.h>

/*9.	Faça programa que leia uma matriz 3 x 6 com valores reais.

(a) Imprima a soma de todos os elementos das colunas ímpares.
(b) Imprima a média aritmética dos elementos da segunda e quarta colunas.
(c) Substitua os valores da sexta coluna pela soma dos valores das colunas 1 e 2.
(d) Imprima a matriz modificada.
*/

#define TL 3
#define TC 6

void ler_matriz(float mat[TL][TC]){
	int l, c; 
	printf("--- Digite os %d valores (reais) da Matriz %dx%d ---\n", TL*TC, TL, TC);
	
	for(l = 0; l < TL; l++){
		for(c = 0; c < TC; c++){
			printf("Matriz[%d][%d]: ", l, c);
			scanf("%f", &mat[l][c]);
		}	
	}
}

void exibir_matriz(float mat[TL][TC]){
	int l, c;
	
	for(l = 0; l < TL; l++){
		for(c = 0; c < TC; c++){
			// "\t" (tab) ajuda a alinhar as colunas
			printf("%.2f\t", mat[l][c]); 
		}
		printf("\n"); 
	}
}

float soma_cols_impares(float mat[TL][TC]){
	int l, c;
	float soma = 0.0;
	
	for(l = 0; l < TL; l++){
		for(c = 0; c < TC; c++){
			// Se o índice da coluna for 0, 2 ou 4 (as colunas 1, 3, 5)
			// (c % 2 == 0) significa "índice par"
			if(c % 2 == 0){
				soma += mat[l][c];
			}
		}
	}
	return soma;
}

float media_cols_2_4(float mat[TL][TC]){
	int l;
	float soma = 0.0;

	int total_elementos = TL * 2; 
	
	for(l = 0; l < TL; l++){
		soma += mat[l][1];
		soma += mat[l][3];
	}
	
	return soma / total_elementos; // Retorna a média
}

void subs_c_6(float mat[TL][TC]){
	int l;
	float soma_cols_1_2;
	
	for(l = 0; l < TL; l++){

		soma_cols_1_2 = mat[l][0] + mat[l][1];
	
		mat[l][5] = soma_cols_1_2;
	}
}

void main(){
	float mat[TL][TC], soma_impares, media_2_4;
	
	ler_matriz(mat);
	
	soma_impares = soma_cols_impares(mat);
	printf("\n(a) Soma de todos os elementos das colunas impares: %.2f\n", soma_impares);

	media_2_4 = media_cols_2_4(mat);
	printf("(b) Media aritmetica dos elementos da 2a e 4a colunas: %.2f\n", media_2_4);

	subs_c_6(mat);
	printf("(c) Valores da 6a coluna substituidos pela soma das colunas 1 e 2.\n");
	
	printf("\n(d) Matriz Modificada:\n\n");
	exibir_matriz(mat);
}
