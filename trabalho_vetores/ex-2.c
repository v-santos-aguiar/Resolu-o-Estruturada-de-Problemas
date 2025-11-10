#include <stdio.h>
#include <conio.h>

#define TF 5

/*2.	Fazer uma rotina que recebe como parâmetro um array de 5 posições contendo as notas de um aluno ao longo do ano e retornar a média.*/

void carregar_vetor(int vet[TF]){
    int i;
    for (i = 0; i < TF; i++){
        printf("\nInforme a nota %d:", i + 1);
        scanf("%d", &vet[i]);
    }
}

float calcular_media(int vet[TF]){
    int i, soma = 0;

    for (i = 0; i < TF; i++) {
        soma += vet[i];
    }
    return (float)soma / TF;
}

void main(){
    int vet[TF];
    float res;

    carregar_vetor(vet);
    res = calcular_media(vet);
    
    printf("\n Media: %.2f\n", res);
}
