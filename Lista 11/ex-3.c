#include <stdio.h>
#include <conio.h>
#include <string.h>

/*3.	Faça um procedimento que receba uma string por parâmetro e exiba de trás pra frente.*/

void imprimir_texto(char texto[1000]){
	int tam_str, i;
	tam_str = strlen(texto)-1;
	for(i = tam_str; i >= 0; i--){
		printf("Inverso: %c", texto[i]);
	}
}

void main(){
	char texto[1000];	
	printf("Informe um texto: ");
	gets(texto);
	imprimir_texto(texto);
}
