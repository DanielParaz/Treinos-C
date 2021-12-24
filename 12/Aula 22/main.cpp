#include <iostream>
#include <stdio.h>

int main(){

    int cadeia[100],i;

    for(i= 0; i <= 100; i++){
        cadeia[i] = rand() % 1000;
    }

    printf("Ordem dos valores normais\n");

    for(i= 0; i <= 100; i++){
        printf("%d\n", cadeia[i]);
    }

    printf("\nOrdem dos valores invertida\n");
    for(i = 100; i >= 0; i--){
        printf("%d\n", cadeia[i]);
    }
}
