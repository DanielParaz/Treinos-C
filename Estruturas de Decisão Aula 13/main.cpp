#include <iostream>
#include <stdio.h>

int main()
{
    int i, qnt;
    printf("Insira a quantidade de funcionarios a ser calculado: ");
    scanf("%d", &qnt);
    float salarioliq,salariobruto,totalimposto,faixaimposto,totliquido,totbruto,totimpostos;
    totliquido = 0;
    totbruto = 0;
    totimpostos = 0;
    for(i = 0; i < qnt; i++)
    {
        salarioliq = 0;
        salariobruto = 0;
        totalimposto = 0;
        faixaimposto = 0;
        printf("\nInsira o salario do funcionario ");
        scanf("%f", &salariobruto);
        if(salariobruto <= 999)
        {
            faixaimposto = 0.1;
            totalimposto = salariobruto * faixaimposto;
            salarioliq = salariobruto - totalimposto;
            printf("O total de salario bruto = %.3f o total do salario liquido = %.3f", salariobruto,salarioliq);
        }
        if(salariobruto > 999 && salariobruto <= 1999)
        {
            faixaimposto = 0.15;
            totalimposto = salariobruto * faixaimposto;
            salarioliq = salariobruto - totalimposto;
            printf("O total de salario bruto = %.3f o total do salario liquido = %.3f", salariobruto,salarioliq);
        }
        if(salariobruto > 1999 && salariobruto <= 9999)
        {
            faixaimposto = 0.2;
            totalimposto = salariobruto * faixaimposto;
            salarioliq = salariobruto - totalimposto;
            printf("\nO total de salario bruto = %.3f o total do salario liquido = %.3f\n", salariobruto,salarioliq);
        }
        if(salariobruto > 9999 && salariobruto < 99999)
        {
            faixaimposto = 0.25;
            totalimposto = salariobruto * faixaimposto;
            salarioliq = salariobruto - totalimposto;
            printf("\nO total de salario bruto = %.3f o total do salario liquido = %.3f\n", salariobruto,salarioliq);
        }
        if(salariobruto >= 100000)
        {
            faixaimposto = 0.3;
            totalimposto = salariobruto * faixaimposto;
            salarioliq = salariobruto - totalimposto;
            printf("\nO total de salario bruto = %.3f o total do salario liquido = %.3f\n", salariobruto,salarioliq);
        }
        totliquido = totliquido + salarioliq;
        totbruto = totbruto + salariobruto;
        totimpostos = totimpostos + totalimposto;


    }
    printf("\n\ntotal imposto: %.3f\n \ntotal liquido: %.3f\n \ntotal bruto: %.3f\n\n", totimpostos,totliquido,totbruto);

}
