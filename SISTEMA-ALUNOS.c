#include <stdio.h>
#include <string.h>

typedef struct{
	char nome[100];
	int matricula;
	char nome_curso[100];
}aluno;

int main(){
	
	aluno cadastro[100];
	int contA = 0;
	char continuar;
	
	do{
		printf("Digite o nome do aluno, o numero de matricula e o nome do curso do aluno (Digite EXIT pra sair): \n");
		scanf(" %[^\n]", cadastro[contA]. nome);
		if(strcmp(cadastro[contA].nome, "exit") == 0)
			break;
			
		scanf("%d", &cadastro[contA].matricula);
		getchar();	
		scanf(" %[^\n]", cadastro[contA].nome_curso);
		contA++;
		
		printf("Deseja cadastrar outro aluno(s/n): \n");
		scanf(" %c", &continuar);
		

	}while (continuar == 's');
	
	/*printf("ALUNOS CADASTRADOS: \n\n");
	for(int i = 0; i < contA; i++){
		printf("Nome do aluno: %s\n", cadastro[i].nome);
		printf("Numero de matrícula: %d\n", cadastro[i].matricula);
		printf("Nome do curso: %s\n", cadastro[i].nome_curso);
		printf("\n\n");
	}*/
	
	int numM; 
	float nota;
	int contN = 0;
	char notaLancada;
	float media[contN];
	
	do{
		
		printf("Digite um numero de matricula se deseja encontrar algum aluno: \n");
		scanf("%d", &numM);
		if(numM < 0)
			break;
			
		for(int i = 0; i < contA; i++)
			if(numM == cadastro[i].matricula){
				printf("Nome do aluno: %s\n", cadastro[i].nome);
		        printf("Numero de matrícula: %d\n", cadastro[i].matricula);
		        printf("Nome do curso: %s\n", cadastro[i].nome_curso);
		        printf("\n\n");
			}
		
		printf("Deseja lançar nota pra esse aluno (s/n): \n");
		scanf(" %c", &notaLancada);
		if(notaLancada == 'n')
			break;
		
		printf("Digite o valor da nota: \n");
		scanf("%f", &nota);
		contN++;
		
		media[contN] = nota 
		
	}while (1);
	
	
	return 0;
}
