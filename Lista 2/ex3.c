#include <stdio.h>
#include <conio.h>

/*3 - Escreva um procedimento que leia seu nome e em uma segunda variável leia seu sobrenome e ao final exiba seu nome concatenado com seu sobrenome. 
Este procedimento deverá ser chamado através do programa principal.*/

void exibir_nome_completo(){
	char nome[100], sobrenome[100];
	printf("Informe o primeiro nome: ");
	scanf("%s", nome);
	
	printf("Informe o sobrenome: ");
	scanf("%s", sobrenome);
	
	printf("Primeiro nome: %s %s", nome, sobrenome);
	
}

void main(){
	exibir_nome_completo();
}
