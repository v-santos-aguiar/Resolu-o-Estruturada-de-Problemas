#include <stdio.h>
#include <conio.h>

#define TF 8

/*9.	Fa�a um algoritmo que leia um vetor de 8 posi��es do tipo float e d�vida todos os seus elementos pelo maior valor do vetor. 
 Mostre o vetor ap�s os c�lculos.*/

void main() {
	float vet[TF], maior_valor;
	int i;
	
	printf("Digite os %d valores do vetor:\n", TF);
    for (i = 0; i < TF; i++) {
        printf("Posicao %d: ", i);
        scanf("%f", &vet[i]);
    }
    
    // Pega o primeiro valor como ponto de partida.
    maior_valor = vet[0];
    
    for (i = 0; i < TF; i++) {
        if (vet[i] > maior_valor) {
            maior_valor = vet[i];
        }
    }
	
	printf("\n----------------------------------------\n");
    printf("O maior valor encontrado no vetor foi: %.2f\n", maior_valor);
    
    // --- Verifica��o de seguran�a: Evitar divis�o por zero ---
    if (maior_valor == 0) {
        printf("Nao e possivel fazer a divisao, pois o maior elemento e zero.\n");
    }
    
    for (i = 0; i < TF; i++) {
        vet[i] = vet[i] / maior_valor;
    }
    
    printf("\nVetor apos os calculos:\n");
    for (i = 0; i < TF; i++) {
        // Mostra com 4 casas decimais para melhor precis�o
        printf("Posicao %d: %.4f\n", i, vet[i]);
    }
    
}
