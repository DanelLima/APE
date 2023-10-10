#include <stdio.h>

int main()
{

    int vetor[11], seExiste = 0, quaisSao[6], count = 0, seTem = 1;

    for (int i = 0; i < 10; i++)
    {
        printf("Digite o numero da posicao %d do vetor: ", i);
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if (vetor[i] == vetor[j])
            {
                seExiste = 1;

                for (int k = 0; k < count; k++)
                {
                    if (quaisSao[k] == vetor[i])
                    {
                        seTem = 0;
                    }
                }

                if (seTem)
                {
                    quaisSao[count] = vetor[i];
                    count++;
                }

                seTem = 1;
            }
        }
    }

    if (seExiste)
    {
        for (int i = 0; i <= count; i++)
        {
            printf("%d ", vetor[i]);
        }
    }

    return 0;
}