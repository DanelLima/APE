#include<stdio.h>
#include<locale.h>
int main(){
	
	//o locale troca o "." por "," em n�meros decimais
	setlocale(LC_ALL,"portuguese");
	
	float salario;
	
	printf("Diga seu sal�rio atual: R$");
	scanf("%f",&salario);
	
	if(salario>1320){
		printf("\nVoc� recebe mais do que o m�nimo.\n*Parab�ns*");
		
	}else{
		if(salario<=0){
			printf("Trabalho escravo?");
			
		}else{
		printf("T�o pouco??.\n;-;");
		
		}
	}
	
	return 0;
}