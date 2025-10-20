#include <stdio.h>
#include <conio.h>

/*#include <stdio.h>
#include <conio.h>

/*2.	Considerando o exercício anterior, criar uma variável que é um vetor da estrutura DadosAluno. O programa deve obter a média e a idade de 10 alunos. 
Depois, estes dados devem ser exibidos.*/

#define TF 10

struct DadoAluno {
	int idade;
	float media;
};

void carregar_registro(struct DadoAluno reg_aluno[TF]){
	int i;

	printf("<<Carregar vetor de Registro>>\n");
	
	for (i=0; i<TF; i++){
		fflush(stdin);
		printf("\nRegistro[%d]: ", i + 1);
		printf("Informe a Idade: ");
		scanf("%d", &reg_aluno[i].idade);
		printf("Informe a media: ");
		scanf("%f", &reg_aluno[i].media);
	}
	system("cls");
}

void exibir_registro(struct DadoAluno reg_aluno[TF]){
	int i;
	
	printf("\n<<Exibir Vetor de Registro>>");
	
	for (i = 0; i < TF; i++){
		printf("\n\nRegistro[%d]: ", i + 1);
		printf("\nIdade: %d", reg_aluno[i].idade);
		printf("\nMedia: %0.2f", reg_aluno[i].media);
	}
}


void main(){
	struct DadoAluno reg_aluno[TF];
	carregar_registro(reg_aluno);
	exibir_registro(reg_aluno);
}
