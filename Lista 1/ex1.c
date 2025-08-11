#include <stdio.h>
#include <conio.h>

void main(){
	float raio, area;
	printf("<<Calcular Area do Circulo>>\n");
	printf("Informe o raio do circulo: ");
	scanf("f%", &raio);
	area = 3.14 * raio * raio;
	printf("Area: %0.2f", area);	
}
