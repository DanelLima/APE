#include<stdio.h>
#include<locale.h>
int main(){
    setlocale(LC_ALL,"portuguese");
    int numb=0,sum=0;
    printf("\nA soma dos 50 primeiros números naturais pares e positivos é:");
    for ( int i=0; i < 50; i++,numb+=2,sum+=numb){}
    printf("\n%d",sum);
    return 0; 
}