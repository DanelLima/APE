#include <stdio.h>

int main()
{

    int vetor[11], qtd = 0, soma = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("Digite o numero da posicao %d do vetor: ", i);
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        if (vetor[i] < 0)
        {
            qtd++;
        }
        else
        {
            soma += vetor[i];
        }
    }

    printf("Voce digitou %d numeros negativos.\nA soma dos numeros positivos eh %d.", qtd, soma);

    return 0;
}