#include <stdio.h>
#include <conio.h>

/*1 - Escreva uma fun��o que leia 2 n�meros, ap�s a leitura somar e retornar o resultado. Est� fun��o dever� ser chamado atrav�s do programa principal. 
Exibir conte�do retornado.*/

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
