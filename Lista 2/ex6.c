#include <stdio.h>
#include <conio.h>


/*6 - Escreva um procedimento que lei 3 números e ao final subtraia o primeiro do segundo e dívida o resultado pelo terceiro. Fazer a chamada no programa principal.*/

void ler_numeros(){
	float n1, n2, n3, res;
	printf("Informe o primeiro numero: ");
	scanf("%f", &n1);
	
	printf("Informe o segundo numero: ");
	scanf("%f", &n2);
	
	printf("Informe o terceiro numero: ");
	scanf("%f", &n3);
	
	res = (n2 - n1) /n3;
	
	printf("Resultado: %0.2f", res);

}

void main(){
	ler_numeros();
}
