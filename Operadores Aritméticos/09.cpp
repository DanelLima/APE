#include<stdio.h>
#include<locale.h>

int main()
{
	//o locale troca o "." pelo "," na casa decimal
	setlocale(LC_ALL,"Portuguese");
	
	float custo,distribuidor=28,imposto=45,custoFinal;
	
	printf("Digite o custo de fábrica do carro: ");
	scanf("%f",&custo);
	
	custoFinal=(custo*((imposto/100)+1))*((distribuidor/100)+1);
	
	printf("O custo final do carro é de R$ %.2f",custoFinal);
	return 0;
}
