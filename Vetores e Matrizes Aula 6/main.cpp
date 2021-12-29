#include <iostream>
#include <stdio.h>

int main()
{
   int quantidade;
   printf("Insira quantos numeros positivos serao lidos: ");
   scanf("%d", &quantidade);
   int i,i2,vetor[quantidade],contem,achou,naoachou,posvet,numerosaserlidos = 10;

   for (i = 0; i<quantidade; i++)
   {
       printf("\n\nInsira o valor %d: ", i);
       scanf("%d", &vetor[i]);
       if(vetor[i] < 0)
       {
           printf("Voce inseriu um valor invalido");
           return 0;
       }
   }
   printf("\n\nTente achar o valor no vetor que voce criou\n\n");
   for (i2 = 0; i2<10; i2++)
   {
    achou = 0;
    posvet = 0;
    naoachou = 0;
    while (achou == 0 && naoachou == 0)
    {
        printf("\n\nInsira um valor para ser procurado: ");
        scanf("%d", &contem);
        for (i = 0; i<quantidade; i++)
        {
            if(vetor[i] == contem)
            {
                posvet = i;
                achou++;
                printf("\n\nEsse valor foi achado na posicao %d\n", posvet);
            }else{
            naoachou++;
            }

        }
        if(naoachou > 0 && achou ==0)
        {
            printf("\n\nVALOR NAO ENCONTRADO\n");
        }

    }

   }
return 0;
}
