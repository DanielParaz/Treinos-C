#include <stdio.h>

using namespace std;

int main()
{
    int i,quantidade=0,somapar=0,somaimpar=0,numeroslidos=0;
    printf("Insira quantos n�meros ser�o lidos: ");
    scanf("%d", &quantidade);
    for(i = 0;i < quantidade;i++){
        printf("\n\nInsira um n�mero inteiro: ");
        scanf("%d", &numeroslidos);
        if(numeroslidos % 2 == 0){
            somapar = somapar + numeroslidos;
        }else{
            somaimpar = somaimpar+ numeroslidos;
        }
    }
    printf("A soma dos n�meros pares � : %d \n\n A soma dos n�meros impares �: %d \n\n",somapar,somaimpar);
}
