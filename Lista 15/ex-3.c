#include <stdio.h>
#include <conio.h>

/*3.	Fazer um programa que cria uma estrutura livro, que contém os elementos título, ano de edição, número de páginas e preço. 
Criar uma variável desta estrutura que é um vetor de 5 elementos. Ler os valores para a estrutura e imprimir a média do número de páginas dos livros.*/

#define TF 5

struct livro {
	char titulo[100];
	int ano;
	int paginas;
	float preco;
};

void carregar_registro(struct livro reg_livro[TF]){
	int i;

	printf("<<Carregar vetor de Registro>>\n");
	
	for (i=0; i<TF; i++){
		fflush(stdin);
		printf("\nRegistro[%d]: ", i + 1);
		printf("\nInforme o Titulo: ");
		gets(reg_livro[i].titulo);
		printf("Informe o Ano de Edição: ");
		scanf("%d", &reg_livro[i].ano);
		printf("Informe a qtde de Paginas: ");
		scanf("%d", &reg_livro[i].paginas);
		printf("Informe o Preco: ");
		scanf("%f", &reg_livro[i].preco);
}
	system("cls");
}

void exibir_registro(struct livro reg_livro[TF]){
	int i;
	
	printf("\n<<Exibir Registros de Livros>>");
	
	for (i = 0; i < TF; i++){
		printf("\n\nRegistro[%d]: ", i + 1);
		printf("\nTitulo: %s", reg_livro[i].titulo);
		printf("\nAno de Edicao: %d", reg_livro[i].ano);
		printf("\nPaginas: %d", reg_livro[i].paginas);
		printf("\nPreco: %0.2f", reg_livro[i].preco);
	}
}

void calcular_media(struct livro reg_livro[TF]){
	int i, soma_paginas = 0, media;

	for (i = 0; i < TF; i++){
		soma_paginas += reg_livro[i].paginas; 		
	}
	media = soma_paginas / TF;
	printf("\n\nMedia de paginas: %d", media);
}


void main(){
	struct livro reg_livro[TF];
	carregar_registro(reg_livro);
	exibir_registro(reg_livro);
	calcular_media(reg_livro);
}
