#include <stdio.h>
#include <conio.h>
#include <string.h>

/*3.	Fa�a um procedimento que receba uma string por par�metro e exiba de tr�s pra frente.*/

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
