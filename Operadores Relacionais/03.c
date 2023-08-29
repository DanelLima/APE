#include<stdio.h>
#include<locale.h>
int main(){
	
	//o locale troca o "." por "," em n�meros decimais
	setlocale(LC_ALL,"portuguese");
	
	float altura;
	
	printf("Diga sua altura atual em metros: ");
	scanf("%f",&altura);
	
	if(altura>1.8){
		printf("\nMaior do que 1,8 metros.\n*Parab�ns*");
		
	}else{
		if(altura<=0){
			printf("\nOxi");
			
		}else{
		printf("\nMenor ou igual a 1,8 metros.\n;-;");
		
		}
	}
	
	return 0;
}
