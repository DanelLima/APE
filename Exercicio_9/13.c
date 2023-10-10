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
    int pMaior = 0, pMenor = 0;

    for (int i = 1; i < 5; i++)
    {
        if (vetor[i] > maior)
        {
            maior = vetor[i];
            pMaior = i;
        }
        if (vetor[i] < menor)
        {
            menor = vetor[i];
            pMenor = i;
        }
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", vetor[i]);
    }

    printf("A posicao no vetor do maior numero digita eh %d, e do menor eh %d.", pMaior,pMenor);

    return 0;
}