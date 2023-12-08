#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char codigo[20];
    char descricao[50];
    int quantidade;
    float valor;
} Produto;

Produto *inicializarEstoque(int *numProdutos)
{
    *numProdutos = 0;
    return NULL;
}

Produto *cadastrarProduto(Produto *estoque, int *numProdutos)
{
    (*numProdutos)++;
    estoque = (Produto *)realloc(estoque, (*numProdutos) * sizeof(Produto));

    printf("Digite o codigo do produto: ");
    scanf("%s", estoque[*numProdutos - 1].codigo);

    printf("Digite a descricao do produto: ");
    scanf("%s", estoque[*numProdutos - 1].descricao);

    printf("Digite a quantidade do produto: ");
    scanf("%d", &estoque[*numProdutos - 1].quantidade);

    printf("Digite o valor do produto: R$");
    scanf("%f", &estoque[*numProdutos - 1].valor);

    return estoque;
}

void relatorioProdutos(Produto *estoque, int numProdutos)
{
    printf("\nRelatorio de Produtos:\n");
    for (int i = 0; i < numProdutos; i++)
    {
        printf("Codigo: %s\n", estoque[i].codigo);
        printf("Descricao: %s\n", estoque[i].descricao);
        printf("Quantidade: %d\n", estoque[i].quantidade);
        printf("Valor: R$%.2f\n\n", estoque[i].valor);
    }
}

void pesquisarProduto(Produto *estoque, int numProdutos)
{
    char codigo[20];
    printf("Digite o codigo do produto a ser pesquisado: ");
    scanf("%s", codigo);

    for (int i = 0; i < numProdutos; i++)
    {
        if (strcmp(estoque[i].codigo, codigo) == 0)
        {
            printf("Produto encontrado:\n");
            printf("Descricao: %s\n", estoque[i].descricao);
            printf("Quantidade: %d\n", estoque[i].quantidade);
            printf("Valor: R$%.2f\n", estoque[i].valor);
            return;
        }
    }

    printf("Produto nao encontrado.\n");
}

Produto *removerProduto(Produto *estoque, int *numProdutos)
{
    char codigo[20];
    printf("Digite o codigo do produto a ser removido: ");
    scanf("%s", codigo);

    int encontrado = 0;
    for (int i = 0; i < *numProdutos; i++)
    {
        if (strcmp(estoque[i].codigo, codigo) == 0)
        {
            encontrado = 1;

            estoque[i] = estoque[*numProdutos - 1];
            (*numProdutos)--;

            estoque = (Produto *)realloc(estoque, (*numProdutos) * sizeof(Produto));
            printf("Produto removido com sucesso.\n");
            break;
        }
    }

    if (!encontrado)
    {
        printf("Produto nao encontrado.\n");
    }

    return estoque;
}

int main()
{
    Produto *estoque = NULL;
    int numProdutos = 0;
    int opcao;

    do
    {
        printf("\n----- Menu -----\n");
        printf("1. Cadastrar Produto\n");
        printf("2. Consultar Produtos\n");
        printf("3. Pesquisar Produto\n");
        printf("4. Remover Produto\n");
        printf("0. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            estoque = cadastrarProduto(estoque, &numProdutos);
            break;
        case 2:
            relatorioProdutos(estoque, numProdutos);
            break;
        case 3:
            pesquisarProduto(estoque, numProdutos);
            break;
        case 4:
            estoque = removerProduto(estoque, &numProdutos);
            break;
        case 0:
            printf("Saindo do programa.\n");
            break;
        default:
            printf("Opcao invalida. Tente novamente.\n");
        }
    } while (opcao != 0);

    free(estoque);

    return 0;
}
