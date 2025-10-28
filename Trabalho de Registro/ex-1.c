#include <stdio.h>
#include <conio.h>

/*1.	Desenvolva um programa que leia e exiba um vetor registro conforme o modelo abaixo:

- nome
- salário
- cpf
- idade
- sexo (1-Masculino; 2-Feminino)

Com base no modelo acima crie um programa que contenha um vetor de registros com 5 posições e faça:

a.	Criar um procedimento que leia os registros. 
b.	Criar um procedimento que exiba todos os registros. 
c.	Criar uma função que calcule a média salarial.
d.	Criar uma função que retorne o maior salário.
e.	Criar uma função que retorne à quantidade de pessoas do sexo feminino
*/

#define TF 1

struct ficha {
	char nome[50];
	float salario;
	char cpf[14];
	int idade;
	int sexo;
};

void carregar_reg(struct ficha reg_ficha[TF]){
	int i;
	printf("<<Carregar vetor de Registros>>\n");
	for(i=0; i < TF;i++){
		printf("\nRegistro: %d\n", i+1);
		
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

		do{
			printf("Informe a qualificacao: (1-Feminino 2-Masculino) ");
			scanf("%d", &reg_ficha[i].sexo);
		}while(reg_ficha[i].sexo!=1 && reg_ficha[i].sexo!=2);
	}
}

void exibir_reg(struct ficha reg_ficha[TF]){
	int i;
	printf("\n<<Exibir Registros de Fichas>>");
	for(i=0; i < TF; i++){
		printf("\n\nRegistro: %d\n", i+1);
		printf("Nome: %s\n", reg_ficha[i].nome);
		printf("Salario: %.2f\n", reg_ficha[i].salario);
		printf("CPF: %s\n", reg_ficha[i].cpf);
		printf("Idade: %d\n", reg_ficha[i].idade);
		printf("Sexo: %d", reg_ficha[i].sexo);
	}
}

void main(){
	struct ficha reg_ficha[TF];
	carregar_reg(reg_ficha);
	exibir_reg(reg_ficha);
}
