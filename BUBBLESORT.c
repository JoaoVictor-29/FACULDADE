#include <stdio.h>

int main(){
	
	int array[] = {10, 4, 2, 0 ,1, 23, 7, 9, 6, 8}, n = 10;
	
	for(int i = 0; i < n; i++)
		printf(" %02d", array[i]);
		
	printf("\n\n");
	
	for(int i = 0; i < n - 1; i++){
		for(int j = 0; j < n - i - 1;j++){
			if(array[j] > array[j+1]){
				int aux = array[j];
				array[j] = array[j+1];
				array[j+1] = aux;
			}
		}
	}
	
	for(int i = 0; i < n; i++)
		printf(" %02d", array[i]);
		
	
	return 0;
}
