#include <stdio.h>
#include <conio.h>
#include <string.h>

void main(){
	char nome[1000], texto[1000];
	int i, tam_str;
	printf("Informe um texto: ");
	fflush(stdin); //limpa a memoria
	gets(nome); //leitura de strings
	printf("\nTexto informado: %s", nome);
	tam_str = strlen(nome);
	printf("\nQtde de caracteres: %d", tam_str);
	//texto = nome;
	strcpy(texto, nome);
	printf("\nTexto copiado: %s", texto);
	
	strcat(texto, nome);
	printf("\nTexto concatenado: %s", texto);
	
	//if (nome == "Alisson"){
	if (strcmp(nome, "Alisson") == 0){
		printf("\n\nEh igual");
	}
	else{
		printf("\n\nNao eh igual");
	}
	
	printf("\n\nVet[0] = %c", nome[0]);
	printf("\n\nVet[1] = %c", nome[1]);
	printf("\n\nVet[2] = %c", nome[2]);
	
	printf("\n\n");
	tam_str = strlen(nome);
	for (i=0; i<tam_str; i++){
		printf("%c", nome[i]);	
	}
}

