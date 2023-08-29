#include<stdio.h>
#include<locale.h>
int main(){
	
	//o locale troca o "." por "," em n�meros decimais
	setlocale(LC_ALL,"portuguese");
	
	float media;
	
	printf("Diga sua média: ");
	scanf("%f",&media);
	
	if(media>=7){
		printf("\nAprovado");
		
	}else{
		if(media<4){
			printf("\nReprovado");
			
		}else{
		printf("\nRecuperação");
		
		}
	}
	return 0;
	
}
