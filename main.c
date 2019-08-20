#include <stdio.h>

int main(){

    char nome[10] = "";
    int kick;
    int secret_number = 60;

    printf("Qual seu nome? ");
    scanf("%s", nome);
    printf("\nBem vindo ao jogo da Adivinhação %s \n", nome);
    
    printf("Escolha um número de 0 a 100: ");
    scanf("%i", &kick);
    printf("\nSeu chute foi %i \n", kick);
    
    if(kick == secret_number){
        return printf("Parabens você ganhou :D \n");
    }
    else if(kick < secret_number){
        return printf("Você errou, o número secreto é maior \n");
    }
    else if(kick > secret_number){
        return printf("Você errou, o número secreto é menor \n");
    }

    return 0;
}