#include <iostream>
#include <stdio.h>

int main()
{
    int i,qntfuncionario;
    float salario,media, soma,bigger;
    soma = 0;
    bigger = 0;
    printf("Quantos funcion�rios trabalham na empresa: ");
    scanf("%d", &qntfuncionario);
    for(i = 0; i < qntfuncionario; i++){
        printf("Insira seu sal�rio : ");
        scanf("%f", &salario);
        soma = soma + salario;
        if(salario > bigger){
            bigger = salario;
        }
    }
    media = soma/qntfuncionario;
    printf("\nA m�dia salarial da empresa �: %.0f e o maior salario na empresa �: %0.f", media, bigger);
}
