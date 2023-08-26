#include<stdio.h>
#include<locale.h>

int main()
{
	//o locale troca o "." pelo "," na casa decimal
	setlocale(LC_ALL,"Portuguese");
	
	float totalVenda,salarioFixo,valorCarro,salarioFinal;
	int carroVendido;
	
	printf("Digite quantos carros você vendeu: ");
	scanf("%d",&carroVendido);
	
	printf("Digite salário fixo: R$");
	scanf("%f",&salarioFixo);
	
	printf("Digite o valor total de suas vendas: R$");
	scanf("%f",&totalVenda);
	
	printf("Digite o valor recebido por carro vendido: R$");
	scanf("%f",&valorCarro);
	
	salarioFinal=salarioFixo+(carroVendido*valorCarro)+(totalVenda*0.05);
	
	printf("O salário final fica R$ %.2f",salarioFinal);
	return 0;
}
