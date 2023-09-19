#include<stdio.h>
#include<math.h>

int main(){
    
    float x,y;

    printf("Diga o valor de x na funcao: ");
    scanf("%f",&x);

    y= ((5 * x)+3)/(sqrt((pow(x,2)-16)));

    printf("O valor de f(%.0f) eh: %.2f",x,y);
    
    return 0;

}