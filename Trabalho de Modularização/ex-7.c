#include <stdio.h>
#include <conio.h>

/*7.	POR REFER�NCIA: Escreva um procedimento que receba 2 par�metros (Nota1 e Nota2) calcule e retorne tamb�m por par�metro a m�dia (Media).*/

void media_valor(int n1, int n2, int *media){
	*media = (n1 + n2) / 2;
}

void main(){
	int n1, n2, media;
	printf("informe a primeira nota:");
	scanf("%d", &n1);
	
	printf("informe a segunda nota:");
	scanf("%d", &n2);
	
	media_valor(n1, n2, &media); 
	printf("Media: %d", media);
}
