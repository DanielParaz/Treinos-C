#include <iostream>
#include <stdio.h>

int main()
{ // encadeamento
    int opcao;

    printf("Entre com um n�mero inteiro: \n");
    scanf("%d", &opcao);

    if (opcao > 0) {
        printf("N�mero positivo \n");
    }else if(opcao == 0){
        printf("\n N�mero nulo");
    } else {
        printf("N�mero negativo \n");
    }
}
