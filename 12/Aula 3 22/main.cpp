#include <iostream>
#include <stdio.h>

int main()
{
   int vogais[5] = {0,0,0,0,0},i;
   char letra;
   scanf("%c", &letra);
   while (letra != 'z'){
    switch(letra){

    case 'a': vogais[0]++;
    break;

    case 'e': vogais[1]++;
    break;

    case 'i': vogais[2]++;
    break;

    case 'o': vogais[3]++;
    break;

    case 'u': vogais[4]++;
    break;
    }
    scanf("%c", &letra);
   }
   printf("Quantidade de vogais digitadas:\n");

   for(i = 0; i<5; i++){
    printf("%d\n" , vogais[i]);
   }

}
