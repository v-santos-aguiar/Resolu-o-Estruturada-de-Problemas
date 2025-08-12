#include <stdio.h>
#include <conio.h>

/*8 - Escreva um algoritmo que tenha em seu programa principal a exibi��o de um menu de op��es conforme abaixo:
1 - Calcular Idade
2 - M�dia de 3 Notas
3 - Maior N�mero
4 - Menor N�mero
5 - Sair

O usu�rio dever� escolher qual op��o deseja executar. 
Caso o usu�rio escolha uma op��o inv�lida, uma mensagem dever� ser exibida de advert�ncia e o menu dever� ser exibido novamente para que seja escolhido uma nova op��o. 
Para cada op��o escolhida, o algoritmo dever� chamar o procedimento correspondente a op��o, ou seja, teremos no m�nimo 4 procedimentos diferentes no algoritmo.
Cada procedimento dever� ter suas leituras e processamentos correspondentes ao objetivo da op��o escolhida.
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
		printf("\n<<Menu de Op��es>>");
		printf("\n1 - Calcular Idade");
		printf("\n2 - M�ia de 3 Notas");
		printf("\n3 - Maior N�mero");
		printf("\n4 - Menor N�mero");
		printf("\n 5 - Sair");
		
		printf("Informe a op��o: ");
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
				printf("\nOp��o invalida!!!");	
		}
		printf("\n\n");
		system("pause");
	}
		
}

void main(){
	menu();	
}
	

