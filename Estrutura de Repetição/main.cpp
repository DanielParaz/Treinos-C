#include <iostream>
#include <stdio.h>
int main()
{
    int i, num,quantidade;
    printf("Digite um n�mero: \n");
    scanf("%d", &num);
    printf("Digite quantas vezes quer que ele seja exibido: \n");
    scanf("%d", &quantidade);
   for(i = 1; i <= quantidade;i++) {
    printf("%d\n", num);
   }
    printf("O n�m�ro foi exibido %d vezes", quantidade);
    return 0;

}
