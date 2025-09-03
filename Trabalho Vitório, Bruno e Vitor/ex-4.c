#include <stdio.h>
#include <conio.h>

/*4.	POR VALOR - Uma empresa deseja especificar um programa para gerar sua folha de pagamentos. Seu programa deve:

a.	Fazer uma função que leia e retorne o salário_bruto;
b.	Fazer uma função que leia e retorne o total de horas extras;
c.	Fazer uma função que leia e retorne os descontos;
d.	Fazer uma função que receba o total de horas extras e retorne os valores correspondes a essas horas sabendo que cada hora 
	extra custa R$ 20,00;
e.	Fazer uma função que calcule e retorne o salário bruto total passando por parâmetro as informações necessárias para isso;
f.	Fazer um procedimento que calcule e exiba o salário líquido do funcionário passando por parâmetros as informações necessárias.

Esta empresa possui 5 funcionários, e todos precisaram ter seus salários calculados.
*/

float salario_bruto(){
	float salario_b;
    printf("Digite o salario bruto: R$ ");
    scanf("%f", &salario_b);
    return salario_b;
}

int total_horas_extras(){
	int total_he ;
	printf("Digite o total de horas extras: ");
    scanf("%d", &total_he );
    return total_he ;
}

float ler_descontos() {
    float total_descontos;
    printf("Digite o valor total de descontos (INSS, IR, etc.): R$ ");
    scanf("%f", &total_descontos);
    return total_descontos;
}

float calcular_valor_horas_extras(int total_horas){
	float valor_total;
	valor_total = total_horas * 20;
    return valor_total;
}

float calcular_salario_bruto_total(float salario_b, float valor_total) {
	float sb_final;
	sb_final = salario_b + valor_total;
    return sb_final;
}

void salario_liquido(float sb_final, float total_descontos) {
	float s_liquido;
    s_liquido = sb_final - total_descontos;
    printf("\n----------------------------------\n");
    printf(" (+) Salario Bruto Total: R$ %.2f\n", sb_final);
    printf(" (-) Descontos..........: R$ %.2f\n", total_descontos);
    printf(" (=) SALARIO LIQUIDO....: R$ %.2f\n", s_liquido);
    printf("----------------------------------\n");
}

void main(){
	int i;
	for (i = 1; i <= 5; i++) {
        printf("\n======= DADOS DO FUNCIONARIO %d =======\n", i);

        float salario_b, total_descontos, valor_pago_he, sb_final;
        int total_he;
  
        // Chamando as funções na ordem correta
        salario_b = salario_bruto();
        total_he = total_horas_extras();
        total_descontos = ler_descontos();

        // Usando os valores retornados como parâmetros para outras funções
        valor_pago_he = calcular_valor_horas_extras(total_he);
        sb_final = calcular_salario_bruto_total(salario_b, valor_pago_he);

        // Chamando o procedimento final para exibir o resultado
        salario_liquido(sb_final, total_descontos);
    }

    printf("\nCalculo da folha de pagamento final para os 5 funcionarios.\n");
}
