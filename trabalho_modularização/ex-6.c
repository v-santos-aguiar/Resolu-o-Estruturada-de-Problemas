#include <stdio.h>
#include <conio.h>

/*6.	POR REFERÊNCIA: Escreva um procedimento que receba a data de nascimento de uma pessoa (DataNascimento), 
a data atual calcule a idade e retorne (Idade) por parâmetro.*/

void calcular_idade(int aa, int an, int *idade){
	*idade = aa - an;
}

void main(){
	int aa, an, idade;
	printf("Informe o ano atual: ");
	scanf("%d", &aa);
	printf("Informe o ano de nascimento: ");
	scanf("%d", &an);
	
	calcular_idade(aa, an, &idade);
	
	printf("\n Sua idade e: %d anos\n", idade);
	
}
