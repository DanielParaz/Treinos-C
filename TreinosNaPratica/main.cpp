#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
    char inicial;
    int idade;
    printf("Entre com sua idade e sua Inicial:\n");
    scanf("%d %c", &idade, &inicial);
    printf("Voce tem %d anos de idade, e seu nome comeca com %c\n", idade, inicial);


    char inicial2;
    int idade2;
    printf("\nEntre com sua idade e sua Inicial2:\n");
    scanf("%d %c", &idade2, &inicial2);
    printf("Você tem %d anos de idade e seu nome começa com %c\n", idade2, inicial2);

    char inicial3;
    int idade3;
    printf("Entre com a sua idade e a sua inicial:\n");
    scanf("%d", &idade3);
    scanf(" %c", &inicial3);
    printf("Voce tem %d anos e seu nome comeca com %c\n", idade3, inicial3);

    int a, b ,c;
    c = a-b;
    printf("Entre com dois inteiros: \n");
    scanf("%d %d", &a, &b);
    printf("A diferença entre %d e %d vale: \n%d", a, b, c);




}
