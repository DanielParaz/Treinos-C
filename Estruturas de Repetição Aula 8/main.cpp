#include <iostream>
#include <stdio.h>

int main()
{
    int i,num,bigger;
    printf("Quantos n�meros ser�o inseridos: ");
    scanf("%d", &i);
    bigger = 0;
    while(i != 0)
    {
        printf("\nInsira um n�mero\n");
        scanf("%d", &num);
        if(num>bigger){
            bigger = num;
        }
        i--;
    }
    printf("\nO maior n�mero �: %d", bigger);
}
