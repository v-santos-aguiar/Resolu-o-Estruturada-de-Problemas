#include <stdio.h>
#include <conio.h>


/*1.	Escreva uma função, que receba por parâmetro dois valores A e B, calcule e retorne a soma dos valores.*/

int somar_numeros(int a, int b){
	int soma;
	soma = a + b;
	return soma;
}

void main(){
	int a, b, ret;
	printf("Informe o valor de A: ");
	scanf("%d", &a);
	printf("Informe o valor de B: ");
	scanf("%d", &b);
	ret = somar_numeros(a, b);
	printf("\nSoma: %d", ret);
}
