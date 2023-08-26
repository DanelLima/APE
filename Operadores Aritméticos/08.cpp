#include<stdio.h>
#include<locale.h>

int main()
{
	//o locale troca o "." pelo "," na casa decimal
	setlocale(LC_ALL,"Portuguese");
	
	float salario,por100,reajuste;
	
	printf("Digite salário em reais: ");
	scanf("%f",&salario);
	
	printf("Digite a porcetagem de reajuste: ");
	scanf("%f",&por100);
	
	reajuste=salario*((por100/100)+1);
	
	printf("O salário com reajuste é de R$ %.2f",reajuste);
	return 0;
}
