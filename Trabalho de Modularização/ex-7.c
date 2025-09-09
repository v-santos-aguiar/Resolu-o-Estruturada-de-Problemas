#include <stdio.h>
#include <conio.h>

/*7.	POR REFERÊNCIA: Escreva um procedimento que receba 2 parâmetros (Nota1 e Nota2) calcule e retorne também por parâmetro a média (Media).*/

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
