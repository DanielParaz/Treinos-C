#include <iostream>
#include <stdio.h>

int main()
{
    int i,numeros, leitura, somapares,somaimpares;
    printf("Digite quantos números vão ser lidos: ");
    scanf("%d", &leitura);
    somaimpares = 0;
    somapares = 0;
    for(i = 0; i < leitura; i++){
        printf("\nDigite os números abaixo: \n");
        scanf("%d", &numeros);
        if(numeros % 2 == 0){
            somapares = somapares + numeros;
        }else {
            somaimpares = somaimpares + numeros;
        }
    }
    printf("A soma dos valores pares digitados foi: %d\n", somapares);
    printf("A soma dos valores impares digitados foi: %d\n", somaimpares);
}
