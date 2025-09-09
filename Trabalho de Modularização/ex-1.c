#include <stdio.h>
#include <conio.h>

void soma(int a, int b){
	int  soma;
	soma = a + b;
	printf("Soma: %d", soma);
}

int subValores(int a, int b){
	int sub;
	sub = a - b;
	
	return sub;
}

int mediaValores(int a, int b){
	int media;
	media = ((a + b) / 2);
	printf("Media: %d", media);
}
	
int maiorNum(int a, int b){
	
	if(a > b){
		printf("%d eh maior", a);
		
	}
	else{
		printf("%d eh maior", b);
	}
	
	return 0;
}
	

void main(){
	
	int a, b, total;
	
	printf("A: ");
	scanf("%d", &a);
	printf("B: ");
	scanf("%d", &b);
	
	
	
	if((a % 2 == 0) && (b % 2 == 0)){
		soma(a, b);
	}
	else{
		if((a % 2 != 0) && (b % 2 != 0)){
			int resultado = subValores(a, b);
			printf("Sub %d", resultado);
		}
		else{
			if((a % 2 == 0) && (b % 2 != 0)){
				mediaValores(a, b);
			}
			else{
				if((a % 2 != 0) && (b % 2 == 0)){
					maiorNum(a, b);
					
				}
			}
		}
	}
}
	
