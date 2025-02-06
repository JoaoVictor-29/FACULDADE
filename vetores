#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	
	int x, y, soma;
	
	printf("Digite um número inteiro: \n");
	scanf("%d", &x);
	printf("Digite outro número inteiro: \n");
	scanf("%d", &y);
	
	soma = x + y + 1;
	
	srand(time(NULL));
	
	int v1[x], v2[y];
	
	//alimentado o primeiro vetor v1[x]
	for(int i = 0; i < x; i++)
		v1[i] = rand() % soma;
		
	printf("Primeiro vetor: ");
	for(int i = 0; i < x; i++)
		printf(" %d", v1[i]);
	
	//alimentando o segundo vetor
	for(int i = 0; i < y; i++)
		v2[i] = rand() % soma;
		
	printf("\n\nSegundo vetor: ");
	for(int i = 0; i < y; i++)
		printf(" %d", v2[i]);
		
	printf("\n\n");	
	
	//Todos os números exclusivos do primeiro vetor
	printf("Todos os números exclusivos do primeiro vetor: ");
	for(int i = 0; i < x; i++){
		int exclusivo1 = 1;
		for(int j = 0; j < y; j++){
			if(v1[i] == v2[j]){
				exclusivo1 = 0;
			}
		}
		if(exclusivo1){
			printf(" %d", v1[i]);
		}
	}
	
	printf("\n\n");
	
	
	//Todos os números exclusivos do segundo vetor
	printf("Todos os números exclusivos do segundo vetor: ");
	for(int i = 0; i < y; i++){
		int exclusivo2 = 1;
		for(int j = 0; j < x; j++){
			if(v2[i] == v1[j]){
				exclusivo2 = 0;
			}
		}
		if(exclusivo2){
			printf(" %d", v2[i]);
		}
	}
	
	printf("\n\n");
	
	//Os números existentes nos dois vetores
	printf("Os números existentes nos dois vetores: ");
	for(int i = 0; i < x; i++){
		int aux = 0;
		for(int j = 0; j < y; j++){
			if(v1[i] == v2[j]){
				aux = 1;
				break;
			}
		}
		if(aux){
			printf(" %d", v1[i]);
		}		
	}
	
	return 0;
}
