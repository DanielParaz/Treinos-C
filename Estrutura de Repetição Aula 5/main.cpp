#include <iostream>
#include <stdio.h>
int main() //1999 20% = 1999 x 0.20 = 399.8 = 20% de 1999
{
    int i,qntfuncionarios;
    float salario,novosalario,bigger,acrescimo,reajuste;
    bigger = 0;

    printf("Quantos funcionarios tem na empresa: \n");
    scanf("%d", &qntfuncionarios);
    printf("Insira de quanto sera o reajuste: \n");
    scanf("%f", &reajuste);
    reajuste = reajuste/100;
    for(i = 1;i<=qntfuncionarios;i++){
    acrescimo = 0;
    novosalario = 0;
    printf("Insira o salário do funcionario %d \n", i);
    scanf("%f", &salario);
    acrescimo = salario * reajuste;
    novosalario = salario + acrescimo;
    printf("O funcionario %d teve o salario aumentado para: %.3f\n", i, novosalario);
    if(novosalario>bigger){
        bigger = novosalario;
    }
    }
    printf("O maior salário reajustado foi: %.3f", bigger);


}
