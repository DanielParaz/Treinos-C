#include <stdio.h>

using namespace std;

int main()
{
    int i,quantidade=0,somapar=0,somaimpar=0,numeroslidos=0;
    printf("Insira quantos números serão lidos: ");
    scanf("%d", &quantidade);
    for(i = 0;i < quantidade;i++){
        printf("\n\nInsira um número inteiro: ");
        scanf("%d", &numeroslidos);
        if(numeroslidos % 2 == 0){
            somapar = somapar + numeroslidos;
        }else{
            somaimpar = somaimpar+ numeroslidos;
        }
    }
    printf("A soma dos números pares é : %d \n\n A soma dos números impares é: %d \n\n",somapar,somaimpar);
}
