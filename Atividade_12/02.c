#include <stdio.h>

void calcularLocacoesGratuitas(int filmesRetirados[], int locacoesGratuitas[], int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        locacoesGratuitas[i] = filmesRetirados[i] / 15;
    }
}

int main()
{
    const int tamanho = 500;

    int filmesRetirados[tamanho];

    printf("Digite a quantidade de filmes retirados por cada cliente:\n");
    for (int i = 0; i < tamanho; i++)
    {
        printf("Cliente %d: ", i + 1);
        scanf("%d", &filmesRetirados[i]);
    }

    int locacoesGratuitas[tamanho];

    calcularLocacoesGratuitas(filmesRetirados, locacoesGratuitas, tamanho);

    printf("\nQuantidade de locações gratuitas por cliente:\n");
    for (int i = 0; i < tamanho; i++)
    {
        printf("Cliente %d: %d locações gratuitas\n", i + 1, locacoesGratuitas[i]);
    }

    return 0;
}
