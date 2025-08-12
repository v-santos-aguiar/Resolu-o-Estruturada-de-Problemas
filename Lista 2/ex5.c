#include <stdio.h>
#include <conio.h>

/*5 - Escreva um procedimento que leia 4 números, após a leitura multiplique todos e exibir o resultado. Este procedimento deverá ser chamado através do programa principal.*/

void multi_numero(){
	int n1, n2, n3, n4, multi;
	printf("Informe o primeiro numero: ");
	scanf("%d", &n1);
	
	printf("Informe o segundo numero: ");
	scanf("%d", &n2);
	
	printf("Informe o terceiro numero: ");
	scanf("%d", &n3);
	
	printf("Informe o quarto numero: ");
	scanf("%d", &n4);
	
	multi = n1 * n2 * n3 * n4;
	
	printf("Resultado: %d", multi);

}

void main(){
	multi_numero();
}





