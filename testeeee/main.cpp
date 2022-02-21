#include <iostream>
#include <stdio.h>

int main()
{
    int a = 0;

    while(a <= 7){
        printf("%d",a);
        a= a+1;
        if(a == 3){
            break;
        }
    }
}
