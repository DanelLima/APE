#include<stdio.h>
#include<locale.h>
#include<math.h>

int main(){
    setlocale(LC_ALL,"portuguese");

    float numb,result;

    printf("Diga um número: ");
    scanf("%f",&numb);

    if (numb>=0){
        result=sqrt(numb);
        printf("\nA raiz quadrada de %.0f é aproximadamente %.0f.",numb,result);
    } else{
        result=pow(numb,2);
        printf("\nO quadrado de %.0f é %.0f.",numb,result);

    }

    return 0;

}