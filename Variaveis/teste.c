#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    int num_caractere = 0;
    int num_decimal = 0;
    int contador = 0;
    char num_binario[14];

    printf("Digite o número binário (até 12 dígitos): ");
    scanf("%s", &num_binario);

    while (num_binario[num_caractere] == '1' || num_binario[num_caractere] == '0')
    {
        num_caractere += 1;
    }

    while (num_caractere != -1)
    {
        if (num_binario[contador] == '1')
        {
            num_decimal += pow(2, num_caractere - 1);
        }
        contador += 1;
        num_caractere -= 1;
    }

    printf("%d", num_decimal);

    return 0;
}
