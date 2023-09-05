#include<stdio.h>
#include<locale.h>

int main(){

    setlocale(LC_ALL,"portuguese");

    int idade,tempoServico;

    printf("Diga sua idade: ");
    scanf("%d",&idade);


    printf("Diga o seu tempo de serviço em anos: ");
    scanf("%d",&tempoServico);

    if (idade>=65 || (idade >= 60 && tempoServico >= 25) || tempoServico>=30){

        printf("Você já pode se aposentar.");

    } else{

        printf("Ainda não pode se aposentar.");

    }

    return 0;

}