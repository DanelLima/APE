#include <stdio.h>

void somarColunasMatriz(int matriz[61][10])
{
    for (int j = 0; j < 10; j++)
    {
        int somaColuna = 0;
        for (int i = 0; i < 61; i++)
        {
            somaColuna += matriz[i][j];
        }
        matriz[60][j] = somaColuna;
    }
}

void exibirMatriz(int matriz[61][10])
{
    for (int i = 0; i < 61; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%3d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int matriz[61][10];

    printf("Digite os valores da matriz 61x10:\n");
    for (int i = 0; i < 61; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("Matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    somarColunasMatriz(matriz);

    printf("\nMatriz 61x10 com a soma das colunas na última linha:\n");
    exibirMatriz(matriz);

    return 0;
}
