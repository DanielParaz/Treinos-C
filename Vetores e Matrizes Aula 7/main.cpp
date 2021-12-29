#include <iostream>
#include <stdio.h>

int main()
{
   int quantidade,i;
   printf("\nInsira quantos alunos voce tem: ");
   scanf("%d", &quantidade);
   float notas1[quantidade],notas2[quantidade], notas3[quantidade],media1=0,soma1=0,soma2=0,soma3=0,somaturma=0,mediaturma=0,media2=0,media3=0;
   float aluno = 0,mediaaluno = 0;
   for(i= 0; i < quantidade;i++)
   {
       printf("\nInsira a nota da prova 1 do aluno %d\n", i+1);
       scanf("%f", &notas1[i]);
       soma1 = soma1+notas1[i];
       if(notas1[i] > 10 || notas1[i] < 0)
       {
           printf("\nNota invalida\n");
           return 0;
       }
       printf("\nInsira a nota da prova 2 do aluno %d\n", i+1);
       scanf("%f", &notas2[i]);
       soma2 = soma2+notas2[i];
       if(notas2[i] > 10 || notas2[i] < 0)
       {
           printf("\nNota invalida\n");
           return 0;
       }
       printf("\nInsira a nota da prova 3 do aluno %d\n", i+1);
       scanf("%f", &notas3[i]);
       soma3 = soma3+notas3[i];
       if(notas3[i] > 10 || notas3[i] < 0)
       {
           printf("\nNota invalida\n");
           return 0;
       }
   }
   media1 = soma1/quantidade;
   printf("\n\nA media da prova 1 foi: %.2f\n\n", media1);
   media2 = soma2/quantidade;
   printf("\n\nA media da prova 2 foi: %.2f\n\n", media2);
   media3 = soma3/quantidade;
   printf("\n\nA media da prova 3 foi: %.2f\n\n", media3);

   for(i = 0; i < quantidade; i++)
   {
       aluno = 0;
       mediaaluno = 0;
       aluno = notas1[i] + notas2[i] + notas3[i];
       mediaaluno = aluno / 3;
       printf("\n\nA media do aluno %d foi %.2f\n\n",i+1, mediaaluno);
   }
   mediaturma = media1+media2+media3;

   mediaturma = mediaturma/3;
   printf("\n\n A media da Turma foi: %.2f \n\n", mediaturma);
}
