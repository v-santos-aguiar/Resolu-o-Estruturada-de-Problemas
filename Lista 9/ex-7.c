#include <stdio.h>
#include <conio.h>

#define TF 10


/*7.	Construir um programa para ler um vetor de oito números inteiros; e mostrar os números ímpares.*/

void carregar_vetor(int vet[TF]){
	int i;
	for (i = 0; i < TF; i++){
		printf("\nInforme vet: [%d]", i);
		scanf("%d", &vet[i]);
	}

}

void exibir_vetor(int vet[TF]){
	int i;
	for (i = 0; i < TF; i++){
		if(i == 1){
			printf("\nVetor [%d]: %d", i, vet[i]);
		}
	}

}

void main(){
	int vet[TF];
	carregar_vetor(vet);
	exibir_vetor(vet);
}
