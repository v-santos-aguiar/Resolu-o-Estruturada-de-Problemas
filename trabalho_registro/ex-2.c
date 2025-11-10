#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

/*2.	Criar um algoritmo que que armazene os dados dos alunos de uma determinada turma conforme abaixo:

- nome
- número de faltas
- nota1
- nota2
- média (a média deverá ser calcula pelo programa)

O algoritmo deverá ter as seguintes funcionalidades:

a.	Ler uma turma de 5 alunos
b.	Exibir todos os dados dos alunos lidos
c.	Exibir o nome e a nota do aluno com maior média
d.	Exibir o nome e a nota do aluno com menor média
e.	Exibir a média geral da turma
f.	Exibir quantos alunos possuem média >= 7
g.	Exibir quantos alunos estão abaixo da média 7
h.	Exibir quantos alunos possuem mais que 20 faltas
*/

#define TF 5

struct aluno {
	char nome[50];
	int faltas;
	float n1;
	float n2;
	float media;
};

void carregar_turma(struct aluno turma[TF]){
	int i;
	printf("<< Carregamento de Dados da Turma >>\n");
	printf("Por favor, informe os dados para %d alunos.\n", TF);
	
	for(i=0; i < TF; i++){
		printf("\n--- Aluno %d ---\n", i+1);
		
		printf("Nome: ");
		fflush(stdin);
		fgets(turma[i].nome, 50, stdin);
		
		printf("Numero de faltas: ");
		scanf("%d", &turma[i].faltas);
		
		printf("Nota 1: ");
		scanf("%f", &turma[i].n1);
		
		printf("Nota 2: ");
		scanf("%f", &turma[i].n2);
		
		turma[i].media = (turma[i].n1 + turma[i].n2) / 2.0;
		printf("-> Media calculada: %.2f\n", turma[i].media);
	}
	system("cls"); 
}

void exibir_turma(struct aluno turma[TF]){
	int i;
	printf("<< Todos os Alunos da Turma >>\n");
	
	for(i=0; i < TF; i++){
		printf("\n--- Aluno %d ---", i+1);
		printf("\nNome: %s", turma[i].nome);
		printf("Faltas: %d\n", turma[i].faltas);
		printf("Nota 1: %.2f\n", turma[i].n1);
		printf("Nota 2: %.2f\n", turma[i].n2);
		printf("Media Final: %.2f\n", turma[i].media);
	}
}

void calcular_estatisticas(struct aluno turma[TF]){
	int i;
	
	// Variáveis para as estatísticas
	float soma_medias_turma = 0;
	int cont_aprovados = 0, cont_reprovados = 0, cont_excesso_faltas = 0;
	
	// Variáveis para Maior/Menor Média
	float maior_media = 0, menor_media = 0;
	int index_maior_media = 0, index_menor_media = 0;

	for(i=0; i < TF; i++){
		
		// (e) Soma para a média geral
		soma_medias_turma += turma[i].media;
		
		// (f) e (g) Contagem de aprovados/reprovados
		if(turma[i].media >= 7.0){
			cont_aprovados++;
		} else {
			cont_reprovados++;
		}
		
		// (h) Contagem de faltas
		if(turma[i].faltas > 20){
			cont_excesso_faltas++;
		}
		
		// (c) Verifica se encontra uma média MAIOR
		if(turma[i].media > maior_media){
			maior_media = turma[i].media;
			index_maior_media = i; // Guarda o índice do novo melhor aluno
		}
		
		// (d) Verifica se encontra uma média MENOR
		if(i == 0 || turma[i].media < menor_media){
			menor_media = turma[i].media;
			index_menor_media = i; // Guarda o índice do novo pior aluno
		}
	}

	printf("\n\n--- Estatisticas da Turma ---");
	
	printf("\n\nAluno com Maior Media:");
	printf("\nNome: %s", turma[index_maior_media].nome);
	printf("Media: %.2f", turma[index_maior_media].media);

	printf("\n\nAluno com Menor Media:");
	printf("\nNome: %s", turma[index_menor_media].nome);
	printf("Media: %.2f", turma[index_menor_media].media);
	
	printf("\n\nMedia Geral da Turma: %.2f", (soma_medias_turma / TF));

	printf("\nAlunos com media >= 7 (Aprovados): %d", cont_aprovados);

	printf("\nAlunos com media < 7 (Reprovados): %d", cont_reprovados);

	printf("\nAlunos com mais de 20 faltas: %d\n", cont_excesso_faltas);
}

void main(){
	struct aluno turma[TF];
	
	carregar_turma(turma);
	exibir_turma(turma);
	calcular_estatisticas(turma);
}
