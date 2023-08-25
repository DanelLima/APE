#include<stdio.h>
#include<locale.h>
#include<math.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");
	int numb1,numb2;
	printf("Number 1: ");
	scanf("%d",&numb1);
	numb2=numb1*2;
	printf("\nDobro de %d = %d",numb1,numb2);
	return 0;
}
