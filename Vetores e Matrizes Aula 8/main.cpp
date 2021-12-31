#include <iostream>
#include <stdio.h>
int main()
{
  int i,i2,matriz[3][4],pares = 0,impares = 0;
  for(i = 0; i<3;i++)
  {
      for (i2=0;i2<4;i2++)
      {
          printf("Insira os valores do vetor %d coluna %d : ",i, i2);
          scanf("%d", &matriz[i][i2]);
          if(matriz[i][i2] % 2 == 0)
          {
              pares++;
          }else
          {
              impares++;
          }
      }
  }
  printf("\nForam digitados %d pares\n",pares);
  printf("Foram digitados %d impares\n",impares);
}
