#include <stdio.h>
#include <conio.h>
#include <string.h>

/*3.	Fa�a um procedimento que receba uma string por par�metro e exiba de tr�s pra frente.*/

void imprimir_texto(char inverso){
	for(i = 0; i < tam; i++){
		printf("Informe um texto: ");
		gets("%s" vet[i]);
	
}

void main(){
	char vet[100], tam, i;
	



	tam = strlen(inverso);
	for(i = tam; i >= 0; i--){
		printf("String Invertida: %s", ret_inverso(inverso));
		
	}

}
