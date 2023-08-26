#include<stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int ano,mes,dia,idadeDia;
	
	printf("Digite quantos anos você tem: ");
	scanf("%d",&ano);
	
	printf("Digite quantos meses sobra dos anos: ");
	scanf("%d",&mes);
	
	printf("Digite quantos dias dobra dos meses: ");
	scanf("%d",&dia);
	
	idadeDia=(ano*365)+(mes*30)+dia;
	
	printf("Você tem %d dias de idade",idadeDia);
	return 0;
}
