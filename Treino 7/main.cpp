#include <stdio.h>

using namespace std;

int main()
{
    int i = 0,inteiros,maior = 0;
    while(i < 5){
        printf("Insira um número inteiro: ");
        scanf("%d", &inteiros);
        if(inteiros > maior){
            maior = inteiros;
        }
        i++;
    }
    printf("\n\nO maior numero inteiro lido foi: %d",maior);
}
