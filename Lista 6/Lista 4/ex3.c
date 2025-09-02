#include <stdio.h>
#include <conio.h>

/*3 - Escreva um algoritmo que tenha em seu programa principal a exibição de um menu de opções conforme abaixo:

1 - Calcular Idade
2 - Média de 4 Notas
3 - Multiplicação de 2 Número
4 - Divisão de 2 Número
5 - Sair

O usuário deverá escolher qual opção deseja executar.

Caso o usuário escolha uma opção inválida, uma mensagem deverá ser exibida de advertência e o menu deverá ser exibido novamente para que seja escolhido uma nova opção. 
Para cada opção escolhida, o algoritmo deverá chamar a função correspondente a opção, ou seja, teremos no mínimo 4 funções diferentes no algoritmo.

Cada função deverá ter suas leituras e processamentos correspondentes ao objetivo da opção escolhida. Retornar e exibir o resultado no programa principal.
*/

// --- Função para Calcular Idade ---
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

// --- Função para Calcular a Média de 4 Notas ---
float media_notas() {
    float n1, n2, n3, n4, media;
    system("cls");
    printf("<< 2 - Media de 3 Notas >>\n\n");
    printf("Informe a primeira nota: ");
    scanf("%f", &n1);
    printf("Informe a segunda nota: ");
    scanf("%f", &n2);
    printf("Informe a terceira nota: ");
    scanf("%f", &n3);
    printf("Informe a quarta nota: ");
    scanf("%f", &n4);
    media = (n1 + n2 + n3 + n4) / 4;
    return media;
}

// --- Função para Encontrar o Maior Número entre 3 ---
int multi_2_numeros() {
    int n1, n2, n3, multi;
    system("cls");
    printf("<< 3 - Multiplicação de 2 Número >>\n\n");
    printf("Informe o primeiro numero: ");
    scanf("%d", &n1);
    printf("Informe o segundo numero: ");
    scanf("%d", &n2);
	multi = n1 * n2;
    return multi;
}

// --- Função para Encontrar o Menor Número entre 3 ---
int div_2_numeros() {
    int n1, n2, n3, div;
    system("cls");
    printf("<< 4 - Divisão de 2 Número >>\n\n");
    printf("Informe o primeiro numero: ");
    scanf("%d", &n1);
    printf("Informe o segundo numero: ");
    scanf("%d", &n2);
	div = n1 / n2;
    return div;
}

void main(){
	int op = 0, ret;
	float ret_f;
	while(op != 5){
		system("cls");
		printf("========================\n");
        printf("  << Menu de Opcoes >>  \n");
        printf("========================\n");
        printf("1 - Calcular Idade\n");
        printf("2 - Media de 4 Notas\n");
        printf("3 - Multiplicacao de 2 Numero\n");
        printf("4 - Divisao de 2 Numero\n");
        printf("5 - Sair\n");
        printf("------------------------\n");

        printf("Informe a opcao desejada: ");
        scanf("%d", &op);
        
		switch (op) {
            case 1:
				ret = calcular_idade();
				printf("\nSua idade e: %d anos\n", ret);
                break;
            case 2:
                ret_f = media_notas();
                printf("\nA media das notas e: %.2f\n", ret_f);
                break;
            case 3:
                ret = multi_2_numeros();
                printf("\nO maior numero informado e: %d\n", ret);
                break;
            case 4:
               	ret = div_2_numeros();
               	printf("\nO menor numero informado e: %d\n", ret);
                break;
            case 5:
                printf("\nEncerrando o programa. Ate mais!\n");
                break;
            default:
                printf("\nOpcao invalida! Pressione uma tecla para tentar novamente.");
        }
        
		printf("\n\n");
		system("pause");
	}
}
		

