#include <stdio.h>

int main()
{
    char nome[50], sexo;
    float altura, peso;
    int numHomens = 0, numMulheres = 0;
    float somaAlturaHomens = 0, somaAlturaMulheres = 0, somaAlturaGrupo = 0;
    float somaPesoHomens = 0, somaPesoMulheres = 0, somaPesoGrupo = 0;

    for (int i = 1; i <= 10; i++)
    {

        printf("\nDados da pessoa %d:\n", i);

        printf("Nome: ");
        scanf("%s", nome);

        printf("Sexo (M/F): ");
        scanf(" %c", &sexo);

        printf("Altura (em metros): ");
        scanf("%f", &altura);

        printf("Peso (em quilogramas): ");
        scanf("%f", &peso);

        if (sexo == 'M' || sexo == 'm')
        {
            numHomens++;
            somaAlturaHomens += altura;
            somaPesoHomens += peso;
        }
        else if (sexo == 'F' || sexo == 'f')
        {
            numMulheres++;
            somaAlturaMulheres += altura;
            somaPesoMulheres += peso;
        }
        else
        {
            printf("Sexo inválido. Tente novamente.\n");
            i--;
        }

        somaAlturaGrupo += altura;
        somaPesoGrupo += peso;
    }

    float alturaMediaHomens = (numHomens > 0) ? somaAlturaHomens / numHomens : 0;
    float alturaMediaMulheres = (numMulheres > 0) ? somaAlturaMulheres / numMulheres : 0;
    float alturaMediaGrupo = (numHomens + numMulheres > 0) ? somaAlturaGrupo / (numHomens + numMulheres) : 0;

    float pesoMediaHomens = (numHomens > 0) ? somaPesoHomens / numHomens : 0;
    float pesoMediaMulheres = (numMulheres > 0) ? somaPesoMulheres / numMulheres : 0;
    float pesoMediaGrupo = (numHomens + numMulheres > 0) ? somaPesoGrupo / (numHomens + numMulheres) : 0;

    printf("\nResultados:\n");
    printf("Número de homens: %d\n", numHomens);
    printf("Número de mulheres: %d\n", numMulheres);

    printf("Altura média dos homens: %.2f metros\n", alturaMediaHomens);
    printf("Altura média das mulheres: %.2f metros\n", alturaMediaMulheres);
    printf("Altura média do grupo: %.2f metros\n", alturaMediaGrupo);

    printf("Peso médio dos homens: %.2f kg\n", pesoMediaHomens);
    printf("Peso médio das mulheres: %.2f kg\n", pesoMediaMulheres);
    printf("Peso médio do grupo: %.2f kg\n", pesoMediaGrupo);

    return 0;
}
