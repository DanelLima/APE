#include<stdio.h>
#include<locale.h>

int main(){

    setlocale(LC_ALL,"portuguese");
    int numb;

    printf("Diga um número positivo: ");
    scanf("%d",&numb);

    printf("\nA ordem crescente dos números naturais de 0 a %d é:",numb);

    for (int i = 0; i <= numb; i++)
    {
        printf("\n%d",i);
    }
     
    return 0; 

}