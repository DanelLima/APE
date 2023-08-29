#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"portuguese");
	
	int idade;
	
	printf("Diga sua idade atual: ");
	scanf("%d",&idade);
	
	if(idade>=18){
		printf("\nVoc� � maior de idade.\n*Parab�ns*");
		
	}else{
		if(idade<=0){
			printf("Como isso � poss�vel????????????????????????????????");
			
		}else{
		printf("Voc� ainda � menor de idade.\n;-;");
		
		}
	}
	
	return 0;
}
