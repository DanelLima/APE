#include<stdio.h>
#include<locale.h>

int main(){

    setlocale(LC_ALL,"portuguese");

    float salario,tempoServico,salarioNovo;

    printf("Diga seu salário: R$");
    scanf("%f",&salario);


    printf("Diga o seu tempo de serviço em anos: ");
    scanf("%f",&tempoServico);

    if (salario <= 500){

        salarioNovo = salario*1.25;

    } else if(salario <= 1000){

        salarioNovo = salario*1.20;

    } else if(salario <= 1500){

        salarioNovo = salario*1.15;

    } else if(salario <= 2000){

        salarioNovo = salario*1.10;

    } else if(salario > 2000){

        salarioNovo = salario;

    }

    if(tempoServico >= 1 && tempoServico <= 3){

        salarioNovo+=100;

    } else if(tempoServico >= 4 && tempoServico <= 6){

        salarioNovo+=200;

    } else if(tempoServico >= 7 && tempoServico <= 10){

        salarioNovo+=300;
        
    } else if(tempoServico > 10){

        salarioNovo+=500;

    }

    printf("O novo salário com os reajuste fica: R$%.2f",salarioNovo);

    return 0;

}