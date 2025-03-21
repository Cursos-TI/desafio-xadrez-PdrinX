#include <stdio.h>

//Armazenando o movimento da Torre
void movimentoTorre(int torreMovimento){
    if (torreMovimento > 0){
        printf("Direita\n");
        movimentoTorre(torreMovimento - 1);
    }
}

//Armazenado o movimento do Bispo
void movimentoBispo(int Bispomovimento){
    for(int i = 0, j = 10; i < j; i++, j--){
        printf("Cima\n");
        printf("Direita\n");
    }
        
    }

    //Armazenando o movimento da Rainha
void movimentoRainha(int rainhaMovimento){
    if (rainhaMovimento > 0){
        printf("Direita\n");
        movimentoRainha(rainhaMovimento - 1);
    }
}

int main(){

    printf("\nDesafio Jogo de Xadrez\n");

    //Movimento da torre
    printf("\nA torre anda:\n");
    movimentoTorre(5);

    //Movimento do bispo
    printf("\nO Bispo anda:\n");
    movimentoBispo(5);
    
    //Movimento da rainha
    printf("\nA rainha anda:\n");
    movimentoRainha(8);

    //Movimento em L do Cavalo
    printf("\nO Cavalo anda:\n");
    for(int cavaloA = 0, cavaloB = 5; cavaloA <= cavaloB; cavaloA++, cavaloB--){
        if(cavaloA == 1) break;
        for (int cavaloC = 1, cavaloD = 3; cavaloC <= cavaloD; cavaloC++, cavaloD--){
            printf("Cima\n");
        }
        printf("Direita\n");
    }
    

    return 0;
}