#include <stdio.h>
#include <conio.h>

#define TF 10


/*1.	Fazer um programa em "C" que lê 10 valores e imprime o maior e o menor valor lido.*/

void carregar_vetor(int vet[TF]){
	int i;
	for (i = 0; i < TF; i++){
		printf("\nInforme vet: [%d]:", i);
		scanf("%d", &vet[i]);
	}
}

void exibir(int vet[TF]){
	int i, maior = vet[0], menor = vet[0];

    for (i = 1; i < TF; i++) {
        if (vet[i] > maior) {
            maior = vet[i];
        }
        if (vet[i] < menor) {
            menor = vet[i];
        }
    }

    printf("O maior valor lido foi: %d\n", maior);
    printf("O menor valor lido foi: %d\n", menor);
}

void main(){
	int vet[TF];
	carregar_vetor(vet);
	exibir(vet);
}
