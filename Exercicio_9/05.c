#include <stdio.h>

int main()
{
    int vetor[11];
    int pares = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("Digite o numero da posicao %d do vetor: ", i);
        scanf("%d", &vetor[i]);

        if ((vetor[i] % 2) == 0)
        {
            pares++;
        }
    }

    printf("\nVoce digitou %d numero(s) par(es).", pares);

    return 0;
}