#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
      float altura,peso,imc;
    printf("Entre com a sua altura e o seu peso\n");
    scanf("%f %f", &altura, &peso);
    imc = (peso/altura)/altura;
    printf("Seu imc � : %.2f", imc);
}
