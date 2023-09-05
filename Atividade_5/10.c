#include<stdio.h>
#include<locale.h>
#include<math.h>

int main(){

    setlocale(LC_ALL,"portuguese");

    int a,b,c,delta;
    float x1,x2;

    printf("Diga o valor de A da equação de segundo grau: ");
    scanf("%d",&a);


    printf("Diga o valor de B da equação de segundo grau: ");
    scanf("%d",&b);

    printf("Diga o valor de C da equação de segundo grau: ");
    scanf("%d",&c);

    if (a==0){

        printf("Não e equação de segundo grau");

    } else{

        delta=pow(b,2)-(4*a*c);

        x1=((b*(-1))+sqrt(delta))/(2*a);
        x2=((b*(-1))-sqrt(delta))/(2*a);

        if (delta<0){

            printf("Não existe raiz");

        } else if(delta==0){

            printf("Raiz  única");
            printf("A raiz é %.0f",x1);

        } else{
            printf("%d",delta);
            printf("\nAs raizes são %.1f e %.1f",x1,x2); 

        }

    }

    return 0;

}