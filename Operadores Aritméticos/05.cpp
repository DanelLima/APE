#include<stdio.h>
#include<locale.h>
#include<math.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");
	
	float valor,dolar,cotacao;
	
	printf("Valor em reais: ");
	scanf("%f",&valor);
	
	printf("\nValor da cotação do dólar em reais: ");
	scanf("%f",&dolar);
	
	cotacao=valor*dolar;
	
	printf("\nCotação de %.2f reais para dólar é de %.2f dolares",valor,cotacao);
	return 0;
}
