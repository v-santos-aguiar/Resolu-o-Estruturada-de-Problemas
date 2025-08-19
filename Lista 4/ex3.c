#include <stdio.h>
#include <conio.h>

/*3 - Escreva um algoritmo que tenha em seu programa principal a exibi��o de um menu de op��es conforme abaixo:

1 - Calcular Idade
2 - M�dia de 4 Notas
3 - Multiplica��o de 2 N�mero
4 - Divis�o de 2 N�mero
5 - Sair

O usu�rio dever� escolher qual op��o deseja executar.

Caso o usu�rio escolha uma op��o inv�lida, uma mensagem dever� ser exibida de advert�ncia e o menu dever� ser exibido novamente para que seja escolhido uma nova op��o. 
Para cada op��o escolhida, o algoritmo dever� chamar a fun��o correspondente a op��o, ou seja, teremos no m�nimo 4 fun��es diferentes no algoritmo.

Cada fun��o dever� ter suas leituras e processamentos correspondentes ao objetivo da op��o escolhida. Retornar e exibir o resultado no programa principal.
*/

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

// --- Fun��o para Calcular a M�dia de 4 Notas ---
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

// --- Fun��o para Encontrar o Maior N�mero entre 3 ---
int multi_2_numeros() {
    int n1, n2, n3, multi;
    system("cls");
    printf("<< 3 - Multiplica��o de 2 N�mero >>\n\n");
    printf("Informe o primeiro numero: ");
    scanf("%d", &n1);
    printf("Informe o segundo numero: ");
    scanf("%d", &n2);
	multi = n1 * n2;
    return multi;
}

// --- Fun��o para Encontrar o Menor N�mero entre 3 ---
int div_2_numeros() {
    int n1, n2, n3, div;
    system("cls");
    printf("<< 4 - Divis�o de 2 N�mero >>\n\n");
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
		

