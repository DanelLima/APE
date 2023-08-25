#include<stdio.h>
#include<locale.h>
#include<math.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");
	int numb1,numb2,soma,sub,mut;
	float div;
	printf("Number 1: ");
	scanf("%d",&numb1);
	printf("Number 2: ");
	scanf("%d",&numb2);
	soma=numb1+numb2;
	sub=numb1-numb2;
	div=(float)numb1/(float)numb2;
	mut=numb1*numb2;
	printf("\nSoma: %d \nDivisão: %.2f \nSubtração: %d \nMultiplicação: %d",soma,div,sub,mut);
	return 0;
}
