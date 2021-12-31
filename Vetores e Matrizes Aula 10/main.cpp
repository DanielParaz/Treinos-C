#include <iostream>
#include <stdio.h>
int main()
{
    int i,i2,matriz[4][4],matriz2[4][4];
    for(i = 0; i<4;i++)
    {
        for(i2 = 0; i2<4;i2++)
        {
            printf("Insira o valor da matriz linha %d coluna %d : ",i,i2);
            scanf("%d", &matriz[i][i2]);
            matriz2[i2][i] = matriz[i][i2];
        }
    }
    printf("--------------Matriz 1 abaixo--------------");
    for(i = 0;i<4;i++)
    {
         for(i2 = 0;i2<4;i2++)
        {
            printf("\n\nLinha %d coluna %d : %d\n\n",i,i2,matriz[i][i2]);
        }
    }
     printf("--------------Matriz 2 abaixo--------------");
    for(i = 0;i<4;i++)
    {
         for(i2 = 0;i2<4;i2++)
        {
            printf("\n\nLinha %d coluna %d : %d\n\n",i,i2,matriz2[i][i2]);
        }
    }
}
