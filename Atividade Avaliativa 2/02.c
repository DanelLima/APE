#include <stdio.h>

int aCima = 0;
int aBaixo = 0;

int classificasalario(float salario)
{
    if (salario == 1400)
    {
        return 0;
    }
    else if (salario > 1400)
    {
        return 1;
    }
    else
    {
        return -1;
    }
}

void mostraClassifica(int classificacao)
{
    if (classificacao == 1)
    {
        printf("Salario acima do salario minimo.\n");
        aCima++;
    }
    else if (classificacao == -1)
    {
        printf("Salario abaixo do salario minimo.\n");
        aBaixo++;
    }
    else
    {
        printf("Salario igual ao salario minimo.\n");
    }
}

int validaSexo(char sexo)
{
    if (sexo == 'F' || sexo == 'M')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int validaSalario(float salario)
{
    if (salario > 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int count = 1;

    printf("PROGAMA DE CLASSIFICACAO DE ASSALARIADOS\n");
    printf("!PARA ENCERRAR A EXECUCAO DO PROGRAMA DIGITE DADOS INVALIDOS!\n");

    while (1)
    {
        char sexo;
        float salario;

        printf("\nDigite o sexo do assalariado %d (F para feminino e M para masculino): ", count);
        scanf(" %c", &sexo);

        printf("Digite o salario do assalariado %d (deve ser maior do que 1 real): ", count);
        scanf("%f", &salario);

        if (validaSalario(salario) && validaSexo(sexo))
        {
            int classificacao;
            classificacao = classificasalario(salario);
            mostraClassifica(classificacao);
            count++;
        }
        else
        {
            printf("\n!DADOS INVALIDOS!\n");
            printf("!PROGRAMA ENCERRADO!\n");
            break;
        }
    }

    printf("%d recebem acima do salario minimo e %d recebem abaixo.\n", aCima, aBaixo);
    return 0;
}
