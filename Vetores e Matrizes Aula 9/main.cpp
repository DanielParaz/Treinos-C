#include <iostream>
#include <stdio.h>

int main()
{
    int i,i2,i3,matriz[4][4];
    for(i = 0; i<4;i++)
    {
       for(i2 = 0; i2<4;i2++)
       {
           printf("\nInsira valor do vetor %d coluna %d: ",i,i2);
           scanf("%d", &matriz[i][i2]);
           matriz[i2][i2] = 0;
       }
    }
    printf("\n\n Matrizes abaixo \n\n");
    for(i = 0;i<4;i++)
    {
        for(i2 = 0; i2<4; i2++)
        {
            printf("\n\nVetor %d Matriz %d : %d \n\n",i,i2,matriz[i][i2]);
        }

    }

}
