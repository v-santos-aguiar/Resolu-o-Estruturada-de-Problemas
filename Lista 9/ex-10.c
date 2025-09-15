#include <stdio.h>
#include <conio.h>

#define TF 6


/*10.	Escrever um programa para ler um vetor de seis números inteiros; e mostrar a quantidade de números ímpares.*/

void carregar_vetor(int vet[TF]){
	int i;
	for (i = 0; i < TF; i++){
		printf("\nInforme vet: [%d]:", i);
		scanf("%d", &vet[i]);	
	}

}

void mostrar_vetor(int vet[TF]){
	int i, cont_imp = 0;
	for(i = 0; i < TF; i++){

		if(vet[i] % 2 != 0){
			cont_imp++;
		}

	}
	printf("\nQtde numeros impares: %d", cont_imp);
}

void main(){
	int vet[TF];
	carregar_vetor(vet);
	mostrar_vetor(vet);
}
