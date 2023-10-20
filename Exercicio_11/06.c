#include <stdio.h>

float calcular(float peso, float altura)
{

    return (peso / (altura * altura));
}

main()
{
    float peso, altura, imc;

    printf("Digite o peso a altura, separados por espaco: ");
    scanf("%f %f", &peso, &altura);

    imc = calcular(peso, altura);

    printf("O IMC eh: %.2f", imc);
}