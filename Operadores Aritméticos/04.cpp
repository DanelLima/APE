#include<stdio.h>
#include<locale.h>

int main()
{
	//o locale troca o "." pelo "," na casa decimal
	setlocale(LC_ALL,"Portuguese");
	
	double valor,dolar,cotacao;
	
	printf("Valor em reais: ");
	scanf("%lf",&valor);
	
	printf("Valor da cota��o do d�lar em reais: ");
	scanf("%lf",&dolar);
	
	cotacao=valor*dolar;
	
	printf("Cota��o de %.2lf reais para d�lar � de %.2lf dolares",valor,cotacao);
	return 0;
}
