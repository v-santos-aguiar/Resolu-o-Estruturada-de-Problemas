#include <stdio.h>
#include <conio.h>

#define TF 10

/*6.	Escreva um algoritmo que leia dois vetores de 10 posições e faça a multiplicação dos elementos de mesmo índice, 
colocando o resultado em um terceiro vetor.Mostre o vetor resultante.*/

void carregar_vetor(float vet[TF], char mensagem[]) {
    int i;
    printf("\n--- %s ---\n", mensagem);
    for (i = 0; i < TF; i++) {
        printf("Digite o valor para a posicao [%d]: ", i);
        scanf("%f", &vet[i]);
    }
}

void main() {
    float vet_a[TF], vet_b[TF], vet_res[TF];
	int i;
	// --- Usando o procedimento para preencher os dois vetores ---
    carregar_vetor(vet_a, "Preencha o primeiro vetor");
    carregar_vetor(vet_b, "Preencha o segundo vetor");
    
    for (i = 0; i < TF; i++) {
        vet_res[i] = vet_a[i] * vet_b[i];
    }
	
	system("cls");
    printf("\n--- Vetor Resultante da Multiplicacao ---\n");
    for (i = 0; i < TF; i++) {
        printf("Posicao [%d]: %.2f * %.2f = %.2f\n", i, vet_a[i], vet_b[i], vet_res[i]);
    }

}
