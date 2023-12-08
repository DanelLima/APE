#include <stdio.h>

char imprimirOpcoes()
{
    printf("\nOpções de pagamento:\n");
    printf("a) À vista com 10%% de desconto\n");
    printf("b) Em duas vezes (preço da etiqueta)\n");
    printf("c) De 3 até 10 vezes com 3%% de juros ao mês (somente para compras acima de R$ 100,00)\n");

    char opcao;
    printf("\nEscolha a opção (a, b ou c): ");
    scanf(" %c", &opcao);

    return opcao;
}

void opcaoA(float totalGasto)
{
    float desconto = 0.10;
    float valorComDesconto = totalGasto - (totalGasto * desconto);
    printf("Total com 10%% de desconto: R$ %.2f\n", valorComDesconto);
}

void opcaoB(float totalGasto)
{
    printf("Total em duas vezes: R$ %.2f\n", totalGasto);
}

void opcaoC(float totalGasto)
{
    if (totalGasto > 100.00)
    {
        int parcelas;
        printf("Digite o número de parcelas (3 a 10): ");
        scanf("%d", &parcelas);

        if (parcelas >= 3 && parcelas <= 10)
        {
            float juros = 0.03;
            float valorParcela = (totalGasto * (1 + juros)) / parcelas;
            printf("Total em %d vezes com 3%% de juros ao mês: R$ %.2f por parcela\n", parcelas, valorParcela);
        }
        else
        {
            printf("Número de parcelas inválido.\n");
        }
    }
    else
    {
        printf("Opção c só é válida para compras acima de R$ 100,00.\n");
    }
}

int main()
{
    float totalGasto;

    printf("Digite o total gasto pelo cliente: R$ ");
    scanf("%f", &totalGasto);

    char opcaoEscolhida = imprimirOpcoes();

    switch (opcaoEscolhida)
    {
    case 'a':
        opcaoA(totalGasto);
        break;
    case 'b':
        opcaoB(totalGasto);
        break;
    case 'c':
        opcaoC(totalGasto);
        break;
    default:
        printf("Opção inválida.\n");
    }

    return 0;
}
