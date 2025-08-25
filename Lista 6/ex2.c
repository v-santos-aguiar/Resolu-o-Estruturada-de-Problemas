#include <stdio.h>
#include <conio.h>

/*2.	Escreva uma função que receba a data de nascimento de uma pessoa (DataNascimento), calcule e retorne a idade.*/

int idade(int aa, int an){
	int menos;
	menos = aa - an;
	return menos;	
}

void main(){
	int aa, an, ret;
	printf("Informe o ano atual: ");
	scanf("d%", &aa);
	printf("Informe o ano de nascimento: ");
	scanf("d%", &an);
	ret = idade(aa, an);
	printf("\nSoma: %d", ret); 
}
