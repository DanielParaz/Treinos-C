#include <stdio.h>

using namespace std;

int main()
{
    float reajuste = 0,salarios[5],salariosreajustados[5],maiorreajustado = 0;
    int i;
    printf("Insira o valor da porcentagem do reajuste sal�rial sem o simbolo '%': ");
    scanf("%f", &reajuste);
    reajuste = reajuste/100;

    for(i = 0; i < 5;i++){
        printf("\n\nInsira o sal�rio a ser reajustado do funcin�rio %d: ", i);
        scanf("%f", &salarios[i]);
        salariosreajustados[i] = salarios[i]+salarios[i]*reajuste;
        if(salariosreajustados[i] > maiorreajustado){
            maiorreajustado = salariosreajustados[i];
        }
    }
    for(i = 0; i < 5;i++){
        printf("\n\nSal�rio reajustado do funcin�rio %d = %.2f \n\n",i,salariosreajustados[i]);
    }
    printf("\n\n O maior sal�rio da empresa � %.2f", maiorreajustado);
}
