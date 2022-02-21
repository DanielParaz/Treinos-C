#include <stdio.h>

using namespace std;

int main()
{
    float faixa1 = 0.1 ,faixa2 = 0.15,faixa3 = 0.20,faixa4 = 0.25,faixa5 = 0.30;
    float salariobruto = 0,salarioliquido = 0,totalliquido = 0,totalbruto = 0;
    int i = 1;
    do{
        printf("Insira o salario bruto do funcionario %d: ",i);
        scanf("%f", &salariobruto);
        totalbruto = totalbruto+salariobruto;
        if(salariobruto < 999){
            salarioliquido = salariobruto - (salariobruto*faixa1);
        }
        if((salariobruto > 999.1) &&(salariobruto < 1999)){
            salarioliquido = salariobruto - (salariobruto*faixa2);
        }
        if((salariobruto > 1999.1) && (salariobruto < 9999)){
            salarioliquido = salariobruto - (salariobruto*faixa3);
        }
        if((salariobruto > 9999.1) && (salariobruto < 99999)){
            salarioliquido = salariobruto - (salariobruto*faixa4);
        }
        if(salariobruto > 99999.1){
            salarioliquido = salariobruto - (salariobruto*faixa5);
        }
        totalliquido = totalliquido+salarioliquido;
        printf("\n\nO salário bruto do funcionario %d e %.2f e o total liquido e %.2f\n\n",i,salariobruto,salarioliquido);
        i++;
    }while(i <= 5);
    printf("O total bruto de todos os funcionários foi de %.2f e o total liquido foi de %.2f",totalbruto,totalliquido);
}
