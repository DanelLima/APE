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
    } else if (B>=A && B>=C && B>=D){
        printf("O maior número digitado foi %d",B);
    } else if (C>=A && C>=B && C>=D){
        printf("O maior número digitado foi %d",C);
    } else{
        printf("O maior número digitado foi %d",D);
    }

     if (A<=B && A<=C && A<=D){
        printf("\nO menor número digitado foi %d",A);
    } else if (B<=A && B<=C && B<=D){
        printf("\nO menor número digitado foi %d",B);
    } else if (C<=A && C<=B && C<=D){
        printf("\nO menor número digitado foi %d",C);
    } else{
        printf("\nO menor número digitado foi %d",D);
    }

    return 0;

}