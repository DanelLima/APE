#include <stdio.h>

int main()
{
    int vetor[11];

    for (int i = 0; i < 10; i++)
    {
        printf("Digite o numero da posicao %d do vetor: ", i);
        scanf("%d", &vetor[i]);
    }

    int maior = vetor[0], menor = vetor[0];

    for (int i = 0; i < 10; i++)
    {
        if (vetor[i] > maior)
        {
            maior = vetor[i];
        }
        if (vetor[i] < menor)
        {
            menor = vetor[i];
        }
    }

    printf("\nO maior numero digitado foi %d e o menor foi %d.", maior, menor);

    return 0;
}