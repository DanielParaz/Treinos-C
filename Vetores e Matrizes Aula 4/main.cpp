#include <iostream>
#include <stdio.h>
int main()
{
     int i,vogais[5]{0,0,0,0,0};
     char entrada;

     scanf("%c", &entrada);
     while(entrada != 'z'){
        switch(entrada)
        {
        case 'a':
            vogais[0]++;
            break;
        case 'e':
            vogais[1]++;
            break;
        case 'i':
            vogais[2]++;
            break;
        case 'o':
            vogais[3]++;
            break;
        case 'u':
            vogais[4]++;
            break;
        }
        scanf("%c", &entrada);
     }
     printf("quantidade que cada vogal apareceu em ordem \n");
     for(i = 0; i<5; i++){
        printf(" %d ", vogais[i]);
     }
}

