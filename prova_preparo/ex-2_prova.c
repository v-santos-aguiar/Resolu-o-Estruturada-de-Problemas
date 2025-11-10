#include <stdio.h>
#include <conio.h>

#define TF 5

struct moto {
	int porte;
	int cor;
	float peso;
	int potencia;
};

void carregar_motos(struct moto v[TF]){
	int i;
	for(i=0; i < TF; i++){
		
		do{
			printf("Porte (1-g, 2-m, 3-p): ");
			scanf("%d", &v[i].porte);
		} while(v[i].porte < 1 || v[i].porte > 3);
		
		do{
			printf("Cor (1-b, 2-m, 3-p): ");
			scanf("%d", &v[i].cor);
		} while(v[i].cor < 1 || v[i].cor > 3);

		printf("Peso: ");
		scanf("%f", &v[i].peso);
		
		printf("Potencia: ");
		scanf("%d", &v[i].potencia);
	}
}

void exibir_motos(struct moto v[TF]){
	int i;
	for(i=0; i < TF; i++){
		printf("\nID: %d | Porte: %d | Cor: %d | Peso: %.2f | Pot: %d", 
			   i+1, v[i].porte, v[i].cor, v[i].peso, v[i].potencia);
	}
}

// (c) Funcao que retorna o INDICE da maior potencia
int maior_potencia(struct moto v[TF]){
	int i, idx_maior = 0, pot_maior = 0;

	for(i=0; i < TF; i++){
		if(v[i].potencia > pot_maior){
			pot_maior = v[i].potencia;
			idx_maior = i;
		}
	}
	return idx_maior;
}

// (d) Funcao que conta motos Grande (1) e Marrom (2)
int cont_gm(struct moto v[TF]){
	int i, cont = 0;
	
	for(i=0; i < TF; i++){
		if(v[i].porte == 1 && v[i].cor == 2){
			cont++;
		}
	}
	return cont;
}

// (e) Procedimento que conta por porte
void cont_porte(struct moto v[TF]){
	int i, c_g = 0, c_m = 0, c_p = 0; // Contadores G, M, P
	
	for(i=0; i < TF; i++){
		switch(v[i].porte){
			case 1: c_g++; break;
			case 2: c_m++; break;
			case 3: c_p++; break;
		}
	}

	printf("\nGrandes: %d", c_g);
	printf("\nMedios: %d", c_m);
	printf("\nPequenos: %d", c_p);
}

void main(){
	struct moto motos[TF];
	// Variaveis para os resultados
	int idx_maior, total_gm;

	carregar_motos(motos);
	exibir_motos(motos);
	
	// (c)
	idx_maior = maior_potencia(motos);
	printf("\n\nMoto mais potente (ID %d): %d cc", 
		   idx_maior + 1, motos[idx_maior].potencia);
	
	// (d)
	total_gm = cont_gm(motos);
	printf("\nTotal Grande/Marrom: %d", total_gm);
	
	// (e)
	cont_porte(motos);
}
