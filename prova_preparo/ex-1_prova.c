#include <stdio.h>
#include <conio.h>

#define TF 5

struct animal {
	char nome[50];
	char especie[50];
	float peso;
	int idade;
	int sexo;
};

void carregar(struct animal v[TF]){
	int i;
	for(i=0; i < TF; i++){
		printf("Animal %d:\n", i+1);
		
		printf("Nome: ");
		fflush(stdin);
		fgets(v[i].nome, 50, stdin);
		
		printf("Especie: ");
		fflush(stdin);
		fgets(v[i].especie, 50, stdin);

		printf("Peso: ");
		scanf("%f", &v[i].peso);
		
		printf("Idade: ");
		scanf("%d", &v[i].idade);
		
		do{
			printf("Sexo (1-M, 2-F): ");
			scanf("%d", &v[i].sexo);
		} while(v[i].sexo != 1 && v[i].sexo != 2);
	}
}

void exibir(struct animal v[TF]){
	int i;
	printf("\n--- Animais ---");
	for(i=0; i<TF; i++){
		printf("\nNome %s: ", v[i].nome);
		printf("Especie: %s", v[i].especie);
		printf("P:%.2f | I:%d | S:%d", v[i].peso, v[i].idade, v[i].sexo);
	}
}

// (c) Funcao media do peso
float media_peso(struct animal v[TF]){
	int i;
	float soma = 0;
	for(i=0; i < TF; i++){
		soma += v[i].peso;
	}
	return soma / TF;
}

// (d) Machos acima da media
void acima_media(struct animal v[TF], float media){
	int i;
	printf("\n\n--- Machos Acima (%.2fkg) ---", media);
	for(i=0; i < TF; i++){
		if(v[i].sexo == 1 && v[i].peso > media){
			printf("\nNome: %s", v[i].nome);
			printf("Peso: %.2f", v[i].peso);
		}
	}
}

// (e) Mais velho e mais novo
void extremos_idade(struct animal v[TF]){
	int i, idx_velho = 0, idx_novo = 0;
	
	for(i=1; i < TF; i++){
		if(v[i].idade > v[idx_velho].idade){
			idx_velho = i;
		}
		if(v[i].idade < v[idx_novo].idade){
			idx_novo = i;
		}
	}
	
	printf("\n\n--- Extremos Idade ---");
	printf("\nMais Velho: %s", v[idx_velho].nome);
	printf("Peso: %.2f", v[idx_velho].peso);
	
	printf("\nMais Novo: %s", v[idx_novo].nome);
	printf("Peso: %.2f", v[idx_novo].peso);
}

void main(){
	struct animal zoo[TF];
	float media_p; // Para armazenar a media do peso
	
	carregar(zoo);
	exibir(zoo);
	
	// (c)
	media_p = media_peso(zoo);
	printf("\n\nMedia Peso: %.2f kg", media_p);
	
	// (d)
	acima_media(zoo, media_p);
	
	// (e)
	extremos_idade(zoo);
}
