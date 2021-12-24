#include <iostream>
#include <stdio.h>

int main()
{
   float nota1,nota2,nota3,media;
   int i,aprovados,reprovados;
   char aluno[40];
   aprovados = 0;
   reprovados = 0;
   printf("Digite quantos alunos contem na sua turma: ");
   scanf("%d", &i);
   while(i !=0){
    media = 0;
    printf("\nDigite o nome do aluno: \n");
    scanf("%s", &aluno);
    printf("\nDigite a nota da prova 1 do aluno: \n");
    scanf("%f", &nota1);
    printf("\nDigite a nota da 2 prova do aluno: \n");
    scanf("%f", &nota2);
    printf("\nDigite a nota da 3 prova do aluno: \n");
    scanf("%f", &nota3);
    media = (nota1+nota2+nota3)/3;
    if(media > 7){
        printf("\nO aluno %s foi aprovado e sua media foi %.2f\n", aluno, media);
        aprovados++;
    }else{
        printf("\nO aluno %s foi reprovado e sua media foi %.2f\n", aluno,media);
        reprovados++;
    }
    i--;
   }
   printf("Foram reprovados %d, e foram aprovados %d alunos\n",reprovados, aprovados);
}
