#include <iostream>
#include <stdio.h>

int main()
{ // encadeamento
    int opcao;

    printf("Entre com um número inteiro: \n");
    scanf("%d", &opcao);

    if (opcao > 0) {
        printf("Número positivo \n");
    }else if(opcao == 0){
        printf("\n Número nulo");
    } else {
        printf("Número negativo \n");
    }
}
