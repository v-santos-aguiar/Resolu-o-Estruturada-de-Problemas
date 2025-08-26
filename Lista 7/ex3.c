#include <stdio.h>
#include <conio.h>

/*3.	Escreva um procedimento que receba 2 parâmetros (Nota1 e Nota2) calcule e retorne também por parâmetro a média (Media).*/

void calcular_media(float n1, float n2, float *media){
	*media = (n1 + n2) / 2;	
}

void main(){
	float n1, n2, media;
	printf("Informe a primeira nota: ");
	scanf("%f", &n1);
	printf("Informe a segunda nota: ");
	scanf("%f", &n2);
	calcular_media(n1, n2, &media);
	printf("\nMedia: %.2f", media); 
}


