#include<stdio.h>
#include<locale.h>

int main(){

    setlocale(LC_ALL,"portuguese");
    int numb;

    printf("Diga um número positivo: ");
    scanf("%d",&numb);

    printf("\nA ordem decrescente dos números naturais de 0 a %d é:",numb);

    for ( ;numb >= 0; numb--)
    {
        printf("\n%d",numb);
    }
     
    return 0; 

}