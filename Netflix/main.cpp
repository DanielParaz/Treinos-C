#include <iostream>
#include <stdio.h>

int main()
{
   int opcao;

   while(1){
        printf("Deseja acessar qual aplicativo:\n 1: Netflix\n 2: Facebook\n 3: Youtube\n 4: Spotify\n");
        scanf("%d", &opcao);
   switch(opcao){
   case 1 : {
       printf("Voc� abriu a Netflix");
       return 0;}
   case 2 : {
       printf("Voc� abriu o Facebook");
       return 0;}
   case 3 : {
       printf("Voc� abriu o Youtube");
       return 0;}
   case 4 :{
       printf("Voc� abriu o Spotify");
       return 0;}
   }
   }
}
