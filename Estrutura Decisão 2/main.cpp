#include <iostream>
#include <stdio.h>

int main()
{// aninhamento
    int opcao;

    printf("Entre com um n�mero inteiro: \n");
    scanf("%d", &opcao);

    if (opcao >= 0) {
        if (opcao == 0) {
            printf("\n Numero Nulo");
        }else
        printf("N�mero positivo \n");

    }else {
        printf("N�mero negativo \n");
    }
    }








