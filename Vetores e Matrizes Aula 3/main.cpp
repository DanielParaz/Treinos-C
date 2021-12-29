#include <iostream>
#include <stdio.h>

int main()
{
     int quantidade = 0;
     float soma = 0,media = 0;
     int i;
     printf("Insira quantas notas irão ser lidas: ");
     scanf("%d", &quantidade);
     float nota[quantidade];
     for(i = 0; i<quantidade;i++)
     {
         printf("\n Insira a nota do aluno %d\n", i);
         nota[i] = 0;
         scanf("%f", &nota[i]);
         soma = soma + nota[i];
         if(nota[i] > 10)
         {
             printf("\nNota inserida invalida\n");
             return 0;
         }
         if(nota[i] < 0)
         {
             printf("\nNota Inserida invalida\n");
             return 0;
         }
     }
     media = soma / quantidade;
     printf("\n a media e: %.2f", media);
     for(i = 0; i<quantidade;i++)
     {
         if(nota[i] > media)
         {
             printf("\nA nota do aludo %d foi %.2f e ele foi aprovado\n", i,nota[i]);
         }else
         {
             printf("\nA nota do aluno %d foi %.2f e ele foi reprovado\n", i, nota[i]);
         }
     }

}
