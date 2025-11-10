#include <stdio.h>
#include <conio.h>

#define TF 10

/*11.	Faça um algoritmo que leia um vetor A[10]. Inverta então os valores de A. 
troque o primeiro pelo último, segundo pelo penúltimo e assim por diante. 
Mostre o vetor A após as alterações.*/

void main() {
   	int A[TF], i, aux;

    printf("Digite os %d valores do vetor A:\n", TF);
    for (i = 0; i < TF; i++) {
        printf("Posicao %d: ", i);
        scanf("%d", &A[i]);
    }

    system("cls");
    printf("\nVetor Original: [ ");
    for (i = 0; i < TF; i++) {
        printf("%d ", A[i]);
    }
    printf("]\n");

    // --- Lógica da Inversão ---
    // O laço vai SÓ ATÉ A METADE do vetor. Se fosse até o fim,
    // ele iria desinverter o que já foi invertido.
    for (i = 0; i < TF / 2; i++) {
        // Processo de troca (swap)
        aux = A[i];
		A[i] = A[(TF - 1) - i];
		A[(TF - 1) - i] = aux;
    }

    printf("Vetor Invertido: [ ");
    for (i = 0; i < TF; i++) {
        printf("%d ", A[i]);
    }
    printf("]\n");
}
