#include<stdio.h>

int main(){

    int comando;
    float total;
   
    do
    {
        printf("\nDiga qual produto da lista vai adcionar ao carrinho, sendo: ");
        printf("\n| 1 => ABACAXI - R$5,00 a unidade | 2 => MACA - R$1,00 a unidade | 3 => PERA - R$4,00 a unidade |");
        printf("\nDigite o codigo da compra (caso queira sair digite 4):\n ");
        scanf("%d",&comando);
        
        switch (comando)
        {
        case 1:
            total+=5;
            break;

        case 2:
            total+=1;
            break;

        case 3:
            total+=4;
            break;

        default:
            break;

        }
        

    } while (comando!=4);

    printf("\nO total da comprar eh R$%.2f",total);

    return 0;

}