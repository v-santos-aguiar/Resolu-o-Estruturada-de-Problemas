#include <stdio.h>
#include <conio.h>

/*3.	Escreva uma fun��o que receba 2 par�metros (Nota1 e Nota2) calcule e retorne a m�dia.*/

int media(float n1, float n2){
	int media;
	media = (n1 + n2) / 2;
	return media;	
}

void main(){
	float n1, n2, ret;
	printf("Informe a nota 1: ");
	scanf("%f", &n1);
	printf("Informe a noat 2: ");
	scanf("%f", &n2);
	ret = media(n1, n2);
	printf("\nMedia: %.2f", ret); 
}
