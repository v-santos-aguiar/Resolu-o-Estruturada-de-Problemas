#include <stdio.h>
#include <conio.h>

/*4.	Escreva uma fun��o que receba a Largura e o Comprimento do quadrado/ret�ngulo, calcule e retorne a �rea.*/

int area(float larg, float comp){
	int area;
	area = larg * comp;
	return area;	
}

void main(){
	float larg, comp, ret;
	printf("Informe a largura: ");
	scanf("%f", &larg);
	printf("Informe o comprimento: ");
	scanf("%f", &comp);
	ret = area(larg, comp);
	printf("\nArea: %.2f", ret); 
}

