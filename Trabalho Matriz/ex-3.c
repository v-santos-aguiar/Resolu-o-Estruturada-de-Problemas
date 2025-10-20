#include <stdio.h>
#include <conio.h>

/*3.	Leia uma matriz 4 x 4, imprima a matriz e retorne à localização (linha e a coluna) do maior valor.*/

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

void exibir_matriz(int mat[TL][TC]){
	int l, c;
	printf("\n");
	for(l = 0; l < TL; l++){
		for(c = 0; c < TC; c++){
			printf("%d\t", mat[l][c]);
		}
	printf("\n");
	}
}

void loca_maior(int mat[TL][TC], int *maior_l, int *maior_c){
	int l, c, maior_valor ;
	
	// Assume que o primeiro elemento é o maior
	maior_valor = mat[0][0];
	*maior_l = 0;
	*maior_c = 0;
	
	for(l = 0; l < TL; l++){
		for(c = 0; c < TC; c++){
			
			if(mat[l][c] > maior_valor){
				
				// Atualiza
				maior_valor = mat[l][c];
				*maior_l = l;
				*maior_c = c;
			}
		}
	}
}

void main(){
	int mat[TL][TC], l_maior, c_maior;

	ler_matriz(mat);
	exibir_matriz(mat);
	
	// Passa os *endereços* (&) das variáveis
	loca_maior(mat, &l_maior, &c_maior);
	
	printf("\n--- Localizacao do Maior Valor ---\n");
	printf("O maior valor esta na localizacao: Linha %d, Coluna %d\n", l_maior, c_maior);
	printf("(Ou seja, Matriz[%d][%d])\n", l_maior, c_maior);
}
