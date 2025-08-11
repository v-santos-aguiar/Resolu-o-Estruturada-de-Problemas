#include <stdio.h>
#include <conio.h>

/* 2.	Escreva um programa para ler as dimensões de uma cozinha retangular 
(comprimento, largura e altura), calcular e escrever a quantidade de caixas de 
azulejos para se colocar em todas as suas paredes (considere que não será 
descontada a área ocupada por portas e janelas). Cada caixa de azulejos possui 1,5 m2.*/

void main(){
	float area, comp, larg, alt, qtde;
	
	printf("Informe o comprimento: ");
	scanf("%f", &larg);
	printf("Informe a largura: ");
	scanf("%f", &comp);
	printf("Informe a altura: ");
	scanf("%f", &alt);

	area = (larg * alt * 2) + (comp * alt * 2);
	qtde = area / 1.5;
	
	printf("Qtde de caixas: %0.2f\n", qtde);	
}
