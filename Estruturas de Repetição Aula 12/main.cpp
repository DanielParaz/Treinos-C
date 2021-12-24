#include <iostream>
#include <stdio.h>

int main()
{
    int quantidade,num;
    printf("Insira a quantidade de numeros que serão lidos: \n\n");
    scanf("%d", &quantidade);
    do
    {
        printf("Insira um numero diferente de 0 ou 9: ");
        scanf("%d", &num);
        if((num % 2 == 0) && (num!=0) && (num != 9))
        {
            printf("\nSucessor %d\n", num+1);

        }if((num % 2 !=0) && (num != 0) && (num != 9))
        {
            printf("\nAntecessor %d\n", num-1);
        }
        quantidade--;
    }while( (num != 0) && (num !=9) && (quantidade !=0) );
    return 0;
}
