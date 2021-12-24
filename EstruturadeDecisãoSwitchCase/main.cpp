#include <iostream>
#include <stdio.h>

int main()
{
    int opcao;

    printf("Entre com um número inteiro: \n");
    scanf("%d", &opcao);

    switch(opcao){
        case 1: {
            printf("\nNumero 1\n");
            break;
        }
        case 2: {
            printf("\nNumero 2\n");
            break;
        }
        default: printf("\Opçao Invalida\n");
    }

    printf("Final do programa.");

}
