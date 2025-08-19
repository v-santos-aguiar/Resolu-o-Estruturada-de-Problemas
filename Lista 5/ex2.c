#include <stdio.h>
#include <conio.h>

/*2. Escreva um programa que tenha um menu com duas op��es: 

1 - Calcular �rea Circulo
2 - Calcular Per�metro Circulo
3 - Finalizar

Ap�s ler a op��o escolhida pelo usu�rio chama a fun��o correspondente. Caso o usu�rio escolha finalizar uma mensagem dever� ser exibida.

�rea = PI * r2;  = (3.14 * raio * raio)
Per�metro = PI * 2 * r; (3.14 * 2 * raio)

O programa dever� validar a op��o escolhida pelo usu�rio e o menu ser reexibido em caso de op��o inv�lida!
*/

float area_circulo(){
	float area, r;
	printf("Informe o raio: ");
	scanf("%f", &r);
	
	area = 3.14 * (r * r);
	
	return area;

}

float perimetro_circulo(){
	float p, r;
	printf("Informe o raio: ");
	scanf("%f", &r);
	
	p = 3.14 * 2 * r;
	
	return p;
	
}


void main(){
	int op = 0;
	float ret, ret_2;
	while(op != 3){
		system("cls");
		printf("========================\n");
	    printf("  << Menu de Opcoes >>  \n");
	    printf("========================\n");
	    printf("1 - Calcular Area Circulo\n");
	    printf("2 - Calcular Per�metro Circulo\n");
	    printf("3 - Finalizar\n");
	    printf("------------------------\n");
	    
	    printf("Informe a opcao desejada: ");
	    scanf("%d", &op);
		
		switch (op) {
	            case 1:
					ret = area_circulo();
					printf("\nA Area do Circulo e: %.2f\n", ret);
	                break;
	            case 2:
	                ret_2 = perimetro_circulo();
	                printf("\nO Perimetro do Circulo e: %.2f\n", ret_2);
	                break;
	            case 3:
	                printf("\nFinalizando o programa. Ate mais!\n");
	                break;
	            default:
	                printf("\nOpcao invalida! Pressione uma tecla para tentar novamente.");
	    }   
	    printf("\n\n");
		system("pause");
	}
}
