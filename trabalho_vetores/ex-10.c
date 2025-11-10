#include <stdio.h>
#include <conio.h>

#define TF 5

/*10.	Faça um algoritmo que leia dois vetores (A e B) de 5 posições de números. 
O algoritmo deve, então, subtrair o primeiro elemento de A do último de B, subtrair o segundo elemento de A do penúltimo de B, e assim por diante. 
Mostre o resultado da subtração.*/

void carregar_vetor(int vet[], char nome_vet) {
    int i;
    printf("\n--- Preenchendo o Vetor %c ---\n", nome_vet);
    for (i = 0; i < TF; i++) {
        printf("Digite o valor para a posicao %d: ", i);
        scanf("%d", &vet[i]);
    }
}

void main() {
    int vet_a[TF], vet_b[TF], i, indice_b, res;

    carregar_vetor(vet_a, 'A');
    carregar_vetor(vet_b, 'B');
	
	system("cls");
    printf("\n--- Resultado das Subtracoes ---\n");
    for (i = 0; i < TF; i++) {
        indice_b = (TF - 1) - i;
        res = vet_a[i] - vet_b[indice_b];
        
        printf("A[%d] - B[%d] = %d - %d = %d\n", i, indice_b, vet_a[i], vet_b[indice_b], res);
    }
}
