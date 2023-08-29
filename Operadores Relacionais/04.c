#include<stdio.h>
#include<locale.h>
int main(){
	
	//o locale troca o "." por "," em números decimais
	setlocale(LC_ALL,"portuguese");
	
	float peso;
	
	printf("Diga seu peso atual em quilos: ");
	scanf("%f",&peso);
	
	if(peso>=60){
		printf("\nBora fazer uma dieta?");
		
	}else{
		if(peso<=0){
			printf("\nOxi");
			
		}else{
		printf("\nPesor menor que 60 Kg.");
		
		}
	}
	
	return 0;
}
