#include <stdio.h>
#include <conio.h>

#define B 5

/*3.	Preencher um vetor B de 5 elementos com 1 se o número informado pelo usuário ímpar e com 0 se for par. Escrever o vetor B após o seu total preenchimento.*/

void carregar_vetor(int vet[B]){
	int i;
	for (i = 0; i < B; i++){
		printf("\nInforme vet: [%d]", i);
		scanf("%d", &vet[i]);
		vet[i] = vet[i] % 2;
	}

}

void exibir_vetor(int vet[B]){
	int i;
	for (i = 0; i < B; i++){
		printf("\nVetor [%d]: %d", i, vet[i]);
	}

}

void main(){
	int vet [B];
	carregar_vetor(vet);
	exibir_vetor(vet);
}
