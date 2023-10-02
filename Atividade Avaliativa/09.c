#include <stdio.h>

int main()
{
    int codigo;
    int candidato1 = 0;
    int candidato2 = 0;
    int candidato3 = 0;
    int candidato4 = 0;
    int nulos = 0;
    int em_branco = 0;

    do
    {
        printf("Digite o código do voto (1, 2, 3, 4, 5 ou 6, ou 0 para encerrar a contagem): ");
        scanf("%d", &codigo);

        switch (codigo)
        {
        case 1:
            candidato1++;
            break;
        case 2:
            candidato2++;
            break;
        case 3:
            candidato3++;
            break;
        case 4:
            candidato4++;
            break;
        case 5:
            nulos++;
            break;
        case 6:
            em_branco++;
            break;
        }
    } while (codigo != 0);

    printf("Total de votos para o Candidato 1: %d\n", candidato1);
    printf("Total de votos para o Candidato 2: %d\n", candidato2);
    printf("Total de votos para o Candidato 3: %d\n", candidato3);
    printf("Total de votos para o Candidato 4: %d\n", candidato4);
    printf("Total de votos nulos: %d\n", nulos);
    printf("Total de votos em branco: %d\n", em_branco);

    return 0;
}
