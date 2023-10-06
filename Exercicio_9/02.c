#include <stdio.h>

int main()
{
    int valores[7];

    for (int i = 0; i < 6; i++)
    {
        printf("Digite o numero da posicao %d do vetor: ", i);
        scanf("%d", &valores[i]);
    }

    for (int i = 0; i < 6; i++)
    {
        printf("\nO valor da posicao %d do vetor eh: %d", i, valores[i]);
    }

    return 0;
}