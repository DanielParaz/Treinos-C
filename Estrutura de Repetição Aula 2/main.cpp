#include <iostream>
#include <stdio.h>

int main()
{
    int i, bigger, numeros;
    bigger = 0;
    for(i = 0;i<=15;i++){
        numeros = rand() % 1000;
        printf("%d\n", numeros);
            if (numeros > bigger){
                bigger = numeros;
}
}
     printf("O maior valor digitado foi: %d ", bigger);
}



