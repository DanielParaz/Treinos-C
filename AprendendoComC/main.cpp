#include <iostream>

using namespace std;

int main()
{
    int numero;
    float divisor;
    printf("Entre com um numero float:\n");
    scanf("%f", &divisor);
    printf("Entre com um numero inteiro:\n");
    scanf("%d", &numero);
    printf("O primeiro valor informado foi : %.2f.\n", divisor);
    printf("O segundo valor informado foi : %d.\n", numero);
    printf("o primeiro valor %.2f divido pelo segundo valor %d da o resultado %.3f", divisor, numero, divisor/numero);

    //SEMPRE POR ESPAÇO ANTES DE INSERIR CARACTERES POIS O ENTER É CONSIDERADO CARACTER ESPECIAL
    char ch1, ch2;
    printf("Entre com duas letras:\n");
    scanf(" %c", &ch1);
    scanf(" %c", &ch2);
    printf("As letras inseridas foram %c e %c.\n", ch1, ch2);


}
