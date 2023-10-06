#include <stdio.h>

int main()
{
    int conjuntoReal[11], conjuntoQuadrado[11];

    for (int i = 0; i < 10; i++)
    {
        printf("Digite o numero da posicao %d do conjunto: ", i);
        scanf("%d", &conjuntoReal[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        conjuntoQuadrado[i] = conjuntoReal[i] * conjuntoReal[i];
        printf("\nO valor do quadrado de %d eh: %d", conjuntoReal[i], conjuntoQuadrado[i]);
    }

    return 0;
}