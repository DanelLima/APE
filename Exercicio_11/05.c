#include <stdio.h>

float calcular(float raio, float pi)
{

    return (((4.00 / 3.00) * (pi)) * (raio * raio * raio));
}

main()
{
    float raio, pi, volume;

    printf("Digite o raio da esfera e o pi, separados por espaco:");
    scanf("%f %f", &raio, &pi);

    volume = calcular(raio, pi);

    printf("O volume da esfera eh: %.2f", volume);
}