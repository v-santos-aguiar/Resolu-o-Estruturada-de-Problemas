#include <stdio.h>
#include <conio.h>

/*4.	Escreva um procedimento que receba a Largura e o Comprimento do quadrado/ret�ngulo por par�metro, calcule e retorne tamb�m por par�metro a �rea (Area).*/

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
