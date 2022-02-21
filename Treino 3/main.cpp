#include <stdio.h>

using namespace std;

int main()
{
    int inteiro = 0,maior = 0,i;
    for(i = 0;i < 15; i++){
        printf("\n\nInsira um valor inteiro:");
        scanf("%d", &inteiro);
        if(inteiro > maior){
            maior = inteiro;
        }

    }
    printf("\n\nO maior número digitado foi: %d", maior);
}
