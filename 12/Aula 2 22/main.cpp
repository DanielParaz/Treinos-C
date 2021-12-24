#include <iostream>
#include <stdio.h>

int main()
{
    float notas[20];
    float media = 0.0;
    int i;
    printf("Insira a Nota dos Alunos: \n");

    for (i = 0; i<20 ; i++){
        scanf("%f", &notas[i]);
        media = media + notas[i];
        if(notas[i]> 10){
            printf("Nota invalida\n");
            return 0;
        }
        }
    media = media / 20.0;
    printf("\n media: %.1f\n", media);
    printf("notas maiores que a media: \n");
    for (i = 0; i<20; i++){
    if(notas[i]>media){
        printf("%.1f\n",notas[i]);
    }
    }
}
