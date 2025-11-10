#include <stdio.h>
#include <conio.h>

void inverter_valores(int *a, int *b){
	int aux;
    aux = *a;
    *a = *b;
    *b = aux;
}
void main(){
    int a, b, aux;
    printf("informe o valor de A:");
    scanf("%d", &a);

    printf("informe o valor de B:");
    scanf("%d", &b);

    inverter_valores(&a, &b);

    printf("\nValor de A: %d", a);
    printf("\nValor de B: %d", b);
}
