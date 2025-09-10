#include <stdio.h>
#include <conio.h>

#define TF 8

/*7.	Construir um programa para ler um vetor de oito números inteiros; e mostrar os números ímpares.*/

void carregar_vet(int vet[TF]){
    int i;
    for (i = 0; i < TF; i++){
        printf("\nInforme vet: [%d]", i);
        scanf("%d", &vet[i]);
    }
}

void exibir_impares(int vet[TF]){
    int i;
    printf("\nNumeros impares no vetor:\n");
    for (i = 0; i < TF; i++){
        // O operador de modulo (%) verifica se o resto da divisao por 2 e diferente de zero.
        if(vet[i] % 2 != 0){
            printf("%d\n", vet[i]);
        }
    }
}

void main(){
    int vet[TF];
    carregar_vet(vet);
    exibir_impares(vet);
}
