#include <stdio.h>
#include <conio.h>
#include <string.h>

/*9.	Escreva um procedimento que receba um n�mero inteiro e o retorne na forma extensa. Por exemplo, para 1 a sa�da desejada � "Um". 
O Procedimentos deve ser capaz de gerar o extenso dos n�meros de 0 at� 10, inclusive. 
Caso um n�mero n�o compat�vel seja recebido o procedimento deve retornar uma mensagem de erro. 
Crie tamb�m um algoritmo que leia um valor inteiro e chame o procedimento criado acima para a impress�o do n�mero extenso.*/

void num_extenso(int num) {
    switch (num) {
        case 0:
            printf("Zero\n");
            break;
        case 1:
            printf("Um\n");
            break;
        case 2:
            printf("Dois\n");
            break;
        case 3:
            printf("Tr�s\n");
            break;
        case 4:
            printf("Quatro\n");
            break;
        case 5:
            printf("Cinco\n");
            break;
        case 6:
            printf("Seis\n");
            break;
        case 7:
            printf("Sete\n");
            break;
        case 8:
            printf("Oito\n");
            break;
        case 9:
            printf("Nove\n");
            break;
        case 10:
            printf("Dez\n");
            break;
        default:
            printf("Erro: Numero fora do intervalo de 0 a 10.\n");
            break;
    }
}

void main() {
    int num;
    printf("Digite um numero inteiro entre 0 e 10: ");
    scanf("%d", &num);

    num_extenso(num);
}
