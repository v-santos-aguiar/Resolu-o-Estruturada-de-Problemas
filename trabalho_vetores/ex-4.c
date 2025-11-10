#include <stdio.h>
#include <conio.h>

#define TF 10

/*4.	Fazer um programa em "C" que leia um conjunto de 10 valores inteiros e verificar se algum dos valores é igual à média dos mesmos.*/

void main() {
    int vet[TF], i, soma = 0;
    float media;
    int encontrou_igual = 0; 

    printf("Digite %d valores inteiros:\n", TF);
    for (i = 0; i < TF; i++) {
        printf("Valor %d: ", i);
        scanf("%d", &vet[i]);
        soma += vet[i];
    }

    // A conversão para float é importante para o cálculo exato da média.
    media = (float)soma / TF;

    for (i = 0; i < TF; i++) {
        if (vet[i] == media) {
            encontrou_igual += 1;
        }
    }

    printf("\n----------------------------\n");
    printf("A media dos valores e: %.2f\n", media);

    if (encontrou_igual) {
        printf("Resultado: SIM, %d valor e igual a media.\n", encontrou_igual);
    } else {
        printf("Resultado: NAO, nenhum valor e igual a media.\n");
    }
}
