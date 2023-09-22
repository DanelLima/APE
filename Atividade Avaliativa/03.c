#include<stdio.h>
#include<math.h>
int main(){
    int A,B,C;
    printf("Diga o valor do lado 'A' do Triangulo: ");
    scanf("%d",&A);
    printf("Diga o valor do lado 'B' do Triangulo: ");
    scanf("%d",&B);
    printf("Diga o valor do lado 'C' do Triangulo: ");
    scanf("%d",&C);
    if((A+B>C)&&(A+C>B)&&(C+B>A)){
        if ((A!=C)&&(A!=B)&&(C!=B))
        {
            printf("Esses lados formam um triangulo escaleno.");
        }
        if ((A==C)&&(A==B)&&(C==B))
        {
            printf("Esses lados formam um triangulo equilatero.");
        }
        if (((A==C)||(A==B)||(C==B))&&((A!=C)||(A!=B)||(C!=B)))
        {
            printf("Esses lados formam um triangulo isoceles.");
        }
        
    } else {printf("Nao e possivel existir triangulo com esses lados.");}
    return 0;
}