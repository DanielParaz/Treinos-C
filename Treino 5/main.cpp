#include <stdio.h>

using namespace std;

int main()
{
    float reajuste = 0,salarios[5],salariosreajustados[5],maiorreajustado = 0;
    int i;
    printf("Insira o valor da porcentagem do reajuste salárial sem o simbolo '%': ");
    scanf("%f", &reajuste);
    reajuste = reajuste/100;

    for(i = 0; i < 5;i++){
        printf("\n\nInsira o salário a ser reajustado do funcinário %d: ", i);
        scanf("%f", &salarios[i]);
        salariosreajustados[i] = salarios[i]+salarios[i]*reajuste;
        if(salariosreajustados[i] > maiorreajustado){
            maiorreajustado = salariosreajustados[i];
        }
    }
    for(i = 0; i < 5;i++){
        printf("\n\nSalário reajustado do funcinário %d = %.2f \n\n",i,salariosreajustados[i]);
    }
    printf("\n\n O maior salário da empresa é %.2f", maiorreajustado);
}
