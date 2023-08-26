#include<stdio.h>
#include<locale.h>

int main()
{
	//o locale troca o "." pelo "," na casa decimal
	setlocale(LC_ALL,"Portuguese");
	
	float custo,distribuidor=28,imposto=45,custoFinal;
	
	printf("Digite o custo de fábrica do carro: ");
	scanf("%f",&custo);
	
	custoFinal=custo+(custo*(imposto/100))+(custo*(distribuidor/100));
	
	printf("O custo final do carro é de R$ %.2f",custoFinal);
	return 0;
}
