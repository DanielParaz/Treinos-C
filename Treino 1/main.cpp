#include <stdio.h>

using namespace std;

int main()
{
    float nota1 = 0,nota2 = 0,nota3 = 0,media[5],soma = 0;
    int i;

    for(i = 0;i < 5;i++){
        printf("Insira a primera nota: ");
        scanf("%f", &nota1);
        printf("\n\nInsira a segunda nota: ");
        scanf("%f", &nota2);
        printf("\n\nInsira a terceira nota: ");
        scanf("%f", &nota3);
        soma = nota1+nota2+nota3;
        media[i] = soma/3;
        printf("\n\nA média do aluno %d foi: %.2f \n\n",i,media[i]);

    }
    printf("Abaixo o numero do aluno e sua média");
    for(i = 0;i < 5;i++){
        if(media[i] > 7){
            printf("\n\nO aluno %d foi aprovado e \n",i);
        }else{printf("\n\nO aluno %d foi reprovado e \n",i);}
        printf("a média do aluno %d foi %.2f \n\n",i,media[i]);
    }
}
