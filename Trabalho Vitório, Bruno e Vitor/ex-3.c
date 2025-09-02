#include <stdio.h>
#include <conio.h>

/* 3.	POR VALOR - Faça um programa que:
a.	leia os valores de A, B e C;
b.	chamar um procedimento com passagem de parâmetros para efetuar os cálculos e exibir o resultado da adição;
c.	chamar um procedimento com passagem de parâmetros para efetuar os cálculos e exibir o resultado da média;
d.	chamar um procedimento com passagem de parâmetros para verificar e exibir o maior número;
e.	chamar um procedimento com passagem de parâmetros para verificar e exibir o menor número; */

void adicao(int a, int b, int c, int *total){
	* total = a + b + c;
}



void main(){
	int a, b, c, total;
	printf("Informe A: ");
	scanf("%d", &a);
	printf("Informe B: ");
	scanf("%d", &b);
	printf("Informe C: ");
	scanf("%d", &c);

	adicao(a, b, c, &total);
	printf("\nSoma %d: ", total);
	

}

