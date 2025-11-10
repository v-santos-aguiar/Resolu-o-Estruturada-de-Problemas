#include <stdio.h>
#include <conio.h>

/*9.	POR REFERÊNCIA: Faça um procedimento que recebe a idade de um nadador por parâmetro e retorne também por parâmetro, 
a categoria desse nadador de acordo com a tabela abaixo:

Idade		Categoria
5 a 7 anos		A
8 a 10 anos		B
11-13 anos		C
14-17 anos		D
>= 18 anos		E	 */

void categoria(int idade, char *cat){
	
	if (idade >= 5 && idade <= 7){
		*cat = 'A';
	} else if (idade >= 8 && idade <= 10){
		*cat = 'B';
	} else if (idade >= 11 && idade <= 13){
		*cat = 'C';
	} else if (idade >= 14 && idade <= 17){
		*cat = 'D';
	} else if (idade >= 18){
		*cat = 'E';
	} else {
        *cat = 'X'; // Categoria Inválida para idades < 5
    }
}

void main(){
	int idade;
	char cat;
		
	printf("=========================\n");
    printf("<< Categoria Nadadores >>\n");
    printf("=========================\n");
    printf("5 a 7 anos      = A\n");
    printf("8 a 10 anos     = B\n");
    printf("11-13 anos      = C\n");
    printf("14-17 anos      = D\n");
    printf("18 anos ou mais = E\n");
    printf("------------------------\n\n");
	    
	printf("Informe a idade do nadador: ");
	scanf("%d", &idade);
	
	categoria(idade, &cat);
	
	if(cat == 'X'){
		printf("Categoria Invalida!");	
	} else{
		printf("Categoria: %c", cat);	
	}
	
}
