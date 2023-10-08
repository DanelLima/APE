#include<stdio.h>

int main(){
    int vetor[16];
    float media=0;

    printf("Diga as 15 notas dos alunos (ex:10 10 10 ...): ");
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d",&vetor[0],&vetor[1],&vetor[2],&vetor[3],&vetor[4],&vetor[5],&vetor[6],&vetor[7],&vetor[8],&vetor[9],&vetor[10],&vetor[11],&vetor[12],&vetor[13],&vetor[14]);

    for (int i = 0; i < 15; i++)
    {
        media+=vetor[i];
    }

    media=media/15;

    printf("A media geral dos 15 alunos eh: %.2f",media);

    return 0;
}