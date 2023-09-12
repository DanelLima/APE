#include<stdio.h>
#include<locale.h>

int main(){

    setlocale(LC_ALL,"portuguese");

    int ddd;

    printf("Diga seu DDD: ");
    scanf("%d",&ddd);

    switch (ddd){

    case 61:
        printf("Brasília");
        break;
    case 71:
        printf("Salvador");
        break;
    case 11:
        printf("São Paulo");
        break;
    case 21:
        printf("Rio de Janeiro");
        break;
    case 32:
        printf("Juiz de Fora");
        break;
    case 19:
        printf("Campinas");
        break;
    case 27:
        printf("Vitória");
        break;
    case 31:
        printf("Belo Horizonte");
        break;
    
    default:
        printf("uma cidade no Brasil sem identificação");
        break;

    }

    return 0;
    
}