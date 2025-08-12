#include <stdio.h>
#include <conio.h>

/*4 - Escreva um procedimento que leia 2 números, após a leitura somar e exibir o resultado. Este procedimento deverá ser chamado através do programa principal.*/


void somar_numero(){
	int n1, n2, soma;
	printf("Informe o primeiro numero: ");
	scanf("%d", &n1);
	
	printf("Informe o segundo numero: ");
	scanf("%d", &n2);
	
	soma = n1 + n2;
	
	printf("Soma: %d", soma);

	
}

void main(){
	somar_numero();
}
