#include <stdio.h>
#include <conio.h>

/*1.	Criar uma estrutura chamada DadosAluno, que armazena a m�dia e idade de um aluno. 
Na fun��o main: criar uma vari�vel que � uma estrutura DadosAluno; ler a m�dia e a idade de um aluno e armazenar na vari�vel criada; 
exibir na tela a m�dia e a idade do aluno.*/

#define TF 2

struct DadoAluno {
	int idade;
	float media;
};

void carregar_registro(struct DadoAluno reg_aluno[TF]){
	int i;

	printf("<<Carregar vetor de Registro>>\n\n");

	printf("Informe a Idade: ");
	scanf("%d", &reg_aluno[i].idade);
	printf("Informe a media: ");
	scanf("%f", &reg_aluno[i].media);
}

void exibir_registro(struct DadoAluno reg_aluno[TF]){
	int i;
	
	printf("\n<<Exibir Vetor de Registro>>\n");
	
	printf("\nIdade: %d", reg_aluno[i].idade);
	printf("\nMedia: %0.2f", reg_aluno[i].media);
}


void main(){
	struct DadoAluno reg_aluno[TF];
	carregar_registro(reg_aluno);
	exibir_registro(reg_aluno);
}
