#include <stdio.h>
#include <conio.h>

#define TF 10


/*11.	Faça um procedimento que recebe, por parâmetro, 2 vetores de 10 elementos inteiros e que calcule e retorne, também por parâmetro, 
a soma dos dois primeiros vetores.   //vetor c recebe os outros 2 vetor */

void carregar_vetores(int vet[TF]){
	int i;
	printf("\n<<Carregar Vetores>>\n");
	for (i = 0; i < TF; i++){
		printf("\nInforme vet: [%d]:", i);
		scanf("%d", &vet[i]);
	}
}

void somar_vetores(int vet_a[TF], int vet_b[TF], int vet_c[TF]){
	int i;
	for(i = 0; i < TF; i++){
		vet_c[i] = vet_a[i] + vet_b[i];
	}
}

void mostrar_vetores(int vet[TF]){
	int i;
	for(i = 0; i < TF; i++){
		printf("\nSoma vetores posicao[%d] = %d", i, vet[i]);
	}
}

void main(){
	int vet_a[TF], vet_b[TF], vet_c[TF];

	carregar_vetores(vet_a);
	carregar_vetores(vet_b);
	somar_vetores(vet_a, vet_b, vet_c);
	mostrar_vetores(vet_c);
	
}
