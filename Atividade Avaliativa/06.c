#include <stdio.h>

int main(){

    float x,y;

    printf("Digite as coordenadas do ponto (x y): ");
    scanf("%f %f", &x, &y);

    if (x==0.0 && y==0.0){
        printf("Origem\n");
    } else if (x==0.0){
        printf("Eixo Y\n");
    } else if (y==0.0){
        printf("Eixo X\n");
    } else{
        if (x>0.0) {
            if (y>0.0){
                printf("Quadrante 1\n");
            } else {
                printf("Quadrante 4\n");
            }
        } else {
            if (y>0.0){
                printf("Quadrante 2\n");
            } else {
                printf("Quadrante 3\n");
            }
        }
    }

    return 0;
    
}
