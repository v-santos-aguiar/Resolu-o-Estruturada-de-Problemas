#include <stdio.h>
#include <conio.h>

#define C 10

/*4.	Ler um vetor C de 10 elementos inteiros, trocar todos os valores negativos do vetor C por 0. Escrever o vetor C modificado.*/

void carregar_vetor(int vet[C]){
	int i;
	for (i = 0; i < C; i++){
		printf("\nInforme vet: [%d]", i);
		scanf("%d", &vet[i]);
		if(vet[i] < 0){
			vet[i] = 0;
		}
	}

}

void exibir_vetor(int vet[C]){
	int i;
	for (i = 0; i < C; i++){
		printf("\nVetor [%d]: %d", i, vet[i]);
	}

}

void main(){
	int vet [C];
	carregar_vetor(vet);
	exibir_vetor(vet);
}
