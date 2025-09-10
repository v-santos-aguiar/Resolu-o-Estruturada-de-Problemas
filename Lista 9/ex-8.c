#include <stdio.h>
#include <conio.h>

#define TF 5


/*8.	Elaborar um programa para ler um vetor de cinco elementos inteiros e verificar se existem elementos iguais a 30. Se existir, escrever as posições em que estão 
armazenados.*/

void carregar_vetor(int vet[TF]){
	int i;
	for (i = 0; i < TF; i++){
		printf("\nInforme vet: [%d]", i);
		scanf("%d", &vet[i]);
	}

}

void exibir_vetor(int vet[TF]){
	int i, cont = 0;
	for(i = 0; i < TF; i++){
		if(vet[i] == 30){
			printf("\nVetor[%d]: %d", i, vet[i]);
			cont++;
		}
	}
	if(cont == 0){
		printf("\nNao encontrado numero 30");
	}
}

void main(){
	int vet[TF];
	carregar_vetor(vet);
	exibir_vetor(vet);
}
