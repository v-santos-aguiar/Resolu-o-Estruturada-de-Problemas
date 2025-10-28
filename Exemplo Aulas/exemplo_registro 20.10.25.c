#include <stdio.h>
#include <conio.h>

#define TF 3

struct aluno {
	char nome[100];
	int faltas;
	float media;
};

void carregar_registro(struct aluno reg_aluno[TF]){
	int i;

	printf("<<Carregar vetor de Registro>>\n");
	
	for (i=0; i<TF; i++){
		fflush(stdin);
		printf("\nRegistro[%d]: ", i + 1);
		printf("\nInforme o nome: ");
		gets(reg_aluno[i].nome);
		printf("Informe as faltas: ");
		scanf("%d", &reg_aluno[i].faltas);
		printf("Informe a media: ");
		scanf("%f", &reg_aluno[i].media);
	}
	system("cls");
}

void exibir_registro(struct aluno reg_aluno[TF]){
	int i;
	
	printf("\n<<Exibir Vetor de Registro>>");
	
	for (i = 0; i < TF; i++){
		printf("\n\nRegistro[%d]: ", i + 1);
		printf("\nNome: %s", reg_aluno[i].nome);
		printf("\nFaltas: %d", reg_aluno[i].faltas);
		printf("\nMedia: %0.2f", reg_aluno[i].media);
	}
}


void main(){
	struct aluno reg_aluno[TF];
	carregar_registro(reg_aluno);
	exibir_registro(reg_aluno);
}
