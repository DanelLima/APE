#include<stdio.h>
#include<locale.h>
#include<string.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");
	char nome[40],matricula[40],endereco[40],curso[40],disciplina[60];
	int idade,periodo;
	
	printf("Diga seu nome: ");
	fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = '\0';
	
	printf("Diga sua matrícula: ");
	fgets(matricula, sizeof(matricula), stdin);
    matricula[strcspn(matricula, "\n")] = '\0';
	
	printf("Diga seu endereço: ");
	fgets(endereco, sizeof(endereco), stdin);
    endereco[strcspn(endereco, "\n")] = '\0';
	
	printf("Diga seu curso: ");
	fgets(curso, sizeof(curso), stdin);
    curso[strcspn(curso, "\n")] = '\0';
	
	printf("Diga sua idade: ");
	scanf("%d",&idade);
	getchar();
	
	printf("Diga seu período: ");
	scanf("%d",&periodo);
	getchar();
	
	printf("Diga suas disciplinas: ");
	fgets(disciplina, sizeof(disciplina), stdin);
    disciplina[strcspn(disciplina, "\n")] = '\0';
	
	printf("%s de %d anos de idade da matrícula %s, você está matriculado no curso %s, na(s) discplina(s) %s, no período %d e seu endereço é %s.",nome,idade,matricula,curso,disciplina,periodo,endereco);
	return 0;
}
