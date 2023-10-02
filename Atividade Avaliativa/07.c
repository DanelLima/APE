#include <stdio.h>

int main()
{

    int alunos = 30;
    float nota;
    float media_geral;
    float n1, n2, n3;

    for (int i = 1; i <= alunos; i++)
    {
        printf("Digite as notas do aluno %d (nota 1, nota 2, nota 3): ", i);
        scanf("%f %f %f", &n1, &n2, &n3);

        nota = (n1 + n2 + n3) / 3;

        if (nota >= 7)
        {
            printf("Aprovado\n\n");
        }
        else
        {
            printf("Reprovado\n\n");
        }

        media_geral += nota;
    }

    media_geral = (media_geral) / 30;

    printf("A media geral da turma eh: %.2f", media_geral);

    return 0;
}
