#include<stdio.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL,"portuguese");

    int numb;

    printf("Diga um número inteiro: ");
    scanf("%d",&numb);

    if (numb==5){
        printf("\nO número é igual a 5");
    } else if (numb==500){
        printf("\nO número é igual a 500");
    } else if(numb==400){
        printf("\nO número é igual a 400");
    } else {
        printf("\nO número não é igual a 5 ou 500 ou 400");
    }
    
    if (numb>=500 && numb<=1000){
        printf("\nO número está entre 500 e 1000");
    } else{
        printf("\nO número não está entre 500 e 1000");
    }

    return 0;

}