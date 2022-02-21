#include <stdio.h>

using namespace std;

int main()
{
   float salarios[10],maior = 0, somasalarial,mediasalarial;
   int i;
   for(i = 0;i<10;i++){
     printf("\n\n Insira o salário do funcionário %d: ",i);
     scanf("%f", &salarios[i]);
     if(salarios[i] > maior){
        maior = salarios[i];
     }
     somasalarial = somasalarial+salarios[i];
   }
   mediasalarial = somasalarial/10;
   printf("\n\nO maior salario da empresa é %.2f e a média de salario da empresa é %.2f\n",maior,mediasalarial);
   printf("A soma de todos os salários da empresa é %.2f",somasalarial);
}
