#include<stdio.h>
main(){
    int numb=0,sum=0;
    for ( int i=0; i < 50; i++,numb+=2,sum+=numb){}
    printf("A soma dos 50 primeiros numeros naturais, pares e positivos (2 a 100) eh:\n%d",sum);
}