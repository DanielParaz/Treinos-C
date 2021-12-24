#include <iostream>
#include <stdio.h>

int main()
{
   int num;
   printf("Digite um numero: ");
   scanf("%d", &num);

   while(num !=0){
    printf("\nO numero lido foi: %d\n",num);
    printf("\nDigite um numero: ");
    scanf("%d", &num);

   }
}
