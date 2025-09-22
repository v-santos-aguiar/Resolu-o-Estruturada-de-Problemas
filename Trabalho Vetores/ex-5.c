#include <stdio.h>
#include <conio.h>

#define TF 10

/*5.	Faça um algoritmo que leia um vetor N[10]. A seguir, encontre o menor elemento do vetor N e a sua posição dentro do vetor.*/

void main() {
    int N[TF], i, menor_valor, posicao_menor;

    printf("Digite os %d valores do vetor:\n", TF);
    for (i = 0; i < TF; i++) {
        printf("Posicao %d: ", i);
        scanf("%d", &N[i]);
    }
	
	//Declara o elemento da posição 0 como menor, para não ter lixo de memória
    menor_valor = N[0];
    posicao_menor = 0;

   	// Começa em '1' porque a posição '0' já é referência
    for (i = 1; i < TF; i++) {
        //Comparação para achar o menor
        if (N[i] < menor_valor) {
            menor_valor = N[i];
            posicao_menor = i;
        }
    }

    printf("\n----------------------------------\n");
    printf("Menor valor encontrado: %d\n", menor_valor);
    printf("Posicao no vetor: %d\n", posicao_menor);
}
