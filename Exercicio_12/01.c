#include <stdio.h>

float opcao_1(float total_gasto)
{
    float pagamento = total_gasto * 0.9;
    return pagamento;
}
float opcao_2(float total_gasto)
{

    float pagamento = total_gasto * 0.5;
    return pagamento;
}
float opcao_3(float total_gasto, int parcelas)
{

    float pagamento = total_gasto / parcelas;
    return pagamento;
}

int imprime_opcoes()
{
    int escolha;

    printf("\nEscolha sua forma de pagamento:");
    printf("\nOpcao 1 - A vista com 10%% de desconto;");
    printf("\nOpcao 2 - Em duas vezes (preco da etiqueta);");
    printf("\nOpcao 3 - De 3 ate 10 vezes com 3%% de juros ao mes (somente para compras acima de R$ 100,00).\n");
    scanf("%d", &escolha);

    if (escolha < 1 || escolha > 3)
    {
        printf("\nDigite uma opcao valida!\n");

        return imprime_opcoes();
    }
    return escolha;
}
void chama(int escolha, float total_gasto)
{
    switch (escolha)
    {
    case 1:
        printf("Total pago a vista com 10%% de desconto eh de R$ %.2f.", opcao_1(total_gasto));

        break;
    case 2:
        printf("A parcela de duas vezes eh de R$ %.2f.", opcao_2(total_gasto));

        break;
    case 3:
        if (total_gasto <= 100)
        {
            printf("Sua compra nao eh superior a 100 reais!");
            break;
        }
        else
        {
            int parcelas;
            printf("Digite quantas vezes voce ira percelar: ");
            scanf("%d", &parcelas);
            printf("O valor da(s) %d eh de R$ %.2f.", parcelas, opcao_3(total_gasto, parcelas));

            break;
        }
    }
}

int main()
{
    float total_gasto;

    printf("Digite o total gasto: R$ ");
    scanf("%f", &total_gasto);

    int escolha = imprime_opcoes();

    chama(escolha, total_gasto);

    return 0;
}