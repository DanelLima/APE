#include<stdio.h>
int main(){
    int ano=0;
    float alturaChico=1.5,chicoCresce=0.02,alturaZe=1.1,zeCresce=0.03;
    while (alturaZe<=alturaChico)
    {
        ano++;
        alturaZe+=zeCresce;
        alturaChico+=chicoCresce;
    }
    printf("Sera necessario %d anos para que Ze fique com a altura mais alta do que o Chico.",ano);
    return 0;
}