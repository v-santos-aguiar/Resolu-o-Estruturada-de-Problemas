#include <stdio.h>
#include <conio.h>

/*4 - Escreva uma fun��o que retorne a idade de uma pessoa, para calcular a idade ser� necess�rio conhecer o ano de nascimento e o ano atual. 
Retornar e exibir no programa principal.*/

// --- Fun��o para Calcular Idade ---
int calcular_idade() {
    int aa, an, idade;
    system("cls");
    printf("<< 1 - Calcular a Idade >>\n\n");
    printf("Informe o ano atual: ");
    scanf("%d", &aa);
    printf("Informe o ano de nascimento: ");
    scanf("%d", &an);
    idade = aa - an;
    return idade;
}

void main(){
	int ret;
	ret = calcular_idade();
	printf("\nSua idade e: %d anos\n", ret);
}
