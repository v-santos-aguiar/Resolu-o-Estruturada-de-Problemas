#include <stdio.h>
#include <conio.h>

#define TF 10

/*11.	Fa�a um algoritmo que leia um vetor A[10]. Inverta ent�o os valores de A. 
troque o primeiro pelo �ltimo, segundo pelo pen�ltimo e assim por diante. 
Mostre o vetor A ap�s as altera��es.*/

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

    // --- L�gica da Invers�o ---
    // O la�o vai S� AT� A METADE do vetor. Se fosse at� o fim,
    // ele iria desinverter o que j� foi invertido.
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
