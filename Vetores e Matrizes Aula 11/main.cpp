#include <iostream>
#include <stdio.h>
int main()
{
   int i,i2,matriz[3][3],maior,num,contmaior;
   maior = 0;
   num = 0;
   contmaior = 0;
   for(i = 0; i<4 ;i++)
   {
       for(i2 =0; i2 < 4; i2++)
       {
           printf("Insira valores na matriz, linha %d, coluna %d: ",i,i2);
           scanf("%d", &num);
           matriz[i][i2] = num;
           if(num > maior)
           {
               maior = num;
           }
       }
   }
   for(i = 0; i<4 ;i++)
   {
       for(i2 =0; i2 < 4; i2++)
       {
           if(matriz[i][i2] == maior)
           {
               contmaior++;
           }
       }
   }
   printf("\nMaior número: %d\n",maior);
   printf("\n Quantas vezes apareceu: %d",contmaior);
}
