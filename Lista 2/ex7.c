#include <stdio.h>
#include <conio.h>

/*7 - Escreva um procedimento que ao realizar a leitura de um número qualquer, seja capaz de verificar se o mesmo é positivo ou negativo. 
Fazer a chamada no programa principal.*/

void ler_numero(){
	int n1;
	printf("Informe o primeiro numero: ");
	scanf("%d", &n1);
	
	if (n1 == 0){
		printf("Neutro");
	} 
	else 
		if(n1 > 0){
			printf("Positivo");
		}
		else{
			printf("Negativo");	
		}
	
}

void main(){
	ler_numero();
}
