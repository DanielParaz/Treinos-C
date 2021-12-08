#include <stdio.h>
#include <stdlib.h>
// %d/%i = int
// %c = char
// %o = inteiro base octal
// %x ou %X = inteiros base hexadecimal
// %hd = short inteiro
// %ld = long int
// %ju = short inteiro positivo
// %u = inteiro positivo
// %lu = long inteiro positivo
// %f ou %e ou %E = floats    %.2f/ %.1f
// "     "      "  = double
// \n = pular linha automatico
// printf pode ser utilizado com presença de % dentro para entrar os parametros de forma automatica
// variaveis sem capacidade de calculo iniciadas não serão calculadas por exembro a = b+c não declaradas previamente

void main()
{
int a;

a = 10;

printf("A variavel a vale %d. Seu sucessor e o %d \n", a, a+1);

char ch1 ,ch2 ,ch3;
ch1 = 'H';
ch2 = 'o';
ch3 = 'W';
printf("%cell%c %colrd \n", ch1, ch2, ch3);

float f;
f = 12.55;
printf("f = %.2f\n", f);

int t, y, u;
t = 1;
y = t + 3;
u = t;
printf("y = %d e u = %d. \n", y, u );
printf("Valor total: %.1f\n", 9.1415169265);
return 0;
}
