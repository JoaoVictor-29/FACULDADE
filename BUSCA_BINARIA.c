#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int x, ind_inicio, ind_final, ind_meio, tam;
	
	printf("Digite o tamanho do vetor: \n");
	scanf("%d", &tam);
	
	int array[tam];
	for(int i = 0; i < tam; i++)
		array[i] = rand() % tam;
		
	for(int i = 0; i < tam; i++)
		printf(" %d", array[i]);
		
	printf("\n\n");
	
	//antes de fazer a busca binaria é necessario ordenar o array
	for(int i = 0; i < tam - 1; i++){
		for(int j = 0; j < tam - i - 1; j++){
			if(array[j] > array[j+1]){
				int aux = array[j];
				array[j] = array[j+1];
				array[j+1] = aux;
			}
		}
	}
	
	for(int i = 0; i < tam; i++)
		printf(" %d", array[i]);
		
	printf("\n\n");
		
	printf("Digite o numero que queira busca:\n");
	scanf("%d", &x);
	
	ind_inicio = 0;
	ind_final = tam - 1;
	
	//AGORA COMECA A BUSCA BINARIA;
	int encontrado = 0;
	while(ind_inicio <= ind_final){
		ind_meio = (ind_inicio + ind_final)/2;
		//VERIFICA SE X ESTÁ PRESENTE NA METADE
		if(array[ind_meio] == x){
			printf("Elemento encontrado no indice: %d\n", ind_meio);
			encontrado = 1;
			break;
		}
		if(array[ind_meio] < x){
			ind_inicio = ind_meio + 1;
		}else{
			ind_final = ind_meio - 1;
		}
	}
	
	if(!encontrado)
		printf("Elemento não encontrado\n");
	

	
	
	return 0;
}
