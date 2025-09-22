#include <stdio.h>
#include <conio.h>
#include <string.h>

/*3.	Faça um procedimento que receba uma string por parâmetro e exiba de trás pra frente.*/

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
