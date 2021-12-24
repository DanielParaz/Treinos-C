#include <iostream>
#include <stdio.h>

int main()
{
    char letras;
    int as =0,es=0,is=0,os=0,us=0;
    scanf("%c", &letras);
    while(letras != '.')
    {

        switch(letras){
       case 'a' :
            as++;
        break;
        case 'e' :
            es++;
        break;
        case 'i'  :
            is++;
        break;
        case 'o'  :
            os++;
        break;
        case 'u' :
            us++;
        break;
        }
        scanf("%c", &letras);

    }
    printf("Existem %d A's, %d E's, %d I's, %d O's, %d U's", as,es,is,os,us);
}
