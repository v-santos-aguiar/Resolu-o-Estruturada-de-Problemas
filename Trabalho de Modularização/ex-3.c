#include <stdio.h>
#include <conio.h>

/* 3.	POR VALOR - Faça um programa que:
a.	leia os valores de A, B e C;
b.	chamar um procedimento com passagem de parâmetros para efetuar os cálculos e exibir o resultado da adição;
c.	chamar um procedimento com passagem de parâmetros para efetuar os cálculos e exibir o resultado da média;
d.	chamar um procedimento com passagem de parâmetros para verificar e exibir o maior número;
e.	chamar um procedimento com passagem de parâmetros para verificar e exibir o menor número; */

void adicao(int a, int b, int c, int *total_soma){
	*total_soma = a + b + c;
}

void media(int a, int b, int c, float *total_media){
	// Converte os ints para floats e da seu resultado coerrente (3.0)!
	*total_media = (a + b + c) / 3.0;
}

void maior_numero(int a, int b, int c){
	
	if(a >= b && a >= c){
		printf("\nMaior numero e: %d", a);
	} else if (b >= c){
		printf("\nMaior numero e: %d", b);
	} else{
		printf("\nMaior numero e: %d", c);
	}
}

void menor_numero(int a, int b, int c){
	
	if(a <= b && a <= c){
		printf("\nMenor numero e: %d", a);
	} else if (b <= c){
		printf("\nMenor numero e: %d", b);
	} else{
		printf("\nMenor numero e: %d", c);
	}
}

void main(){
	int a, b, c, total_soma;
	float total_media;
	printf("Informe A: ");
	scanf("%d", &a);
	printf("Informe B: ");
	scanf("%d", &b);
	printf("Informe C: ");
	scanf("%d", &c);

	adicao(a, b, c, &total_soma);
	printf("\nSoma: %d", total_soma);
	
	media(a, b, c, &total_media);
	printf("\nMedia: %.2f", total_media);
	
	maior_numero(a, b, c);
	
	menor_numero(a, b, c);
}

