#include <stdio.h>
#include <conio.h>

#define X 10

/*1.	Carregar um vetor X de 10 elementos com os valores de 10 em 10 e exibi-lo no final.*/

void carregar_vetor(int vet[X]){
	int i;
	for (i = 0; i < X; i++){
		vet[i] = (i + 1) * 10;
	}

}

void exibir_vetor(int vet[X]){
	int i;
	for (i = 0; i < X; i++){
		printf("\nVetor [%d]: %d", i, vet[i]);
	}

}

void main(){
	int vet [X];
	carregar_vetor(vet);
	exibir_vetor(vet);
}
