#include <stdio.h>
#include <conio.h>
#include <string.h>

/*2.	Escreva uma função que recebe a idade de um nadador por parâmetro e retorna à categoria desse nadador de acordo com a tabela abaixo:   

Idade			Categoria
5 a 7 anos		Infantil A
8 a 10 anos		Infantil B
11-13 anos		Juvenil A
14-17 anos		Juvenil B
>= 18 anos		Adulto
*/

char *ret_categoria(int idade){
	
	if (idade >= 5 && idade <= 7){
		return "Infantil A";
	} else if (idade >= 8 && idade <= 10){
		return "Infantil B";
	} else if (idade >= 11 && idade <= 13){
		return "Juvenil A";
	} else if (idade >= 14 && idade <= 17){
		return "Juvenil B";
	} else if (idade >= 18){
		return "Adulto";
	} else {
        return "Categoria Invalida para idades < 5";
    }
}

void main(){
	int idade;
		
	printf("============================\n");
    printf("<<<  Categoria Nadadores >>>\n");
    printf("============================\n");
    printf("5 a 7 anos      = Infantil A\n");
    printf("8 a 10 anos     = Infantil B\n");
    printf("11-13 anos      = Juvenil  C\n");
    printf("14-17 anos      = Juvenil  D\n");
    printf("18 anos ou mais = Adulto   E\n");
    printf("------------------------\n\n");
	    
	printf("Informe a idade do nadador: ");
	scanf("%d", &idade);
	printf("Categoria: %s", ret_categoria(idade));

}

