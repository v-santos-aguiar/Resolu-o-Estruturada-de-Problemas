#include <stdio.h>
#include <conio.h>

#define TL 3
#define TC 3

void ler_mat(int mat[TL][TC]) {
    int l, c;
    for (l = 0; l < TL; l++) {
        for (c = 0; c < TC; c++) {
            printf("Matriz[%d][%d]: ", l, c);
            scanf("%d", &mat[l][c]);
        }
    }
}

void exibir_mat(int mat[TL][TC]) {
    int l, c;
    for (l = 0; l < TL; l++) {
        for (c = 0; c < TC; c++) {
            printf("%4d |", mat[l][c]);
        }
        printf("\n");
    }
}

void calcular_soma(int mat[TL][TC], int *somaTotal) {
    int l, c;
    *somaTotal = 0;

    for (l = 0; l < TL; l++) {
        for (c = 0; c < TC; c++) {
            *somaTotal += mat[l][c];
        }
    }
}

int encontrar_maior(int mat[TL][TC]) {
    int l, c, maior = mat[0][0];
    for (l = 0; l < TL; l++) {
        for (c = 0; c < TC; c++) {
            if (mat[l][c] > maior)
                maior = mat[l][c];
        }
    }
    return maior;
}

int encontrar_menor(int mat[TL][TC]) {
    int l, c, menor = mat[0][0];
    for (l = 0; l < TL; l++) {
        for (c = 0; c < TC; c++) {
            if (mat[l][c] < menor)
                menor = mat[l][c];
        }
    }
    return menor;
}

float calcular_media(int soma) {
    return (float)soma / (TL * TC);
}

void main() {
    int mat[TL][TC], soma, maior_elemento, menor_elemento;
    float media;
    
    ler_mat(mat);
    exibir_mat(mat);

    calcular_soma(mat, &soma);
    maior_elemento = encontrar_maior(mat);
    menor_elemento = encontrar_menor(mat);
    media = calcular_media(soma);

    printf("\nSoma total: %d", soma);
    printf("\nMaior elemento: %d", maior_elemento);
    printf("\nMenor elemento: %d", menor_elemento);
    printf("\nMédia dos elementos: %.2f", media);
}

