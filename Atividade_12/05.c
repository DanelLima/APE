#include <stdio.h>

void converterIdade(int idade, int *anos, int *meses, int *dias)
{
    *anos = idade / 365;
    *meses = (idade % 365) / 30;
    *dias = (idade % 365) % 30;
}

int main()
{
    int idade, anos, meses, dias;

    printf("Digite a idade da pessoa em anos: ");
    scanf("%d", &idade);

    converterIdade(idade, &anos, &meses, &dias);

    printf("Idade em dias, meses e anos: %d anos, %d meses, %d dias\n", anos, meses, dias);

    return 0;
}
