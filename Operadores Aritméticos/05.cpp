#include<stdio.h>
#include<locale.h>
#include<math.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");
	
	float valor,dolar,cotacao;
	
	printf("Valor em reais: ");
	scanf("%f",&valor);
	
	printf("\nValor da cota��o do d�lar em reais: ");
	scanf("%f",&dolar);
	
	cotacao=valor*dolar;
	
	printf("\nCota��o de %.2f reais para d�lar � de %.2f dolares",valor,cotacao);
	return 0;
}
