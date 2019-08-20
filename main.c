#include <stdio.h>

int main(){

    char nome[10] = "";
    int chute;

    printf("Qual seu nome?\n");
    scanf("%s", nome);
    printf("\n");

    printf("Bem vindo ao jogo da Adivinhação %s\n", nome);

    return 0;
}