#include <stdio.h>

int main()
{

    int vetor[6];

    for (int i = 0; i < 5; i++)
    {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    int maior = vetor[0], menor = vetor[0];
    float media = vetor[0];

    for (int i = 1; i < 5; i++)
    {
        if (vetor[i] > maior)
        {
            maior = vetor[i];
        }
        if (vetor[i] < menor)
        {
            menor = vetor[i];
        }

        media += vetor[i];
    }

    media = media / 5;

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", vetor[i]);
    }

    printf("O maior valor digitado foi %d, e o menor %d, a media fica %.2f.", maior, menor, media);

    return 0;
}