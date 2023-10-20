#include <stdio.h>

meses(int num)
{
    switch (num)
    {
    case 1:
        return printf("Janeiro");
        break;
    case 2:
        return printf("Fevereiro");
        break;
    case 3:
        return printf("Marco");
        break;
    case 4:
        return printf("Abril");
        break;
    case 5:
        return printf("Maio");
        break;
    case 6:
        return printf("Junho");
        break;
    case 7:
        return printf("Julho");
        break;
    case 8:
        return printf("Agosto");
        break;
    case 9:
        return printf("Setembro");
        break;
    case 10:
        return printf("Outubro");
        break;
    case 11:
        return printf("Novembro");
        break;
    case 12:
        return printf("Dezembro");
        break;
    }
}

main()
{
    int numb;

    printf("Digite o numero correspodente ao mes: ");
    scanf("%d", &numb);

    printf("O mes digitado foi ");
    meses(numb);
}