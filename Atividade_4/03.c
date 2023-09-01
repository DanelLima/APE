#include<stdio.h>
#include<locale.h>
#include<math.h>

int main(){
    int A,B,C,D;
    
    printf("Diga um número inteiro: ");
    scanf("%d",&A);

    printf("Agora diga outro: ");
    scanf("%d",&B);

    printf("Mais outro: ");
    scanf("%d",&C);

    printf("Por fim mais um: ");
    scanf("%d",&D);

    if (A>=B && A>=C && A>=D){
        printf("O maior número digitado foi %d",A);
        if (B>=C && B>=D){
            printf("O segundo maior número digitado foi %d",B);
            if (C>=D){
                printf("O terceiro maior número digitado foi %d",C);
                printf("O quarto maior número digitado foi %d",D);
            }else{
                printf("O terceiro maior número digitado foi %d",D);
                printf("O quarto maior número digitado foi %d",C);
            }
        } else if (C>=B && C>=D){
            printf("O segundo maior número digitado foi %d",C);
            if (B>=D){
                printf("O terceiro maior número digitado foi %d",B);
                printf("O quarto maior número digitado foi %d",D);
            }else{
                printf("O terceiro maior número digitado foi %d",D);
                printf("O quarto maior número digitado foi %d",B);
            }
        } else{
            printf("O segundo maior número digitado foi %d",D);
            if (C>=B){
                printf("O terceiro maior número digitado foi %d",C);
                printf("O quarto maior número digitado foi %d",B);
            }else{
                printf("O terceiro maior número digitado foi %d",B);
                printf("O quarto maior número digitado foi %d",C);
            }
        }
    } else if (B>=A && B>=C && B>=D){
        printf("O maior número digitado foi %d",B);
        if (A>=C && A>=D){
            printf("O segundo maior número digitado foi %d",A);
            if (C>=D){
                printf("O terceiro maior número digitado foi %d",C);
                printf("O quarto maior número digitado foi %d",D);
            }else{
                printf("O terceiro maior número digitado foi %d",D);
                printf("O quarto maior número digitado foi %d",C);
            }
        } else if (C>=A && C>=D){
            printf("O segundo maior número digitado foi %d",C);
            if (A>=D){
                printf("O terceiro maior número digitado foi %d",A);
                printf("O quarto maior número digitado foi %d",D);
            }else{
                printf("O terceiro maior número digitado foi %d",D);
                printf("O quarto maior número digitado foi %d",A);
            }
        } else{
            printf("O segundo maior número digitado foi %d",D);
            if (A>=B){
                printf("O terceiro maior número digitado foi %d",A);
                printf("O quarto maior número digitado foi %d",C);
            }else{
                printf("O terceiro maior número digitado foi %d",C);
                printf("O quarto maior número digitado foi %d",A);
            }
        }
    } else if (C>=A && C>=B && C>=D){
        printf("O maior número digitado foi %d",C);
        if (B>=C && B>=D){
            printf("O segundo maior número digitado foi %d",B);
            if (C>=D){
                printf("O terceiro maior número digitado foi %d",C);
                printf("O quarto maior número digitado foi %d",D);
            }else{
                printf("O terceiro maior número digitado foi %d",D);
                printf("O quarto maior número digitado foi %d",C);
            }
        } else if (C>=B && C>=D){
            printf("O segundo maior número digitado foi %d",C);
            if (B>=D){
                printf("O terceiro maior número digitado foi %d",B);
                printf("O quarto maior número digitado foi %d",D);
            }else{
                printf("O terceiro maior número digitado foi %d",D);
                printf("O quarto maior número digitado foi %d",B);
            }
        } else{
            printf("O segundo maior número digitado foi %d",D);
            if (C>=B){
                printf("O terceiro maior número digitado foi %d",C);
                printf("O quarto maior número digitado foi %d",B);
            }else{
                printf("O terceiro maior número digitado foi %d",B);
                printf("O quarto maior número digitado foi %d",C);
            }
        }
    } else{
        printf("O maior número digitado foi %d",D);
        if (B>=C && B>=D){
            printf("O segundo maior número digitado foi %d",B);
            if (C>=D){
                printf("O terceiro maior número digitado foi %d",C);
                printf("O quarto maior número digitado foi %d",D);
            }else{
                printf("O terceiro maior número digitado foi %d",D);
                printf("O quarto maior número digitado foi %d",C);
            }
        } else if (C>=B && C>=D){
            printf("O segundo maior número digitado foi %d",C);
            if (B>=D){
                printf("O terceiro maior número digitado foi %d",B);
                printf("O quarto maior número digitado foi %d",D);
            }else{
                printf("O terceiro maior número digitado foi %d",D);
                printf("O quarto maior número digitado foi %d",B);
            }
        } else{
            printf("O segundo maior número digitado foi %d",D);
            if (C>=B){
                printf("O terceiro maior número digitado foi %d",C);
                printf("O quarto maior número digitado foi %d",B);
            }else{
                printf("O terceiro maior número digitado foi %d",B);
                printf("O quarto maior número digitado foi %d",C);
            }
        }
    }

    return 0;

}
