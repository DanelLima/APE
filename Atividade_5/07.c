#include<stdio.h>

int main(){


    float nota1,nota2,nota3,media;

    printf("Diga a nota da prova 1: ");
    scanf("%f",&nota1);


    printf("Diga a nota da prova 2: ");
    scanf("%f",&nota2);

    printf("Diga a nota da prova 3: ");
    scanf("%f",&nota3);

    media=(nota1+nota2+(nota3*2))/4;

    if (media>=7){

        printf("Nota: %.2f \nAluno aprovado.",media);

    } else{

        printf("Nota: %.2f \nAluno reprovado",media);

    }

    return 0;

}