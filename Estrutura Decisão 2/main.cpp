#include <iostream>
#include <stdio.h>

int main()
{// aninhamento
    int opcao;

    printf("Entre com um número inteiro: \n");
    scanf("%d", &opcao);

    if (opcao >= 0) {
        if (opcao == 0) {
            printf("\n Numero Nulo");
        }else
        printf("Número positivo \n");

    }else {
        printf("Número negativo \n");
    }
    }








