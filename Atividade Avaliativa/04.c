#include <stdio.h>

int main(){

    float A, B, C, Asq, Bsq, Csq;

    printf("Digite o valor do lado A: ");
    scanf("%f", &A);

    printf("Digite o valor do lado B: ");
    scanf("%f", &B);

    printf("Digite o valor do lado C: ");
    scanf("%f", &C);

    if (A+B > C && A+C > B && B+C > A){

        Asq=A*A;
        Bsq=B*B;
        Csq=C*C;

        if (Asq+Bsq == Csq || Asq+Csq == Bsq || Bsq+Csq == Asq){
            printf("Triangulo Retangulo\n");
        } else if (Asq+Bsq < Csq || Asq+Csq < Bsq || Bsq+Csq < Asq){
            printf("Triangulo Obtusangulo\n");
        } else {
            printf("Triangulo Acutangulo\n");
        }

    } else {
        printf("Os valores fornecidos não formam um triangulo.\n");
    }

    return 0;

}
