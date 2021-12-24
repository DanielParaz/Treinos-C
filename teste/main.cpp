#include <stdio.h>


int main(int argc, char *argv[]){

char sexo;

printf("Qual é o seu sexo? (f/m) ");

scanf("%c", &sexo);

if(sexo == 'f' || sexo == 'F'){
printf("Você é do sexo feminino. ");}
else{
if(sexo == 'm' || sexo == 'M'){
printf("Você é do sexo masculino. ");}
else{
printf( "Você digitou um valor de sexo invalido ");}
}
}
