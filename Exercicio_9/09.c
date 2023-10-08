#include<stdio.h>

int main(){
    int vetor[7];

    printf("Diga os 6 valores pares a serem lidos (ex:0 2 4 6 8 10): ");
    scanf("%d %d %d %d %d %d",&vetor[0],&vetor[1],&vetor[2],&vetor[3],&vetor[4],&vetor[5]);

    for (int i = 5; i >= 0; i--)
    {
        printf("%d ",vetor[i]);
    }

    return 0;
}