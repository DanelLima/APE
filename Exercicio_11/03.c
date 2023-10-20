#include <stdio.h>

float converter(float F)
{
    return (F - 32.00) * (5.00 / 9.00);
}

main()
{

    float F, celsius;

    printf("Digite a temperatura em fahrenheit: ");
    scanf("%f", &F);

    celsius = converter(F);

    printf("%.2f graus fahrenheit eh o mesmo que %.2f graus celsius.", F, celsius);
}