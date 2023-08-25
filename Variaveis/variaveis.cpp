#include<stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");
	char nome[20],matricula[20],endereco[20],curso[20],disciplina[20];
	int idade,periodo;
	
	printf("Diga seu nome: ");
	scanf("%s",&nome);
	
	printf("Diga sua matrícula: ");
	scanf("%s",&matricula);
	
	printf("Diga seu endereço: ");
	scanf("%s",&endereco);
	
	printf("Diga seu curso: ");
	scanf("%s",&curso);
	
	printf("Diga sua idade: ");
	scanf("%d",&idade);
	
	printf("Diga seu período: ");
	scanf("%d",&periodo);
	
	printf("Diga suas disciplinas: ");
	scanf("%s",&disciplina);
	
	printf("%s de %d anos de idade da matrícula %s, você está matriculado no curso %s, na(s) discplina(s) %s, no período %d e seu endereço é %s.",nome,idade,matricula,curso,disciplina,periodo,endereco);
	return 0;
}
