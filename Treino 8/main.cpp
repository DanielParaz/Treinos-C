#include <stdio.h>

using namespace std;

int main()
{
    float nota1 = 0,nota2 = 0,nota3 = 0,soma,media;
    int i=0,quantidade,alunos=0;
    printf("Insira quantos alunos serao lidas as notas: ");
    scanf("%d", &quantidade);
    while(i < quantidade){
        soma = 0;
        media = 0;
        printf("\n\nInsira a nota 1 do aluno %d: ",i);
        scanf("%f", &nota1);
        printf("\n\nInsira a nota 2 do aluno %d: ",i);
        scanf("%f", &nota2);
        printf("\n\nInsira a nota 1 do aluno %d: ",i);
        scanf("%f", &nota3);
        soma = nota1+nota2+nota3;
        media = soma/3;
        if(media > 7){
            printf("\n\nA media do aluno %d foi %.2f e ele foi aprovado!\n\n",i,media);
        }else{
            printf("\n\nA media do aluno %d foi %.2f e ele foi reprovado!\n\n",i,media);
        }
        i++;
    }
}
