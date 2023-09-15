#include<stdio.h>
#include<locale.h>
int main(){
    setlocale(LC_ALL,"portuguese");
    int numb=3;
    printf("\nOs cinco primeiros números múltiplos de 3 considerando números maiores que 0 são:");
    for ( int i=0; i < 5; i++,numb+=3)
    {
        printf("\n%d",numb);
    }
    return 0; 
}