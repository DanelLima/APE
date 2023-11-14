#include <stdio.h>

int classificasalario(float salario)
{
}

void mostraClassifica()
{
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
    int aCima = 0;
    int aBaixo = 0;
    int count = 1;

    printf("PROGAMA DE CLASSIFICACAO DE ASSALARIADOS");
    printf("\n!PARA ENCERRAR A EXECUCAO DO PROGRAMA DIGITE DADOS INVALIDOS!\n");

    while (1)
    {
        char sexo;
        float salario;

        printf("\nDigite o sexo do assalariado %d (F para feminino e M para masculino): ", count);
        scanf("%c", &sexo);

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
            printf("\n!DADOS INVALIDOS!");
            printf("\n!PROGRAMA ENCERRADO!");
        }
    }
    return 0;
}