#include <stdio.h>
#include <conio.h>

/*1. Fa�a uma fun��o que leia um n�mero inteiro e retorne 1 se ele for par ou 2 se for �mpar.*/

int par_impar(){
	int num;
	printf("Infome um numero: ");
	scanf("%d", &num);
	if(num % 2 == 0){
		return 1;
	} 
	else{
		return 2;
	}	
}

void main(){
	printf("Seu numero e: %d (1-par; 2-impar)", par_impar());
		
}
