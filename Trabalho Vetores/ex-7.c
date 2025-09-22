#include <stdio.h>
#include <conio.h>

#define TF 5

/*7.	Fa�a um algoritmo que leia um vetor K[5]. Troque a seguir, 
todos os elementos de ordem �mpar do vetor com os elementos de ordem par imediatamente posterior.*/

void main() {
    int k[TF], i, aux;

    printf("Digite os %d valores do vetor K:\n", TF);
    for (i = 0; i < TF; i++) {
        printf("Posicao [%d]: ", i);
        scanf("%d", &k[i]);
    }
   
   	system("cls");
    printf("\nVetor Original: [ ");
    for (i = 0; i < TF; i++) {
        printf("%d ", k[i]);
    }
    printf("]\n");

    // O la�o avan�a de 2 em 2 (i = i + 2).
    // A condi��o 'i + 1 < TF' garante que n�o tentemos acessar uma posi��o fora do vetor.
    for (i = 0; i + 1 < TF; i += 2) {
        // O processo de troca(swap) de pares usando uma vari�vel auxiliar
        aux = k[i];
        k[i] = k[i+1];
        k[i+1] = aux;
    }

    printf("Vetor Modificado: [ ");
    for (i = 0; i < TF; i++) {
        printf("%d ", k[i]);
    }
    printf("]\n"); 
}
