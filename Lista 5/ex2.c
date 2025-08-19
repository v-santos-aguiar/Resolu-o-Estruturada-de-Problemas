#include <stdio.h>
#include <conio.h>

/*2. Escreva um programa que tenha um menu com duas opções: 

1 - Calcular Área Circulo
2 - Calcular Perímetro Circulo
3 - Finalizar

Após ler a opção escolhida pelo usuário chama a função correspondente. Caso o usuário escolha finalizar uma mensagem deverá ser exibida.

Área = PI * r2;  = (3.14 * raio * raio)
Perímetro = PI * 2 * r; (3.14 * 2 * raio)

O programa deverá validar a opção escolhida pelo usuário e o menu ser reexibido em caso de opção inválida!
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
	    printf("2 - Calcular Perímetro Circulo\n");
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
