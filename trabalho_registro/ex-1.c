#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

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

#define TF 5

struct ficha {
	char nome[50];
	float salario;
	char cpf[15];
	int idade;
	int sexo;
};

void carregar_reg(struct ficha reg_ficha[TF]){
	int i;
	printf("<<Carregar vetor de Registros>>\n");
	printf("Por favor, informe os dados para %d fichas.\n", TF);
	for(i=0; i < TF;i++){
		printf("\nRegistro: %d\n", i+1);
		
		printf("Informe o nome: ");
		fflush(stdin);
		fgets(reg_ficha[i].nome, 50, stdin);
		
		printf("Informe o salario: ");
		scanf("%f", &reg_ficha[i].salario);
		
		printf("Informe o CPF (XXX.XXX.XXX-XX): ");
		fflush(stdin);
		fgets(reg_ficha[i].cpf, 15, stdin);
		
		printf("Informe a Idade: ");
		scanf("%d", &reg_ficha[i].idade);

		do{
			printf("Informe o sexo (1-Masculino / 2-Feminino): ");
			scanf("%d", &reg_ficha[i].sexo);
			if(reg_ficha[i].sexo != 1 && reg_ficha[i].sexo != 2){
				printf("Opcao invalida. Tente novamente.\n");
			}
		}while(reg_ficha[i].sexo!=1 && reg_ficha[i].sexo!=2);
	}
	system("cls");
}

void exibir_reg(struct ficha reg_ficha[TF]){
	int i;
	printf("<<Registros de Fichas>>");
	for(i=0; i < TF; i++){
		printf("\n\nRegistro: %d\n", i+1);
		printf("Nome: %s", reg_ficha[i].nome);
		printf("Salario: %.2f\n", reg_ficha[i].salario);
		printf("CPF: %s", reg_ficha[i].cpf);
		printf("Idade: %d\n", reg_ficha[i].idade);

		if(reg_ficha[i].sexo == 1){
			printf("Sexo: Masculino");
		} else {
			printf("Sexo: Feminino");
		}
	}
}

float calcular_media_salarial(struct ficha reg_ficha[TF]){
	int i;
	float soma_salarios = 0;
	
	for(i=0; i < TF; i++){
		soma_salarios = soma_salarios + reg_ficha[i].salario;
	}
	
	return soma_salarios / TF;
}

float encontrar_maior_salario(struct ficha reg_ficha[TF]){
	int i;
	float maior_sal = 0; 
	
	for(i=0; i < TF; i++){
		if(reg_ficha[i].salario > maior_sal){
			maior_sal = reg_ficha[i].salario;
		}
	}
	
	return maior_sal;
}

int cont_fem(struct ficha reg_ficha[TF]){
	int i;
	int cont = 0;
	
	for(i=0; i < TF; i++){
		if(reg_ficha[i].sexo == 2){
			cont++;
		}
	}
	
	return cont;
}

void main(){
	struct ficha reg_ficha[TF];
	float media_salarial, maior_salario;
	int total_fem;
	
	carregar_reg(reg_ficha);
	exibir_reg(reg_ficha);
	
	media_salarial = calcular_media_salarial(reg_ficha);
	maior_salario = encontrar_maior_salario(reg_ficha);
	total_fem = cont_fem(reg_ficha);
	
	printf("\n\n\n--- Estatisticas ---\n");
	
	printf("\nMedia Salarial: R$ %.2f", media_salarial);
	printf("\nMaior Salario: R$ %.2f", maior_salario);
	printf("\nQuantidade de Pessoas do Sexo Feminino: %d\n", total_fem);
}
