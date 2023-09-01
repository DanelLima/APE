#include<stdio.h>
#include<locale.h>
#include<math.h>

int main(){
    setlocale(LC_ALL,"portuguese");
    
    int A,B,C,D;
    
    printf("Diga um número inteiro: ");
    scanf("%d",&A);

    printf("Agora diga outro: ");
    scanf("%d",&B);

    printf("Mais outro: ");
    scanf("%d",&C);

    printf("Por fim mais um: ");
    scanf("%d",&D);

    if (A<=B && A<=C && A<=D){
        printf("O menor número digitado foi %d",A);
        if (B<=C && B<=D){
            printf("\nO segundo menor número digitado foi %d",B);
            if (C<=D){
                printf("\nO terceiro menor número digitado foi %d",C);
                printf("\nO quarto menor número digitado foi %d",D);
            }else{
                printf("\nO terceiro menor número digitado foi %d",D);
                printf("\nO quarto menor número digitado foi %d",C);
            }
        } else if (C<=B && C<=D){
            printf("\nO segundo menor número digitado foi %d",C);
            if (B<=D){
                printf("\nO terceiro menor número digitado foi %d",B);
                printf("\nO quarto menor número digitado foi %d",D);
            }else{
                printf("\nO terceiro menor número digitado foi %d",D);
                printf("\nO quarto menor número digitado foi %d",B);
            }
        } else{
            printf("\nO segundo menor número digitado foi %d",D);
            if (C<=B){
                printf("\nO terceiro menor número digitado foi %d",C);
                printf("\nO quarto menor número digitado foi %d",B);
            }else{
                printf("\nO terceiro menor número digitado foi %d",B);
                printf("\nO quarto menor número digitado foi %d",C);
            }
        }
    } else if (B<=A && B<=C && B<=D){
        printf("O menor número digitado foi %d",B);
        if (A<=C && A<=D){
            printf("\nO segundo menor número digitado foi %d",A);
            if (C<=D){
                printf("\nO terceiro menor número digitado foi %d",C);
                printf("\nO quarto menor número digitado foi %d",D);
            }else{
                printf("\nO terceiro menor número digitado foi %d",D);
                printf("\nO quarto menor número digitado foi %d",C);
            }
        } else if (C<=A && C<=D){
            printf("\nO segundo menor número digitado foi %d",C);
            if (A<=D){
                printf("\nO terceiro menor número digitado foi %d",A);
                printf("\nO quarto menor número digitado foi %d",D);
            }else{
                printf("\nO terceiro menor número digitado foi %d",D);
                printf("\nO quarto menor número digitado foi %d",A);
            }
        } else{
            printf("\nO segundo menor número digitado foi %d",D);
            if (A<=C){
                printf("\nO terceiro menor número digitado foi %d",A);
                printf("\nO quarto menor número digitado foi %d",C);
            }else{
                printf("\nO terceiro menor número digitado foi %d",C);
                printf("\nO quarto menor número digitado foi %d",A);
            }
        }
    } else if (C<=A && C<=B && C<=D){
        printf("O menor número digitado foi %d",C);
        if (B<=A && B<=D){
            printf("\nO segundo menor número digitado foi %d",B);
            if (A<=D){
                printf("\nO terceiro menor número digitado foi %d",A);
                printf("\nO quarto menor número digitado foi %d",D);
            }else{
                printf("\nO terceiro menor número digitado foi %d",D);
                printf("\nO quarto menor número digitado foi %d",A);
            }
        } else if (A<=B && A<=D){
            printf("\nO segundo menor número digitado foi %d",A);
            if (B<=D){
                printf("\nO terceiro menor número digitado foi %d",B);
                printf("\nO quarto menor número digitado foi %d",D);
            }else{
                printf("\nO terceiro menor número digitado foi %d",D);
                printf("\nO quarto menor número digitado foi %d",B);
            }
        } else{
            printf("\nO segundo menor número digitado foi %d",D);
            if (A<=B){
                printf("\nO terceiro menor número digitado foi %d",A);
                printf("\nO quarto menor número digitado foi %d",B);
            }else{
                printf("\nO terceiro menor número digitado foi %d",B);
                printf("\nO quarto menor número digitado foi %d",A);
            }
        }
    } else{
        printf("O menor número digitado foi %d",D);
        if (B<=C && B<=A){
            printf("\nO segundo menor número digitado foi %d",B);
            if (A<=C){
                printf("\nO terceiro menor número digitado foi %d",A);
                printf("\nO quarto menor número digitado foi %d",C);
            }else{
                printf("\nO terceiro menor número digitado foi %d",C);
                printf("\nO quarto menor número digitado foi %d",A);
            }
        } else if (C<=B && C<=A){
            printf("\nO segundo menor número digitado foi %d",C);
            if (A<=B){
                printf("\nO terceiro menor número digitado foi %d",A);
                printf("\nO quarto menor número digitado foi %d",B);
            }else{
                printf("\nO terceiro menor número digitado foi %d",B);
                printf("\nO quarto menor número digitado foi %d",A);
            }
        } else{
            printf("\nO segundo menor número digitado foi %d",A);
            if (C<=B){
                printf("\nO terceiro menor número digitado foi %d",C);
                printf("\nO quarto menor número digitado foi %d",B);
            }else{
                printf("\nO terceiro menor número digitado foi %d",B);
                printf("\nO quarto menor número digitado foi %d",C);
            }
        }
    }

    return 0;

}
