#include<stdio.h>
#include<locale.h>

int main(){

    setlocale(LC_ALL,"portuguese");

    int cdg,qtd;
    float vlr;

    printf("Diga o código do seu pedido: ");
    scanf("%d",&cdg);

    printf("Diga a quantidade do pedido: ");
    scanf("%d",&qtd);

    switch (cdg){

    case 100:
        vlr=qtd*10.1;
        break;
    case 101:
        vlr=qtd*8.3;
        break;
    case 102:
        vlr=qtd*8.5;
        break;
    case 103:
        vlr=qtd*12.5;
        break;
    case 104:
        vlr=qtd*13.25;
        break;

    }

    printf("Seu pedido deu R$%.2f",vlr);

    return 0;
}