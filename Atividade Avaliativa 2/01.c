#include <stdio.h>

float validaQuantidade(int qtd)
{
    if (qtd > 50 && qtd <= 80)
    {
        float adicional = (qtd - 50) * 0.5;
        return adicional;
    }
    else if (qtd > 80)
    {
        float adicional = 30 * 0.5;
        adicional += (qtd - 80) * 0.75;
        return adicional;
    }
    else
    {
        return 0;
    }
}
float calculaSalario(float adicional)
{
    float salario = 600 + adicional;
    return salario;
}
void mostraFinal(float salario)
{
    printf("O salario final eh de R$%.2f.\n", salario);
}
int main()
{
    int count = 1;
    printf("\n!PARA CANCELAR A EXECUCAO DO PROGRAMA DIGITE -1 NA QUANTIDADE DE PECAS!\n");
    while (1)
    {
        int qtd;
        printf("\nDigite quantas pecas o funcionario %d produziu: ", count);
        scanf("%d", &qtd);
        float adicional = validaQuantidade(qtd);
        float salario = calculaSalario(adicional);
        mostraFinal(salario);
        count++;
        if (qtd == -1)
        {
            break;
        }
        
    }
    printf("\n!PROGRAMA ENCERRADO!\n");
    return 0;
}