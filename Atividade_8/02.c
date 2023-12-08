#include <stdio.h>

int main()
{
    int totalServicosA = 0, totalServicosB = 0, totalServicosC = 0;
    int matutinoA = 0, matutinoB = 0, matutinoC = 0;
    int vespertinoA = 0, vespertinoB = 0, vespertinoC = 0;
    int noturnoA = 0, noturnoB = 0, noturnoC = 0;

    int morador;
    char elevador, periodo;

    for (morador = 1; morador <= 50; morador++)
    {
        printf("Digite o elevador mais utilizado pelo morador %d (A, B, C): ", morador);
        scanf(" %c", &elevador);

        printf("Digite o período de utilização (M, V, N): ");
        scanf(" %c", &periodo);

        switch (elevador)
        {
        case 'A':
            totalServicosA++;
            if (periodo == 'M')
                matutinoA++;
            else if (periodo == 'V')
                vespertinoA++;
            else if (periodo == 'N')
                noturnoA++;
            break;
        case 'B':
            totalServicosB++;
            if (periodo == 'M')
                matutinoB++;
            else if (periodo == 'V')
                vespertinoB++;
            else if (periodo == 'N')
                noturnoB++;
            break;
        case 'C':
            totalServicosC++;
            if (periodo == 'M')
                matutinoC++;
            else if (periodo == 'V')
                vespertinoC++;
            else if (periodo == 'N')
                noturnoC++;
            break;
        default:
            printf("Elevador inválido. Tente novamente.\n");
            morador--;
        }
    }

    char periodoMaisUsado;
    if (matutinoA + matutinoB + matutinoC > vespertinoA + vespertinoB + vespertinoC && matutinoA + matutinoB + matutinoC > noturnoA + noturnoB + noturnoC)
    {
        periodoMaisUsado = 'M';
    }
    else if (vespertinoA + vespertinoB + vespertinoC > noturnoA + noturnoB + noturnoC)
    {
        periodoMaisUsado = 'V';
    }
    else
    {
        periodoMaisUsado = 'N';
    }

    printf("O período mais usado de todos é %c e pertence ao elevador ", periodoMaisUsado);
    if (periodoMaisUsado == 'M')
    {
        printf("A\n");
    }
    else if (periodoMaisUsado == 'V')
    {
        printf("B\n");
    }
    else
    {
        printf("C\n");
    }

    char elevadorMaisFrequentado;
    if (totalServicosA > totalServicosB && totalServicosA > totalServicosC)
    {
        elevadorMaisFrequentado = 'A';
    }
    else if (totalServicosB > totalServicosC)
    {
        elevadorMaisFrequentado = 'B';
    }
    else
    {
        elevadorMaisFrequentado = 'C';
    }

    printf("O elevador mais frequentado é %c e o período com maior fluxo é ", elevadorMaisFrequentado);
    if (elevadorMaisFrequentado == 'A')
    {
        if (matutinoA > vespertinoA && matutinoA > noturnoA)
            printf("matutino\n");
        else if (vespertinoA > noturnoA)
            printf("vespertino\n");
        else
            printf("noturno\n");
    }
    else if (elevadorMaisFrequentado == 'B')
    {
        if (matutinoB > vespertinoB && matutinoB > noturnoB)
            printf("matutino\n");
        else if (vespertinoB > noturnoB)
            printf("vespertino\n");
        else
            printf("noturno\n");
    }
    else
    {
        if (matutinoC > vespertinoC && matutinoC > noturnoC)
            printf("matutino\n");
        else if (vespertinoC > noturnoC)
            printf("vespertino\n");
        else
            printf("noturno\n");
    }

    int totalServicosMinimo = totalServicosA;
    int totalServicosMaximo = totalServicosA;

    if (totalServicosB < totalServicosMinimo)
        totalServicosMinimo = totalServicosB;
    if (totalServicosC < totalServicosMinimo)
        totalServicosMinimo = totalServicosC;

    if (totalServicosB > totalServicosMaximo)
        totalServicosMaximo = totalServicosB;
    if (totalServicosC > totalServicosMaximo)
        totalServicosMaximo = totalServicosC;

    float diferencaPercentual = ((float)(totalServicosMaximo - totalServicosMinimo) / totalServicosMaximo) * 100;
    printf("A diferença percentual entre o mais usado e o menos usado é: %.2f%%\n", diferencaPercentual);

    int totalServicosMedio = 0;
    if ((totalServicosA >= totalServicosB && totalServicosA <= totalServicosC) || (totalServicosA >= totalServicosC && totalServicosA <= totalServicosB))
    {
        totalServicosMedio = totalServicosA;
    }
    else if ((totalServicosB >= totalServicosA && totalServicosB <= totalServicosC) || (totalServicosB >= totalServicosC && totalServicosB <= totalServicosA))
    {
        totalServicosMedio = totalServicosB;
    }
    else
    {
        totalServicosMedio = totalServicosC;
    }

    float percentagemMedioSobreTotal = ((float)totalServicosMedio / (50 * 2)) * 100;
    printf("A percentagem sobre o total de serviços do elevador de média utilização é: %.2f%%\n", percentagemMedioSobreTotal);

    return 0;
}
