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

void calcular_idade(){
	int aa, an, idade;
	system("cls");
	printf("<<Calcular a Idade>>\n\n");
	printf("Informe o ano atual: ");
	scanf("%d", &aa);
	printf("Informe o ano de nascimento: ");
	scanf("%d", &an);
	idade = aa - an;
	printf("Idade: %d", idade);	
}

void menu(){
	int op = 1;
	while(op != 5){
		system("cls");
		printf("\n<<Menu de Opções>>");
		printf("\n1 - Calcular Idade");
		printf("\n2 - Méia de 3 Notas");
		printf("\n3 - Maior Número");
		printf("\n4 - Menor Número");
		printf("\n 5 - Sair");
		
		printf("Informe a opção: ");
		scanf("%d", &op);
		switch (op){
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
				printf("\nFim!!!");
				break;
			default:
				printf("\nOpção invalida!!!");	
		}
		printf("\n\n");
		system("pause");
	}
		
}

void main(){
	menu();	
}
	

