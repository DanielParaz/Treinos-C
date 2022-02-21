#include <stdio.h>

using namespace std;

int main()
{
    char entrada;
    int vogalA=0,vogalE=0,vogalI=0,vogalO=0,vogalU=0;
    printf("Insira uma vogal: ");
    scanf("%c", &entrada);
    while(entrada != '.'){
        switch(entrada){
            case 'a':
            vogalA++;
            break;
            case 'e':
            vogalE++;
            break;
            case 'i':
            vogalI++;
            break;
            case 'o':
            vogalO++;
            break;
            case 'u':
            vogalU++;
            break;
        }
         printf("Insira uma vogal: ");
            scanf("%c", &entrada);
    }
    printf("\n\nForam digitadas %d A's %d E's %d I's %d O's e %d U's\n\n",vogalA,vogalE,vogalI,vogalO,vogalU);
}
