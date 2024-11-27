#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TS 0
#define PD 1
#define PP 2

int main(){
	
	srand(time(NULL));
	
	int jogada = 1, User = 0 , Pc = 0, jogU, jogP;
	
	do{
	printf("===============JOKENPÔ===============\n");
	printf("\n");
	printf("Jogadas: %d\t\t User: %d\n", jogada, User);
	printf("\t\t\t Pc: %d\n", Pc);
	
	printf("[0] - TESOURA\n");
	printf("[1] - PAPEL\n");
	printf("[2] - PEDRA\n\n");
	
	//do{
		
		jogP = rand() % 3;
		printf("ESCOLHA: ");
		scanf("%d", &jogU);
		
		if(jogU != 0 && jogU != 1 && jogU != 2){
			printf("NÚMERO INVALIDO");
		}
		
		switch(jogU){
			case 0:
				printf("\tTESOURA x ");
				break;
			
			case 1:
				printf("\tPAPEL x ");
				break;
				
			case 2:
				printf("\tPEDRA x ");
				break;
			}
			
		switch(jogP){
			case 0:
				printf("TESOURA\n");
				break;
			
			case 1:
				printf("PAPEL\n");
				break;
				
			case 2:
				printf("PEDRA\n");
				break;
			}
			
			if(jogU == 2 && jogP == 1){
					printf("\tPC + 1\n");
					Pc++;
			}else if(jogU == 2 && jogP == 2){
					printf("\tEMPATE\n");
			}else if(jogU == 2 && jogP == 0){
					printf("\tUSER + 1\n");
					User++;
				}
				
			if(jogU == 0 && jogP == 1){
					printf("\tUSER + 1\n");
					User++;
			}else if(jogU == 0 && jogP == 0){
					printf("\tEMPATE\n");
			}else if(jogU == 0 && jogP == 2){
					printf("\tPC + 1\n");
					Pc++;
				}
			
			if(jogU == 1 && jogP == 0){
					printf("\tPC + 1\n");
					Pc++;
			}else if(jogU == 1 && jogP == 1){
					printf("\tEMPATE\n");
			}else if(jogU == 1 && jogP == 2){
					printf("\tUSER + 1\n");
					User++;
				}
		jogada++;
		
	if(User == 5 || Pc == 5){
		break;
	   }
	   getchar();
	   getchar();
	   system("clear");
	   
	 }while(User < 6 || Pc < 6);
	 //system("clear");
   
	return 0;
}
