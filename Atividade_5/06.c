#include<stdio.h>
#include<locale.h>

int main(){

    setlocale(LC_ALL,"portuguese");

    int numb;

    printf("Diga um número: ");
    scanf("%d",&numb);

    if (numb%2==0){

        printf("O número digitado é par.");

    }

    return 0;

}