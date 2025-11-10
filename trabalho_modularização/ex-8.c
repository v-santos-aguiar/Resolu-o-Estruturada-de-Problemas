#include <conio.h>
#include <stdio.h>

void conta(float larg, float compri, float *result){
    *result = larg * compri;
}

void main(){
    float larg, compri, result;

    printf("Informe a Largura do quadrado/retangulo: ");
    scanf("%f", &larg);

    printf("Informe o Comprimento do quadrado/retangulo: ");
    scanf("%f", &compri);
    
    conta(larg, compri, &result);
    
    printf("\n Area do seu quadrado/retangulo: %.2f", result);
}

