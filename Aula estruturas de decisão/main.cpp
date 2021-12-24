#include <iostream>
#include <stdio.h>
int main() {
    int cadastrado = 0,ativo = 0,logado = 0;
    char opcao;

    printf("Deseja Cadastrar Sua Conta? S/N\n");
    scanf(" %c", &opcao);

    if(opcao == 'S') {
        cadastrado++;
        printf ("Conta Cadastrada!");
    }

    printf("Deseja ativar sua conta? S/N \n");
    scanf(" %c", &opcao);

    if(opcao == 'S') {
        ativo++;
        printf("Conta ativada com sucesso!");
    }

    printf("Deseja logar na sua conta? S/N \n");
    scanf(" %c", &opcao);

    if(opcao == 'S') {
        logado++;
        printf("Conta logada com sucesso!\n");
    }

    if((cadastrado == 1) && ((ativo == 1) || (logado == 1))) {
        printf("\nSeja bem vindo\n ");
    }else {
        printf("\n Algo deu Errado");
    }







}
