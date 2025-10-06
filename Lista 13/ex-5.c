#include <stdio.h>
#include <conio.h>
#include <string.h>

#define TL 7
#define TC 7

/*5.	Faça uma função que recebe, por parâmetro, uma matriz A(7,7) e retorna a soma dos elementos da linha 5 e da coluna 3.*/

void carregar_matriz(int mat_a[TL][TC]){
	int l, c, cont = 0;
	printf("<<Carregar Matriz>>\n\n");
	for(l = 0; l < TL; l++){
		for(c = 0; c < TC; c++){
			mat_a[l][c] = cont++;
		}
	}
	
}

void exibir_matriz(int mat_a[TL][TC]){
	int l, c;
	for(l = 0; l < TL; l++){
		for(c = 0; c < TC; c++){
			printf(" %d |", mat_a[l][c]);
		}
	printf("\n");
	}	
}

int somar_l5_c3(int mat_a[TL][TC]){
	int l, c, soma = 0;
	printf("\n<<Somar Linha 5 e Coluna 3>>");
	for(l = 0; l < TL; l++){
		for(c = 0; c < TC; c++){
			if(l == 4 || c == 2){
				soma += mat_a[l][c];
			}
		}	
	}
	return soma;
}

void main(){
	int mat_a[TL][TC];
	carregar_matriz(mat_a);
	exibir_matriz(mat_a);
	printf("\nSoma: %d ", somar_l5_c3(mat_a));
}
