#include <stdio.h>

using namespace std;

int main()
{
    int maior = 0,inteiros,controle = 0;

    do{
        printf("Insira um número inteiro : ");
        scanf("%d", &inteiros);
        if(maior < inteiros){
            maior = inteiros;
        }
        controle++;
    }while(controle < 5);
    printf("\n\nO maior numero digitado foi = %d", maior);
}
