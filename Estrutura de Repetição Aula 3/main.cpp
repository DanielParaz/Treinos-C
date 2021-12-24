#include <iostream>
#include <stdio.h>

int main()
{
    int i,qntfuncionario;
    float salario,media, soma,bigger;
    soma = 0;
    bigger = 0;
    printf("Quantos funcionários trabalham na empresa: ");
    scanf("%d", &qntfuncionario);
    for(i = 0; i < qntfuncionario; i++){
        printf("Insira seu salário : ");
        scanf("%f", &salario);
        soma = soma + salario;
        if(salario > bigger){
            bigger = salario;
        }
    }
    media = soma/qntfuncionario;
    printf("\nA média salarial da empresa é: %.0f e o maior salario na empresa é: %0.f", media, bigger);
}
