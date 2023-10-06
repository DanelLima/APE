#include <stdio.h>

int main()
{

    int valores[7];

    for (int i = 0; i < 6; i++)
    {
        printf("Digite o valor da posicao %d: ", i);
        scanf("%d", &valores[i]);
    }

    for (int i = 5; i >= 0; i--)
    {
        printf("\nVoce digitou o valor %d na posicao %d.", valores[i], i);
    }

    return 0;
}