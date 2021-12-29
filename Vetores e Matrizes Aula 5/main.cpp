#include <iostream>
#include <stdio.h>

int main()
{
   int quantidade;
   printf("Quantos numeros serao lidos: ");
   scanf("%d", &quantidade);
   int vetor[quantidade],vetor2[quantidade],i;
   for(i = 0; i<=quantidade;i++)
   {
       scanf("%d", &vetor[i]);
   }
   for(i = 0; i<=quantidade;i++)
   {
       if(vetor[i] % 2 == 0)
       {
           vetor2[i] = vetor[i+1];
       }else{
           vetor2[i] = vetor[i-1];
       }

   }
   printf("Vetor 1\n");
   for(i = 0; i<=quantidade;i++)
   {
       printf("%d\n", vetor[i]);
   }
   printf("\n Vetor 2 \n");
   for(i = 0; i<=quantidade;i++)
   {
       printf("%d\n", vetor2[i]);
   }
}
