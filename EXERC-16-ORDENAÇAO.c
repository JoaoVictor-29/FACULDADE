#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10

int main(){
	
	int vetor1[N], vetor2[N], vetor3[N];
	
	for(int i = 0; i < N; i++)
		vetor1[i] = rand() % 20;
		
	for(int i = 0; i < N; i++)
		vetor2[i] = rand() % 20;
		
	for(int i = 0; i < N; i++)
		vetor3[i] = rand() % 20;
	
	//ordenação vetor1
	for(int i = 0; i < N - 1; i++){
		for(int j = 0; j < N - i - 1; j++){
			if(vetor1[j] > vetor1[j+1]){
				int aux = vetor1[j];
				vetor1[j] = vetor1[j+1];
				vetor1[j+1] = aux;
			}
		}
	}
	for(int i = 0; i < N; i++)
		printf(" %d", vetor1[i]);
		
	printf("\n\n");
		
	//ordenação vetor2
	for(int i = 0; i < N - 1; i++){
		for(int j = 0; j < N - i - 1; j++){
			if(vetor2[j] > vetor2[j+1]){
				int aux = vetor2[j];
				vetor2[j] = vetor2[j+1];
				vetor2[j+1] = aux;
			}
		}
	}
	for(int i = 0; i < N; i++)
		printf(" %d", vetor2[i]);
		
	printf("\n\n");
		
	//ordenação vetor3
	for(int i = 0; i < N - 1; i++){
		for(int j = 0; j < N - i - 1; j++){
			if(vetor3[j] > vetor3[j+1]){
				int aux = vetor3[j];
				vetor3[j] = vetor3[j+1];
				vetor3[j+1] = aux;
			}
		}
	}
	for(int i = 0; i < N; i++)
		printf(" %d", vetor3[i]);
	
	printf("\n\n");
	
	return 0;
}
