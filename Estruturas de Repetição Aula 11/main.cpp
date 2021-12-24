#include <iostream>
#include <stdio.h>

int main()
{
    int num,bigger,quantidade;
    printf("Insira quantos numeros serao lidos\n\n");
    scanf("%d", &quantidade);
    bigger = 0;
    do
    {
        printf("\n\nInsira um numero para ser lido: ");
        scanf("%d", &num);
        if(num>bigger){
            bigger = num;
        }
        quantidade--;
    }while(quantidade !=0);
    printf("\nO maior numero inserido foi: %d", bigger);
}
