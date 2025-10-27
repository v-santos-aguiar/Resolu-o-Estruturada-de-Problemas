#include <stdio.h>
#include <conio.h>

/*5.	Um apicultor necessita armazenar os dados de 7 colmeias, que são: código, região, estado, qualificação (1-forte, 2-médio, 3-fraco), número de abelha. 
Favor um procedimento para carregar e outro para exibir o vetor de registros.*/

#define TF 7

struct colmeia {
	int codigo;
	char regiao[50];
	char uf[3]; 
	int qualif; //1-forte, 2-médio, 3-fraco
	int qtde;
};

void carregar_reg(struct colmeia reg_colmeia[TF]){
	int i;
	printf("<<Carregar vetor de Registro>>\n");
	for(i=0; i < TF;i++){
		printf("\nRegistro: %d\n", i+1);
		
		printf("Informe o codigo da colmeia: ");
		scanf("%d", &reg_colmeia[i].codigo);
		
		printf("Informe a regiao: ");
		fflush(stdin);
		gets(reg_colmeia[i].regiao);
		
		printf("Informe a UF: ");
		fflush(stdin);
		gets(reg_colmeia[i].uf);
		
		do{
			printf("Informe a qualificacao: (1-F 2-M 3-F) ");
			scanf("%d", &reg_colmeia[i].qualif);
		}while(reg_colmeia[i].qualif!=1 && reg_colmeia[i].qualif!=2 && reg_colmeia[i].qualif!=3);
		
		printf("Informe a Qtde: ");
		scanf("%d", &reg_colmeia[i].qtde);	
	}
}

void exibir_reg(struct colmeia reg_colmeia[TF]){
	int i;
	printf("\n<<Exibir Registros de Colmeias>>");
	for(i=0; i < TF; i++){
		printf("\n\nRegistro: %d", i+1);
		printf("\nCodigo: %d", reg_colmeia[i].codigo);
		printf("\nRegiao: %s", reg_colmeia[i].regiao);
		printf("\nUF: %s", reg_colmeia[i].uf);
		printf("\nQualificacao (1-F 2-M 3-F): %d", reg_colmeia[i].qualif);
		printf("\nQtde Abelhas: %d", reg_colmeia[i].qtde);
	}
}

void main(){
	struct colmeia reg_colmeia[TF];
	carregar_reg(reg_colmeia);
	exibir_reg(reg_colmeia);
}
