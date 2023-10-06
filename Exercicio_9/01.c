#include <stdio.h>

int main()
{
    int A[7] = {1, 0, 5, -2, -5, 7};

    int soma;

    soma = A[0] + A[1] + A[5];

    printf("A soma dos valores do vetor A eh: %d", soma);

    A[3] = 100;

    for (int i = 0; i < 6; i++)
    {
        printf("\n%d", A[i]);
    }

    return 0;
}