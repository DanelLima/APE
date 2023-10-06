#include <stdio.h>

int main()
{
    int vetor[11];

    for (int i = 0; i < 10; i++)
    {
        printf("Digite o numero da posicao %d do vetor: ", i);
        scanf("%d", &vetor[i]);
    }

    int posicaoMaior = 0;

    for (int i = 0; i < 10; i++)
    {
        if (vetor[i] > vetor[posicaoMaior])
        {
            posicaoMaior = i;
        }
    }

    printf("\nO maior numero digitado foi %d e a posicao dele eh: %d.", vetor[posicaoMaior], posicaoMaior);

    return 0;
}