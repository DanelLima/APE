#include <stdio.h>

void realizarTrocas(int matriz[10][10])
{
    for (int i = 0; i < 10; i++)
    {
        int temp = matriz[1][i];
        matriz[1][i] = matriz[7][i];
        matriz[7][i] = temp;
    }

    for (int i = 0; i < 10; i++)
    {
        int temp = matriz[i][3];
        matriz[i][3] = matriz[i][9];
        matriz[i][9] = temp;
    }

    for (int i = 0; i < 10; i++)
    {
        int temp = matriz[i][i];
        matriz[i][i] = matriz[i][9 - i];
        matriz[i][9 - i] = temp;
    }

    for (int i = 0; i < 10; i++)
    {
        int temp = matriz[4][i];
        matriz[4][i] = matriz[i][9];
        matriz[i][9] = temp;
    }
}

void exibirMatriz(int matriz[10][10])
{
    for (int i = 0; i < 10; i++)
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
    int matriz[10][10];

    printf("Digite os valores da matriz A(10,10):\n");
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    realizarTrocas(matriz);

    printf("\nMatriz A(10,10) após as trocas:\n");
    exibirMatriz(matriz);

    return 0;
}
