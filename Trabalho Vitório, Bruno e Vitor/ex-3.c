#include <stdio.h>
#include <conio.h>

/* 3.	POR VALOR - Fa�a um programa que:
a.	leia os valores de A, B e C;
b.	chamar um procedimento com passagem de par�metros para efetuar os c�lculos e exibir o resultado da adi��o;
c.	chamar um procedimento com passagem de par�metros para efetuar os c�lculos e exibir o resultado da m�dia;
d.	chamar um procedimento com passagem de par�metros para verificar e exibir o maior n�mero;
e.	chamar um procedimento com passagem de par�metros para verificar e exibir o menor n�mero; */

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

