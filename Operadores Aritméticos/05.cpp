#include<stdio.h>
#include<locale.h>

int main()
{
	//o locale troca o "." pelo "," na casa decimal
	setlocale(LC_ALL,"Portuguese");
	
	double custo,frete,despesa,valor,lucro;
	
	printf("Valor de custo em reais: ");
	scanf("%lf",&custo);
	
	printf("Valor de frete em reais: ");
	scanf("%lf",&frete);
	
	printf("Valor de despesas eventuais em reais: ");
	scanf("%lf",&despesa);
	
	printf("Valor de venda em reais: ");
	scanf("%lf",&valor);
	
	lucro=valor-frete-despesa-custo;
	
	printf("A mercadoria teve lucro de R$%.2lf",lucro);
	return 0;
}
