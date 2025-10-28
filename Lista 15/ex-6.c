#include <stdio.h>
#include <conio.h>

/*6.	Desenvolva um programa que leia e exiba um registro conforme o modelo abaixo.*/

struct ficha {
	char nome[50];
	float salario;
	char cpf[14];
	int idade;
	char sexo[10];
};

void carregar_reg(struct ficha reg_ficha){
	int i;
	printf("<<Carregar vetor de Registro>>\n\n");

	printf("Informe o nome: ");
	fflush(stdin);
	gets(reg_ficha.nome);
		
	printf("Informe o salario: ");
	scanf("%f", &reg_ficha.salario);
		
	printf("Informe o CPF: ");
	fflush(stdin);
	gets(reg_ficha.cpf);
		
	printf("Informe a Idade: ");
	scanf("%d", &reg_ficha.idade);

	printf("Informe o sexo: ");
	fflush(stdin);
	gets(reg_ficha.sexo);
}

void exibir_reg(struct ficha reg_ficha){
	int i;
	printf("\n<<Exibir Registro de Ficha>>");

	printf("\n\nRegistro: %d\n", i+1);
	printf("Nome: %s\n", reg_ficha.nome);
	printf("Salario: %.2f\n", reg_ficha.salario);
	printf("CPF: %s\n", reg_ficha.cpf);
	printf("Idade: %d\n", reg_ficha.idade);
	printf("Sexo: %s\n", reg_ficha.sexo);
}

void main(){
	struct ficha reg_ficha;
	carregar_reg(reg_ficha);
	exibir_reg(reg_ficha);
}
