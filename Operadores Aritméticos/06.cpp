#include<stdio.h>
#include<locale.h>
#include<math.h>

int main()
{
	//o locale troca o "." pelo "," na casa decimal
	setlocale(LC_ALL,"Portuguese");
	
	float area,raio,pi=3.1415;
	
	printf("Digite o raio do c�rculo em metros: ");
	scanf("%f",&raio);
	
	area=pi*pow(raio,2);
	
	printf("A �rea do c�rculo �: %.2f m2",area);
	return 0;
}
