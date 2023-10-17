#include <stdio.h>

int maior(int n1, int n2)
{
    if (n1 >= n2)
    {
        return n1;
    }
    else
    {
        return n2;
    }
}

int main()
{
    int numb1, numb2, big;

    printf("Digite o primeiro numero: ");
    scanf("%d", &numb1);

    printf("Digite o segundo numero: ");
    scanf("%d", &numb2);

    big = maior(numb1, numb2);

    printf("O maior numero digitado foi: %d", big);

    return 0;
}