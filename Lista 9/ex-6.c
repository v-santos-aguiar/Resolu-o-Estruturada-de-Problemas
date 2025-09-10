#include <stdio.h>
#include <conio.h>

#define TF 10


/*6.	Criar um programa para ler um vetor de dez números reais; e mostrar os números contidos nos índices pares.*/

void carregar_vet(int vet[TF]){
    int i;
    for (i = 0; i < TF; i++){
        printf("\nInforme vet: [%d]", i);
        scanf("%d", &vet[i]);
    }
}

void exibir_vet_pares(int vet[TF]){
    int i;
    printf("\nNumeros nos indices pares:\n");
    for (i = 0; i < TF; i++){
        if(i % 2 == 0){
            printf("Vetor[%d]: %d\n", i, vet[i]);
        }
    }
}

void main(){
    int vet[TF];
    carregar_vet(vet);
    exibir_vet_pares(vet);
}
