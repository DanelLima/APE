#include<stdio.h>

int main(){

    char sexo,olho,cabelo;
    int idade, total = 0, parteF = 0;
    float salario,por100;

    while (1)
    {
        printf("\nDiga o seu sexo (m para masculino e f para feminino): ");
        scanf(" %c",&sexo); 
        setbuf(stdin,NULL);

        if (sexo == 'm' || sexo == 'f' ){

            printf("\nDiga a cor do seu olho (a (azuis), v (verdes), c (castanhos), p (pretos)): ");
            scanf("%c",&olho);  
            setbuf(stdin,NULL);

            if (olho == 'a' || olho == 'v' || olho == 'c' || olho == 'p'){

                printf("\nDiga a cor do seu cabelo (l (loiros), c (castanhos), p (pretos), r (ruivos)): ");
                scanf("%c",&cabelo); 
                setbuf(stdin,NULL);

                if (cabelo == 'l' || cabelo == 'c' || cabelo == 'p' || cabelo == 'r') {

                    printf("\nDiga a sua idade: ");
                    scanf("%d",&idade);
                    setbuf(stdin,NULL);

                    if (idade==-1){break;}

                    if (idade > 10 && idade < 100){
                        
                        printf("\nDiga o seu salario: R$");
                        scanf("%f",&salario);
                        setbuf(stdin,NULL);

                        if (salario>0){

                            if (sexo == 'f' && (idade > 18 && idade < 35) && olho == 'c' && cabelo == 'c')
                            {parteF++;total++;} else {total++;}

                        }else{printf("\nInformação não aceita");}

                    }else {printf("\nInformação não aceita");}
                    
                }else {printf("\nInformação não aceita");}

            }else {printf("\nInformação não aceita");}

        } else {printf("\nInformação não aceita");} 

    }

    por100 = ((float)parteF / total);
    por100 = por100 * 100;

    printf("\nA porcentagem de indivíduos do sexo feminino, com idade entre 18 e 35 anos e que tenham olhos castanhos e cabelos castanhos eh: %.1f%%",por100);

    return 0; 

}