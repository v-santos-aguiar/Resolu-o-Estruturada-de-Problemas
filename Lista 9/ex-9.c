#include <stdio.h>
#include <conio.h>

#define TF 20


/*9.	Fazer um programa para ler um vetor de vinte números inteiros positivos e um número qualquer. Mostrar quantas vezes o número lido por último aparece no vetor.*/

void carregar_vetor(int vet[TF]){
	int i;
	for (i = 0; i < TF; i++){
		do{
			printf("\nInforme vet: [%d] (num positivo):", i);
			scanf("%d", &vet[i]);
			if(vet[i] < 0){
				printf("Informe um numero positivo!\n");
			}
		}while (vet[i] <= 0);
		
	}

}

void mostrar_vetor(int vet[TF]){
	int i, cont_ig = 0;
	for(i = 0; i < TF; i++){

		if(vet[i] == vet[TF-1]){
			
			cont_ig++;
		}

	}
	printf("\nQtdePosicoes iguais ultima: %d", cont_ig);
}

void main(){
	int vet[TF];
	carregar_vetor(vet);
	mostrar_vetor(vet);
}
