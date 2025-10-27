#include <stdio.h>
#include <conio.h>

/*6.	Desenvolva um programa que leia e exiba um registro conforme o modelo abaixo.*/

#define TF 1

struct ficha {
	char nome[50];
	float salario;
	char cpf[11];
	int idade;
	char sexo[10];
};

void carregar_reg(struct ficha reg_ficha[TF]){
	int i;
	printf("<<Carregar vetor de Registro>>\n");

	printf("Informe o nome: ");
	fflush(stdin);
	gets(reg_ficha[i].nome);
		
	printf("Informe o salario: ");
	scanf("%f", &reg_ficha[i].salario);
		
	printf("Informe o CPF: ");
	fflush(stdin);
	gets(reg_ficha[i].cpf);
		
	printf("Informe a Idade: ");
	scanf("%d", &reg_ficha[i].idade);

	printf("Informe o sexo: ");
	fflush(stdin);
	gets(reg_ficha[i].sexo);
}

void exibir_reg(struct ficha reg_ficha[TF]){
	int i;
	printf("\n<<Exibir Registro de Ficha>>");

	printf("\n\nRegistro: %d\n", i+1);
	printf("Nome: %s\n", reg_ficha[i].nome);
	printf("Salario: %.2f\n", reg_ficha[i].salario);
	printf("CPF: %s\n", reg_ficha[i].cpf);
	printf("Idade: %d\n", reg_ficha[i].idade);
	printf("Sexo: %s\n", reg_ficha[i].sexo);
}

void main(){
	struct ficha reg_ficha[TF];
	carregar_reg(reg_ficha);
	exibir_reg(reg_ficha);
}
