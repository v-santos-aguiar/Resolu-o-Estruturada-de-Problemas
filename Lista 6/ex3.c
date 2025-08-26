#include <stdio.h>
#include <conio.h>

/*3.	Escreva uma função que receba 2 parâmetros (Nota1 e Nota2) calcule e retorne a média.*/

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
