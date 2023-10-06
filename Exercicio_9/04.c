#include <stdio.h>

int main()
{
    int vetor[9];
    int X, Y;
    int soma;

    for (int i = 0; i < 8; i++)
    {
        printf("Digite o numero da posicao %d do vetor: ", i);
        scanf("%d", &vetor[i]);
    }

    printf("Digite o valor de X: ");
    scanf("%d", &X);

    printf("Digite o valor de Y: ");
    scanf("%d", &Y);

    soma = vetor[X] + vetor[Y];

    printf("A soma dos valores na posicao %d e %d eh: %d", X, Y, soma);

    return 0;
}