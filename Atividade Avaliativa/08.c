#include <stdio.h>

int main()
{

    float salario = 0;
    int filho = 0;
    float media_salario = 0;
    float maior_salario = 0;
    float media_filho = 0;
    float percentual_salario = 0;
    int num_habitante = 0;

    do
    {
        printf("Digite seu salario atual: R$");
        scanf("%f", &salario);

        if (salario >= 0)
        {
            printf("Digite quantos filhos voce possui: ");
            scanf("%d", &filho);

            media_filho += filho;
            media_salario += salario;
            num_habitante++;

            if (salario <= 100)
            {
                percentual_salario++;
            }

            if (salario > maior_salario)
            {
                maior_salario = salario;
            }
        }
    } while (salario >= 0);

    media_filho = media_filho / num_habitante;
    media_salario = media_salario / num_habitante;
    percentual_salario = (percentual_salario / num_habitante)*100;

    printf("a) A media do salario da populacao eh: R$%.2f\n", media_salario);
    printf("b) A media do numero de filhos da populacao eh: %.2f\n", media_filho);
    printf("c) O maior salario eh: R$%.2f\n", maior_salario);
    printf("d) O percentual de pessoas com salario de ate R$100,00 eh: %.2f%%\n", percentual_salario);

    return 0;
}