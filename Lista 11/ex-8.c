#include <stdio.h>
#include <conio.h>
#include <string.h>

/*8.	Escreva um procedimento que receba um número inteiro e retorne o mês correspondente ao número. 
Por exemplo, 2 corresponde à "fevereiro". O procedimento deve retornar uma mensagem de erro caso o número recebido não faça sentido. 
Gere também um algoritmo que leia um valor e chame o procedimento criado.*/

void num_mes(int num) {
    switch (num) {
        case 1:
            printf("Janeiro\n");
            break;
        case 2:
            printf("Fevereiro\n");
            break;
        case 3:
            printf("Março\n");
            break;
        case 4:
            printf("Abril\n");
            break;
        case 5:
            printf("Maio\n");
            break;
        case 6:
            printf("Junho\n");
            break;
        case 7:
            printf("Julho\n");
            break;
        case 8:
            printf("Agosto\n");
            break;
        case 9:
            printf("Setembro\n");
            break;
        case 10:
            printf("Outubro\n");
            break;
        case 11:
            printf("Novembro\n");
            break;
        case 12:
            printf("Dezembro\n");
            break;
        default:
            printf("Erro: número do mês inválido.\n");
            break;
    }
}


void main(){
	int num;
    printf("Informe um numero de 1 a 12 do mes correspondente: ");
    scanf("%d", &num);

    num_mes(num);
}

