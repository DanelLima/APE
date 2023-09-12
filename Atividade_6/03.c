#include<stdio.h>
#include<locale.h>

int main(){

    setlocale(LC_ALL,"portuguese");

    int pdd,cal=0;

    printf("Diga o número do seu prato na tabela:\n\n| 1 - vegetariano | 2 - Peixe | 3 - Frango | 4 - Carne | \n\nPedido: ");
    scanf("%d",&pdd);

    switch (pdd){

    case 1:
        cal=cal+180;
        break;
    case 2:
        cal=cal+230;
        break;
    case 3:
        cal=cal+250;
        break;
    case 4:
        cal=cal+350;
        break;

    }

    printf("\nDiga o númeroda sua sobremesa na tabela:\n\n| 1 - Abacaxi | 2 - Sorvete diet | 3 - Mouse diet | 4 - Mouse chocolate |  \n\nPedido: ");
    scanf("%d",&pdd);

    switch (pdd){

    case 1:
        cal=cal+75;
        break;
    case 2:
        cal=cal+110;
        break;
    case 3:
        cal=cal+170;
        break;
    case 4:
        cal=cal+200;
        break;

    }

    printf("\nDiga o número da sua bebida na tabela:\n\n| 1 - Chá | 2 - Suco de laranja | 3 - Suco de melão | 4 - Refrigerante diet |  \n\nPedido: ");
    scanf("%d",&pdd);

    switch (pdd){

    case 1:
        cal=cal+20;
        break;
    case 2:
        cal=cal+70;
        break;
    case 3:
        cal=cal+100;
        break;
    case 4:
        cal=cal+65;
        break;

    }

    printf("Você irá consumir %d calorias",cal);

    return 0;
}
