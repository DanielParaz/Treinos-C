#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
   float av, av2, media;

   printf("Digita a nota da AV 1:\n");
   scanf("%e", &av);

   printf ("Digite a nota da AV 2:\n");
   scanf("%e", &av2);

   media = (av+av2)/ 2.0;
   if ((media >= 7) && (media <= 10)){
   printf("Sua media e: %2.f e voce foi aprovado\n", media);
   }
   if (media >= 10){
    printf("Notas inseridas  sao invalidas\n");
   }
   if (media <= 7){
    printf("Sua m�dia e: %2.f e voc� foi reprovado...\n", media);
   }
}
