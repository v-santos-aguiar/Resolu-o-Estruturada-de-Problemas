#include <stdio.h>
#include <conio.h>

#define TL 4
#define TC 4

/*2.	Carregar uma matriz 4x4 com n�meros fornecidos pelo usu�rio. Ao final ler um n�mero informado pelo usu�rio e procurar se o mesmo est� na matriz.*/

void carregar_matriz(int mat[TL][TC]){
	int l, c;
	for(l = 0; l < TL; l++){
		for(c = 0; c < TC; c++){
			printf("Matriz[%d][%d]:", l, c);
			scanf("%d", &mat[l][c]);
		}	
	}
}


void procurar_numero(int mat[TL][TC]){
    int l, c, num = 0, cont = 0;
	printf("Informe um numero para procurar na matriz: ");
    scanf("%d", &num);
    for(l = 0; l < TL; l++){
        for(c = 0; c < TC; c++){
            if(mat[l][c] == num){
                printf("\nNumero %d encontrado na posicao Matriz[%d][%d]", num, l, c);
				cont++;
            }
        }
    }
	
	if(cont == 0){
		printf("\nO numero %d nao foi encontrado na matriz.", num);
	}
	
}

void main(){
	int mat[TL][TC];
	carregar_matriz(mat);
	procurar_numero(mat);
}
