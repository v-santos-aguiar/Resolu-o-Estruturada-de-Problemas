#include <stdio.h>
#include <conio.h>

#define TF 4


/*5.	Ler um vetor D de 4 elementos. Criar um vetor E, com todos os elementos de D na ordem inversa, ou seja, o último elemento passará a ser o primeiro, 
o penúltimo será o segundo e assim por diante. Escrever todo o vetor D e todo o vetor E.*/

void carregar_vetor(int vet_d[TF]){
	int i;
	for (i = 0; i < TF; i++){
		printf("\nInforme vet: [%d]", i);
		scanf("%d", &vet_d[i]);
	}

}

void inverter_posicoes(int vet_d[TF], int vet_e[TF]){
	int i, j;
	for(i = 0, j=TF-1; i < TF; i++, j--){
		vet_e[j] = vet_d[i];
	}

}

void exibir_vetor(int vet_e[TF]){
	int i;
	for (i = 0; i < TF; i++){
		printf("\nVetor [%d]: %d", i, vet_e[i]);
	}

}

void main(){
	int vet_d[TF], vet_e[TF];
	carregar_vetor(vet_d);
	inverter_posicoes(vet_d, vet_e);
	exibir_vetor(vet_e);
}
