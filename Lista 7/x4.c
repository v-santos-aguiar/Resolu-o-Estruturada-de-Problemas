#include <stdio.h>
#include <conio.h>

/*4.	Escreva um procedimento que receba a Largura e o Comprimento do quadrado/retângulo por parâmetro, calcule e retorne também por parâmetro a área (Area).*/

void calcular_area(float larg, float comp, float *area){
	*area = larg * comp;
}

void main(){
	float larg, comp, area;
	printf("Informe a largura: ");
	scanf("%f", &larg);
	printf("Informe o comprimento: ");
	scanf("%f", &comp);
	calcular_area(larg, comp, &area);
	printf("\nArea: %.2f", area); 
}
