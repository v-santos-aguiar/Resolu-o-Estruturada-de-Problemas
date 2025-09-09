#include <stdio.h>
#include <conio.h>

#define A 5

/*2.	Preencher um vetor A de 5 elementos com os números fornecidos pelos usuários.  Escrever o vetor A após o seu total preenchimento.*/

void carregar_vetor(int vet[A]){
	int i;
	for (i = 0; i < A; i++){
		printf("\nInforme vet: [%d]", i);
		scanf("%d", &vet[i]);
	}

}

void exibir_vetor(int vet[A]){
	int i;
	for (i = 0; i < A; i++){
		printf("\nVetor [%d]: %d", i, vet[i]);
	}

}

void main(){
	int vet [A];
	carregar_vetor(vet);
	exibir_vetor(vet);
}
