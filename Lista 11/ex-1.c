#include <stdio.h>
#include <conio.h>
#include <string.h>

/*1.	Escreva uma fun��o que retorne a mensagem "ol� mundo!". Est� fun��o dever� ser chamado atrav�s do programa principal. Exibir conte�do retornado.*/

char *ret_ola_mundo(){
	return "Ola mundo!!!";
}

void main(){
	printf("\nRetorno: %s", ret_ola_mundo());
}

