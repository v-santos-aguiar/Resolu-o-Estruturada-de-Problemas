#include <stdio.h>
#include <conio.h>

/*8 - Escreva um algoritmo que tenha em seu programa principal a exibição de um menu de opções conforme abaixo:
1 - Calcular Idade
2 - Média de 3 Notas
3 - Maior Número
4 - Menor Número
5 - Sair

O usuário deverá escolher qual opção deseja executar. 
Caso o usuário escolha uma opção inválida, uma mensagem deverá ser exibida de advertência e o menu deverá ser exibido novamente para que seja escolhido uma nova opção. 
Para cada opção escolhida, o algoritmo deverá chamar o procedimento correspondente a opção, ou seja, teremos no mínimo 4 procedimentos diferentes no algoritmo.
Cada procedimento deverá ter suas leituras e processamentos correspondentes ao objetivo da opção escolhida.
*/

// --- Procedimento para Calcular Idade ---
void calcular_idade() {
    int aa, an, idade;
    system("cls");
    printf("<< 1 - Calcular a Idade >>\n\n");
    printf("Informe o ano atual: ");
    scanf("%d", &aa);
    printf("Informe o ano de nascimento: ");
    scanf("%d", &an);
    idade = aa - an;
    printf("\nSua idade e: %d anos\n", idade);
}

// --- Procedimento para Calcular a Média de 3 Notas ---
void media_notas() {
    float n1, n2, n3, media;
    system("cls");
    printf("<< 2 - Media de 3 Notas >>\n\n");
    printf("Informe a primeira nota: ");
    scanf("%f", &n1);
    printf("Informe a segunda nota: ");
    scanf("%f", &n2);
    printf("Informe a terceira nota: ");
    scanf("%f", &n3);
    media = (n1 + n2 + n3) / 3;
    printf("\nA media das notas e: %.2f\n", media);
}

// --- Procedimento para Encontrar o Maior Número entre 3 ---
void maior_numero() {
    int n1, n2, n3, maior;
    system("cls");
    printf("<< 3 - Maior Numero >>\n\n");
    printf("Informe o primeiro numero: ");
    scanf("%d", &n1);
    printf("Informe o segundo numero: ");
    scanf("%d", &n2);
    printf("Informe o terceiro numero: ");
    scanf("%d", &n3);

    maior = n1;
    if (n2 > maior) {
        maior = n2;
    }
    if (n3 > maior) {
        maior = n3;
    }

    printf("\nO maior numero informado e: %d\n", maior);
}

// --- Procedimento para Encontrar o Menor Número entre 3 ---
void menor_numero() {
    int n1, n2, n3, menor;
    system("cls");
    printf("<< 4 - Menor Numero >>\n\n");
    printf("Informe o primeiro numero: ");
    scanf("%d", &n1);
    printf("Informe o segundo numero: ");
    scanf("%d", &n2);
    printf("Informe o terceiro numero: ");
    scanf("%d", &n3);

    menor = n1;
    if (n2 < menor) {
        menor = n2;
    }
    if (n3 < menor) {
        menor = n3;
    }

    printf("\nO menor numero informado e: %d\n", menor);
}

// --- Procedimento do Menu Principal ---
void menu(){
	int op = 0;
	while(op != 5){
		system("cls");
		printf("========================\n");
        printf("  << Menu de Opcoes >>  \n");
        printf("========================\n");
        printf("1 - Calcular Idade\n");
        printf("2 - Media de 3 Notas\n");
        printf("3 - Maior Numero\n");
        printf("4 - Menor Numero\n");
        printf("5 - Sair\n");
        printf("------------------------\n");

        printf("Informe a opcao desejada: ");
        scanf("%d", &op);
        
		switch (op) {
            case 1:
                calcular_idade();
                break;
            case 2:
                media_notas();
                break;
            case 3:
                maior_numero();
                break;
            case 4:
                menor_numero();
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

void main(){
	menu();	
}
	
