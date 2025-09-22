#include <stdio.h>
#include <conio.h>

#define TF 7

/*8.	Escreva um algoritmo que leia 7 valores para um vetor de 7 posições. 
Mostre depois somente os positivos.*/

void main() {
	int vet[TF], i;
	
	printf("Digite %d valores (positivos, negativos ou zero):\n", TF);
    for (i = 0; i < TF; i++) {
        printf("Posicao [%d]: ", i);
        scanf("%d", &vet[i]);
    }
    
    printf("\nOs valores positivos digitados foram:\n");
    for (i = 0; i < TF; i++) {
        // Verifica se o elemento na posição 'i' é maior que 0
        if (vet[i] > 0) {
            printf("%d ", vet[i]);
        }
    }
    printf("\n");
}
