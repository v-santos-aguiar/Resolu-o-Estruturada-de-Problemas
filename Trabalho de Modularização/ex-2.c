#include <stdio.h>
#include <conio.h>

/*2.	POR VALOR - Fa�a um programa que simule um calculador de 4 opera��es. Seu programa devera:
a.	ler dois n�meros e o operador;
b.	chamar procedimentos/fun��o com passagem de par�metros para efetuar os c�lculos;
c.	escrever o resultado ao final.*/

void operacao(int n1, int n2, char op, int *total) {

	if (op == '+') {
        *total = n1 + n2;
    } 
	else if (op == '-') {
        *total = n1 - n2;
    } 
	else if (op == '*') {
        *total = n1 * n2;
    } 
	else if (op == '/') {
        if (n2 != 0) {
            *total = n1 / n2;
        } else {
            printf("Erro: divisao por zero!\n");
            *total = 0;
        }
    } else {
        printf("Operador invalido!\n");
        *total = 0;
    }
}

void main(){
	int n1, n2, total;
	char op;
	printf("informe o primeiro numero: ");
	scanf("%d", &n1);
	printf("informe o segundo numero: ");
	scanf("%d", &n2);
	
	printf("Informe o operador (+, -, *, /): ");
    scanf(" %c", &op);
    
	operacao(n1, n2, op, &total);
	printf("\ntotal: %d", total);
}
