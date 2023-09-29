#include <stdio.h>

int main(){

    int alunos = 30;
    float notas[alunos];
    float mediaTotal;

    for (int i = 0; i <= alunos; i++)
    {
        float n1, n2, n3;
        printf("Digite as notas do aluno %d (nota 1, nota 2, nota 3):",i);
        scanf("%f %f %f",&n1, &n2, &n3);

        notas[i]=(n1+n2+n3)/3;
    }

    for (int i = 0; i <= alunos; i++)
    {

        if (notas[1]>=7)
        printf("Aluno %d:",i);
        printf("Aprovado\n",i);
        

        notas[i]=(n1+n2+n3)/3;
    }
    

    return 0;
    
}
