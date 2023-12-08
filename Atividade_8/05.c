#include <stdio.h>
#include <string.h>

struct Pessoa
{
    char nome[50];
    int idade;
    char sexo;
    int voto;
};

const char *obterNomeJogadora(int numero)
{
    switch (numero)
    {
    case 1:
        return "Sam Kerr - Austrália";
    case 2:
        return "Alex Morgan - USA";
    case 3:
        return "Dzsenifer Marozsan - Alemanha";
    case 4:
        return "Amandine Henry - França";
    case 5:
        return "Marta Vieira - Brasil";
    default:
        return "Jogadora Desconhecida";
    }
}

int main()
{
    struct Pessoa entrevistados[300];
    int totalEntrevistados = 0;
    int votos[6] = {0};
    int maiorVotos = 0;

    while (totalEntrevistados < 300)
    {
        printf("Digite o nome: ");
        scanf("%s", entrevistados[totalEntrevistados].nome);

        printf("Digite a idade: ");
        scanf("%d", &entrevistados[totalEntrevistados].idade);

        if (entrevistados[totalEntrevistados].idade <= 12)
        {
            printf("A idade deve ser maior que 12 anos. Tente novamente.\n");
            continue;
        }

        printf("Digite o sexo (M/F): ");
        scanf(" %c", &entrevistados[totalEntrevistados].sexo);

        if (entrevistados[totalEntrevistados].sexo != 'M' && entrevistados[totalEntrevistados].sexo != 'F')
        {
            printf("Sexo inválido. Tente novamente.\n");
            continue;
        }

        printf("Digite o número do voto (1 a 5): ");
        scanf("%d", &entrevistados[totalEntrevistados].voto);

        if (entrevistados[totalEntrevistados].voto < 1 || entrevistados[totalEntrevistados].voto > 5)
        {
            printf("Voto inválido. Tente novamente.\n");
            continue;
        }

        votos[entrevistados[totalEntrevistados].voto]++;

        totalEntrevistados++;

        if (totalEntrevistados >= 50)
        {
            printf("\nRelatórios:\n");

            for (int i = 1; i <= 5; i++)
            {
                printf("Votos para %s: %d\n", obterNomeJogadora(i), votos[i]);
            }

            printf("\nJogadora(s) mais votada(s):\n");
            for (int i = 1; i <= 5; i++)
            {
                if (votos[i] == maiorVotos)
                {
                    printf("%s\n", obterNomeJogadora(i));
                }
                else if (votos[i] > maiorVotos)
                {
                    maiorVotos = votos[i];
                    printf("%s\n", obterNomeJogadora(i));
                }
            }

            printf("\nParticipantes da pesquisa separados por sexo, maior de idade e menor de idade:\n");
            for (int i = 0; i < totalEntrevistados; i++)
            {
                printf("Nome: %s, Idade: %d, Sexo: %c\n", entrevistados[i].nome, entrevistados[i].idade, entrevistados[i].sexo);
            }

            printf("\nPessoas maior de idade que votaram na Marta Vieira:\n");
            for (int i = 0; i < totalEntrevistados; i++)
            {
                if (entrevistados[i].idade >= 18 && entrevistados[i].voto == 5)
                {
                    printf("Nome: %s\n", entrevistados[i].nome);
                }
            }

            printf("\nQuantidade de mulheres que participaram da pesquisa: ");
            int mulheres = 0;
            for (int i = 0; i < totalEntrevistados; i++)
            {
                if (entrevistados[i].sexo == 'F')
                {
                    mulheres++;
                }
            }
            printf("%d\n", mulheres);

            break;
        }
        else
        {
            printf("\nAinda faltam entrevistar mais pessoas. Continue a pesquisa.\n\n");
        }
    }

    return 0;
}
