#include <stdio.h>
#include <conio.h>

/*1 - Escreva uma função que leia 2 números, após a leitura somar e retornar o resultado. Está função deverá ser chamado através do programa principal. 
Exibir conteúdo retornado.*/

int somar_2_numeros(){
	int n1, n2, soma;
	printf("<<Soma com Funcao>>\n\n");
	printf("Informe N1: ");
	scanf("%d", &n1);
	printf("Informe N2: ");
	scanf("%d", &n2);
	soma = n1 + n2;
	return soma;
	
}

void main(){
	int ret;
	ret = somar_2_numeros();
	printf("Soma: %d", ret);
}
