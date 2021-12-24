#include <iostream>
#include <stdio.h>

int main()
{
   int i,aprovados,qntalunos, reprovados;
   float media,nota1,nota2,nota3, soma;
   aprovados = 0;
   reprovados = 0;
   soma = 0;
   printf("Quantos alunos participam dessa classe: ");
   scanf("%d", &qntalunos);
   for(i = 1; i <= qntalunos;i++){
    media = 0;
    printf("Insira a nota 1 dos alunos: ");
    scanf("%f", &nota1);
    printf("Insira a nota 2 dos alunos: ");
    scanf("%f", &nota2);
    printf("Insira a nota 3 dos alunos: ");
    scanf("%f", &nota3);
    soma = nota1+nota2+nota3;
    media = soma / 3;
    if (nota1,nota2,nota3 > 10){
        printf("Nota inválida");
        return 0;
    }
    if(media >= 7){
        printf("A media do aluno e %.2f e O aluno %d foi aprovado\n",media,i);
        aprovados++;
    }else {
        printf("A media do aluno e %.2f e O aluno %d nao foi aprovado\n",media,i);
        reprovados++;
    }
   }
   printf("%d Alunos foram aprovados\n e \n%d Alunos foram reprovados", aprovados,reprovados);
}
