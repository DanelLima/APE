#include <stdio.h>

int main()
{
    int quantidadeOtimo = 0;
    int quantidadeBom = 0;
    int quantidadeRegular = 0;
    int quantidadeRuim = 0;
    int quantidadePessimo = 0;
    int somaIdadeRuim = 0;
    int maiorIdadePessimo = 0;
    int maiorIdadeOtimo = 0;
    int maiorIdadeRuim = 0;

    int idade;
    char opiniao;

    for (int i = 0; i < 100; i++)
    {
        printf("Digite a idade do espectador: ");
        scanf("%d", &idade);
        printf("Digite a opinião do espectador (A, B, C, D, E): ");
        scanf(" %c", &opiniao);

        switch (opiniao)
        {
        case 'A':
            quantidadeOtimo++;
            if (idade > maiorIdadeOtimo)
            {
                maiorIdadeOtimo = idade;
            }
            break;
        case 'B':
            quantidadeBom++;
            break;
        case 'C':
            quantidadeRegular++;
            break;
        case 'D':
            quantidadeRuim++;
            somaIdadeRuim += idade;
            if (idade > maiorIdadeRuim)
            {
                maiorIdadeRuim = idade;
            }
            break;
        case 'E':
            quantidadePessimo++;
            if (idade > maiorIdadePessimo)
            {
                maiorIdadePessimo = idade;
            }
            break;
        default:
            printf("Opção inválida. Tente novamente.\n");
            i--;
        }
    }

    printf("Quantidade de respostas Ótimo: %d\n", quantidadeOtimo);
    printf("Diferença percentual entre respostas Bom e Regular: %.2f%%\n",
           (float)(quantidadeBom - quantidadeRegular) / quantidadeBom * 100);

    if (quantidadeRuim > 0)
    {
        float mediaIdadeRuim = (float)somaIdadeRuim / quantidadeRuim;
        printf("Média de idade das pessoas que responderam Ruim: %.2f\n", mediaIdadeRuim);
    }
    else
    {
        printf("Nenhuma resposta Ruim.\n");
    }

    if (quantidadePessimo > 0)
    {
        float percentagemPessimo = (float)quantidadePessimo / 100 * 100;
        printf("Percentagem de respostas Péssimo: %.2f%%\n", percentagemPessimo);
        printf("Maior idade que utilizou esta opção: %d\n", maiorIdadePessimo);
    }
    else
    {
        printf("Nenhuma resposta Péssimo.\n");
    }

    int diferencaIdades = maiorIdadeOtimo - maiorIdadeRuim;
    printf("Diferença de idade entre a maior idade que respondeu Ótimo e a maior idade que respondeu Ruim: %d\n", diferencaIdades);

    return 0;
}
