#include <iostream>
#include <stdio.h>

int main()
{
    int i,num,bigger;
    printf("Quantos números serão inseridos: ");
    scanf("%d", &i);
    bigger = 0;
    while(i != 0)
    {
        printf("\nInsira um número\n");
        scanf("%d", &num);
        if(num>bigger){
            bigger = num;
        }
        i--;
    }
    printf("\nO maior número é: %d", bigger);
}
