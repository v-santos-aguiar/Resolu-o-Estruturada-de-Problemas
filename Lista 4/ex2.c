#include <stdio.h>
#include <conio.h>

/*2 - Escreva uma função que leia 4 números, após a leitura multiplique todos e retorne o resultado. Está função deverá ser chamada através do programa principal. 
Exibir conteúdo retornado.*/

int mult_4_numeros(){
	int n1, n2, n3, n4, mult;
	printf("<<Multiplicacao com Funcao>>\n\n");
	printf("Informe N1: ");
	scanf("%d", &n1);
	printf("Informe N2: ");
	scanf("%d", &n2);
	printf("Informe N3: ");
	scanf("%d", &n3);
	printf("Informe N4: ");
	scanf("%d", &n4);
	mult = n1 * n2 * n3 * n4;
	return mult;
}


void main(){
	int ret;
	ret = mult_4_numeros();
	printf("Multiplicacacao: %d", ret);
	
}
