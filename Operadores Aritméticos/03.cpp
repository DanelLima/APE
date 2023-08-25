#include<stdio.h>
#include<locale.h>
#include<math.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");
	int numb1,numb2,area;
	printf("Number 1: ");
	scanf("%d",&numb1);
	printf("Number 2: ");
	scanf("%d",&numb2);
	area=numb1*numb2;
	printf("Área igual a %d",area);
	return 0;
}
