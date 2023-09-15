#include<stdio.h>
#include<locale.h>

int main(){

    setlocale(LC_ALL,"portuguese");
    int numb;

    printf("Diga um número natural positivo: ");
    scanf("%d",&numb);

    printf("\nOs %d primeiros números naturais ímpares são:",numb);

    for ( int i=0,imp=1; i < numb; i++)
    {
        printf("\n%d",imp);
        imp+=2;
    }
     
    return 0; 

}