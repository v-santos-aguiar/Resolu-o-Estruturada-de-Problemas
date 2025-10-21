#include <stdio.h>
#include <conio.h>

/*4.	Foi realizada uma pesquisa entre 5 habitantes de uma certa região. De cada habitante foram coletados os dados: 
idade, sexo (1-Masculino, 2-Feminino), salário e número de filhos. 
Crie a estrutura de dados adequada para armazenar estas informações e faça uma função que armazene as informações digitadas pelo usuário na estrutura de dados criada. 
Faça também uma função que calcula a média do salário dos habitantes.*/

#define TF 5

struct pesquisa {
	int idade;
	int sexo;
	float salario;
	int num_filhos;
};

void carregar_registro(struct pesquisa reg_pesquisa[TF]){
	int i;

	printf("<<Carregar Registro de Habitantes>>\n");
	
	for (i=0; i<TF; i++){
		fflush(stdin);
		printf("\nRegistro[%d]: ", i + 1);
		printf("\nInforme sua idade: ");
		scanf("%d", &reg_pesquisa[i].idade);
		
		do{
			printf("Informe o sexo (1-M 2-F): ");
			scanf("%d", &reg_pesquisa[i].sexo);
		} while(reg_pesquisa[i].sexo != 1 && reg_pesquisa[i].sexo != 2);		
			
		printf("Informe o salarios: ");
		scanf("%f", &reg_pesquisa[i].salario);
		printf("Informe o Numero de Filhos: ");
		scanf("%d", &reg_pesquisa[i].num_filhos);
}
	system("cls");
}

void exibir_registro(struct pesquisa reg_pesquisa[TF]){
	int i;
	
	printf("\n<<Exibir Registros de Pesquisas>>");
	
	for (i = 0; i < TF; i++){
		printf("\n\nRegistro[%d]: ", i + 1);
		printf("\nIdade: %d", reg_pesquisa[i].idade);
		printf("\nSexo (1-M 2-F): %d", reg_pesquisa[i].sexo);
		printf("\nSalario: %0.2f", reg_pesquisa[i].salario);
		printf("\nNumero Filhos: %d", reg_pesquisa[i].num_filhos);
	}
}

void calcular_media(struct pesquisa reg_pesquisa[TF]){
	int i, soma = 0;
	float media;
	
	for (i = 0; i < TF; i++){
		soma += reg_pesquisa[i].salario; 		
	}
	media = soma / TF;
	printf("\n\nMedia de Salarios: %0.2f", media);
}


void main(){
	struct pesquisa reg_pesquisa[TF];
	carregar_registro(reg_pesquisa);
	exibir_registro(reg_pesquisa);
	calcular_media(reg_pesquisa);
}
