#include<stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int ano,mes,dia,idadeDia;
	
	printf("Digite quantos anos voc� tem: ");
	scanf("%d",&ano);
	
	printf("Digite quantos meses sobra dos anos: ");
	scanf("%d",&mes);
	
	printf("Digite quantos dias dobra dos meses: ");
	scanf("%d",&dia);
	
	idadeDia=(ano*365)+(mes*30)+dia;
	
	printf("Voc� tem %d dias de idade",idadeDia);
	return 0;
}
