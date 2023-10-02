#include <stdio.h>

int main()
{
    int codigo;
    char estado[3];
    int num_veiculos;
    int num_acidentes;
    float indice;

    float media_veiculos = 0;
    float media_acidentes_rs = 0;
    int num_cidades_rs = 0;
    int num_acidentes_rs = 0;
    float maior_indice = 0;
    float menor_indice = 100000000;
    int cidade_maior_indice = 0;
    int cidade_menor_indice = 0;

    for (int i = 0; i < 2; i++)
    {
        printf("\n\nInforme os dados da cidade %d:\n", i + 1);
        printf("Codigo da cidade: ");
        scanf("%d", &codigo);
        printf("Estado: ");
        scanf("%s", estado);
        printf("Numero de veiculos de passeio em 1992: ");
        scanf("%d", &num_veiculos);
        printf("Numero de acidentes de transito com vitimas em 1992: ");
        scanf("%d", &num_acidentes);

        indice = (float)num_acidentes / num_veiculos;

        if (indice > maior_indice)
        {
            maior_indice = indice;
            cidade_maior_indice = codigo;
        }

        if (indice < menor_indice)
        {
            menor_indice = indice;
            cidade_menor_indice = codigo;
        }

        media_veiculos += num_veiculos;

        if (estado[0] == 'R' && estado[1] == 'S')
        {
            num_cidades_rs++;
            num_acidentes_rs += num_acidentes;
        }
    }

    media_veiculos = media_veiculos / 2;
    maior_indice = maior_indice * 100;
    menor_indice = menor_indice * 100;

    if (num_cidades_rs > 0)
    {
        media_acidentes_rs = (float)num_acidentes_rs / num_cidades_rs;
    }

    printf("\n\na) O maior indice de acidentes eh de %.2f%% e pertence a cidade %d.\n", maior_indice, cidade_maior_indice);
    printf("O menor indice de acidentes eh de %.2f%% e pertence a cidade %d.\n", menor_indice, cidade_menor_indice);
    printf("b) A media de veiculos nas cidades brasileiras eh de %.0f.\n", media_veiculos);

    if (num_cidades_rs > 0)
    {
        printf("c) A media de acidentes com vitimas entre as cidades do Rio Grande do Sul eh de %.0f.\n", media_acidentes_rs);
    }
    else
    {
        printf("c) Nao ha cidades do Rio Grande do Sul no conjunto de dados.\n");
    }

    return 0;
}
