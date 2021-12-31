#include <iostream>
#include <stdio.h>
int main()
{
   int i,i2,matriz[5][5];
   for(i = 0;i<5;i++)
   {
       for(i2 = 0; i2<5;i2++)
       {
           matriz[i][i2] = 1;
           if(i == i2)
           {
               matriz[i][i2] = 0;
           }
            printf(" %d ",matriz[i][i2]);
           if(i2 == 4)
           {
               printf("\n");
           }
       }
   }
}
