#include <stdio.h>

float calcular(float altura, float raio)
{

    return ((3.141592) * (raio * raio) * altura);
}

main()
{
    float altura, raio, volume;

    printf("Digite a altura e raio do cilindo, separados por espaco:");
    scanf("%f %f", &altura, &raio);

    volume = calcular(altura, raio);

    printf("O volume do cilindro eh: %.2f", volume);
}