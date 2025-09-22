#include <stdio.h>
#include <conio.h>

#define TF 100

/*3.	Fazer uma rotina que recebe um array do tipo float e o número de valores que devem ser 
solicitados ao usuário e retornar o array preenchido com os valores digitados. O vetor deverá ser preenchido 
somente até a quantidade de elementos que o usuário solicitar.*/

void preencher_vet(float vet[], int n_elementos) {
    int i;
    printf("\n--- Preenchendo o vetor ---\n");
    for (i = 0; i < n_elementos; i++) {
        printf("Digite o valor para a posicao [%d]: ", i);
        scanf("%f", &vet[i]);
    }
}

void main() {
    float vet[TF];
    int qtd_a_ler;
    int i;
    
    printf("Quantos valores voce deseja digitar (maximo de %d)? ", TF);
    scanf("%d", &qtd_a_ler);
    
    // Se a quantidade for inválida, imprime e encerra
    if (qtd_a_ler <= 0 || qtd_a_ler > TF) {
        printf("Quantidade invalida. O programa sera encerrado.\n");
    }
    
    preencher_vet(vet, qtd_a_ler);
    
    system("cls");
    printf("\n--- Valores armazenados no vetor ---\n");
    for (i = 0; i < qtd_a_ler; i++) {
        printf("vetor[%d] = %.2f\n", i, vet[i]);
    }
}
