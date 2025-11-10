#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

/*3.	Criar um algoritmo que armazene os dados das participantes em um concurso de beleza conforme abaixo:

- nome
- altura
- cor preferida (1-branco, 2-vermelho, 3-amarelo, 4-Verde)
- cor dos olhos (1-castanho, 2-preto, 3-azul, 4-verde)

O algoritmo deverá ter as seguintes funcionalidades:

a.	Ler os dados de 7 participantes
b.	Exibir todos os dadas as participantes
c.	Exibir o nome e a altura da participante mais alta
d.	Exibir o nome e a altura da participante mais baixa
e.	Exibir a média geral das participantes
f.	Exibir quantas participantes estão acima da média
g.	Exibir quantas participantes possuem olhos azul
h.	Exibir a média de altura das participantes que possuem como cor preferida o verde
*/

#define TF 7

struct participante {
	char nome[50];
	float altura;
	int cor_preferida;
	int cor_olhos;
};

void carregar_concurso(struct participante p[TF]){
	int i;
	printf("<< Carregamento de Dados do Concurso >>\n");
	printf("Por favor, informe os dados para %d participantes.\n", TF);
	
	for(i=0; i < TF; i++){
		printf("\n--- Participante %d ---\n", i+1);
		
		printf("Nome: ");
		fflush(stdin);
		fgets(p[i].nome, 50, stdin);
		
		printf("Altura: ");
		scanf("%f", &p[i].altura);

		do{
			printf("Cor Preferida (1-Branco, 2-Vermelho, 3-Amarelo, 4-Verde): ");
			scanf("%d", &p[i].cor_preferida);
			if(p[i].cor_preferida < 1 || p[i].cor_preferida > 4){
				printf("Opcao invalida. Tente novamente.\n");
			}
		}while(p[i].cor_preferida < 1 || p[i].cor_preferida > 4);

		do{
			printf("Cor dos Olhos (1-Castanho, 2-Preto, 3-Azul, 4-Verde): ");
			scanf("%d", &p[i].cor_olhos);
			if(p[i].cor_olhos < 1 || p[i].cor_olhos > 4){
				printf("Opcao invalida. Tente novamente.\n");
			}
		}while(p[i].cor_olhos < 1 || p[i].cor_olhos > 4);
	}
	system("cls");
}

void exibir_concurso(struct participante p[TF]){
	int i;
	printf("<< Todas as Participantes >>\n");
	
	for(i=0; i < TF; i++){
		printf("\n--- Participante %d ---", i+1);
		printf("\nNome: %s", p[i].nome);
		printf("Altura: %.2f m\n", p[i].altura);
		
		// Converte o código da Cor Preferida para texto
		printf("Cor Preferida: ");
		switch(p[i].cor_preferida){
			case 1: printf("Branco\n"); break;
			case 2: printf("Vermelho\n"); break;
			case 3: printf("Amarelo\n"); break;
			case 4: printf("Verde\n"); break;
		}
		
		// Converte o código da Cor dos Olhos para texto
		printf("Cor dos Olhos: ");
		switch(p[i].cor_olhos){
			case 1: printf("Castanho\n"); break;
			case 2: printf("Preto\n"); break;
			case 3: printf("Azul\n"); break;
			case 4: printf("Verde\n"); break;
		}
	}
}

void calcular_estatisticas(struct participante p[TF]){
	int i;
	
	// Variáveis para as estatísticas
	float soma_alturas_total = 0, media_geral_altura = 0;
	int cont_acima_media = 0, cont_olhos_azuis = 0;
	
	// Variáveis para Mais Alta / Mais Baixa
	float altura_mais_alta = 0, altura_mais_baixa = 0;
	int index_mais_alta = 0, index_mais_baixa = 0;
	
	// Variáveis para a média de quem gosta de Verde
	float soma_alturas_verde = 0;
	int cont_prefere_verde = 0;

	for(i=0; i < TF; i++){
		
		// (e) Soma para a média geral
		soma_alturas_total += p[i].altura;
		
		// (c) Encontra a Mais Alta
		if(i == 0 || p[i].altura > altura_mais_alta){
			altura_mais_alta = p[i].altura;
			index_mais_alta = i;
		}
		
		// (d) Encontra a Mais Baixa
		if(i == 0 || p[i].altura < altura_mais_baixa){
			altura_mais_baixa = p[i].altura;
			index_mais_baixa = i;
		}
		
		// (g) Contagem de olhos azuis (código 3)
		if(p[i].cor_olhos == 3){
			cont_olhos_azuis++;
		}
		
		// (h) Soma e conta quem prefere Verde (código 4)
		if(p[i].cor_preferida == 4){
			cont_prefere_verde++;
			soma_alturas_verde += p[i].altura;
		}
	}

	// (e) Calcula a média geral
	media_geral_altura = soma_alturas_total / TF;
	
	for(i=0; i < TF; i++){
		// (f) Compara a altura com a média geral já calculada
		if(p[i].altura > media_geral_altura){
			cont_acima_media++;
		}
	}

	printf("\n\n--- Estatisticas do Concurso ---");

	printf("\n\nParticipante Mais Alta:");
	printf("\nNome: %s", p[index_mais_alta].nome);
	printf("Altura: %.2f m", p[index_mais_alta].altura);

	printf("\n\nParticipante Mais Baixa:");
	printf("\nNome: %s", p[index_mais_baixa].nome);
	printf("Altura: %.2f m", p[index_mais_baixa].altura);

	printf("\n\nMedia geral de altura: %.2f m", media_geral_altura);

	printf("\nParticipantes acima da media: %d", cont_acima_media);

	printf("\nParticipantes com olhos azuis: %d", cont_olhos_azuis);

	printf("\n\nMedia de altura (cor preferida: Verde): ");
	
	// Validação para evitar divisão por zero
	if(cont_prefere_verde > 0){
		float media_altura_verde = soma_alturas_verde / cont_prefere_verde;
		printf("%.2f m\n", media_altura_verde);
	} else {
		printf("N/A (Nenhuma participante prefere verde)\n");
	}
}

void main(){
	struct participante concurso[TF];

	carregar_concurso(concurso);
	exibir_concurso(concurso);
	calcular_estatisticas(concurso);
}
