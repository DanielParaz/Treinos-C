#include <stdio.h>

using namespace std;

int main()
{
    int leituras;
    do{
        printf("Insira um numero inteiro: ");
        scanf("%d", &leituras);
        if((leituras % 2 == 0) && (leituras != 0) && (leituras != 9)){
            printf("\n\nO n�mero %d � par logo seu sucessor � %d \n\n",leituras,leituras+1);
        }else if((leituras != 0) && (leituras != 9)){
            printf("\n\nO n�mero %d � impar logo seu antecessor � %d \n\n",leituras,leituras-1);
        }
    }while((leituras != 0) && (leituras != 9));
}
