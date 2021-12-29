#include <iostream>
#include <stdio.h>
#include <string.h>

int main()
{
    int inteiros[10],i;
    for(i = 0; i<=10; i++)
    {
        scanf("%d", &inteiros[i]);

    }
    printf("Numeros digitados de forma invertida");
    for(i = 10; i>=0;i--)
    {
        printf("\n%d\n", inteiros[i]);
    }

}
