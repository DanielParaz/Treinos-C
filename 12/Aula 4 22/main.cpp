#include <iostream>
#include <stdio.h>

int main()
{
    int cadeia1[5],i,cadeia2[5];
    for(i = 0; i<5;i++) {
        scanf("%d", &cadeia1[i]);
    }
    for(i = 0; i<5;i++){
        if(cadeia1[i] % 2 == 0){
            cadeia2[i] = cadeia1[i+1];
        }else {
        cadeia2[i] = cadeia1[i-1];
        }
}
    for(i = 0; i<5;i++){
        printf("Cadeia 1: %d ", cadeia1[i]);
    }
    printf("\n");
    for(i = 0; i<5;i++){
        printf("Cadeia 2: %d ", cadeia2[i]);
    }
}
