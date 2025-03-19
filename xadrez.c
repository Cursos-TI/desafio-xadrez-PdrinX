#include <stdio.h>

int main(){

    printf("\nDesafio Jogo de Xadrez\n");

    //Movimento da torre
    printf("\nA torre anda:\n");
    for (int torre = 1; torre <= 5; torre++)
    {
        printf("Direita\n");
    }

    //Movimento do bispo
    printf("\nO Bispo anda:\n");
    int bispo = 1;
    
    while (bispo <= 5)
    {
        printf("Cima\n");
        printf("Direita\n");
        bispo++;
    }
    
    //Movimento da rainha
    printf("\nA rainha anda:\n");
    int rainha = 1;
    do
    {
        printf("Esquerda\n");
        rainha++;
    } while (rainha <= 8);

    return 0;
}