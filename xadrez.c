#include <stdio.h>

void moverTorre (int casas) {    // Procedimento para mover a torre
    while (casas <= 5) {         // A torre se move horizontalmente ou verticalmente
        printf("Direita\n", casas++);                               
    }       
}

void moverBispo (int cima, int direita) {     // Procedimento para mover a torre
    for (int i = 0; i < cima; i++) {          // O bispo se move em diagonal
        printf("Cima");                       // Movimento para mover a torre 5 casas diagonais
        for (int j = 0; j < direita; j++) {   // para cima e para direita
            printf("\tDireita\n");
        }        
    }
}

void moverRainha (int casas) {                 // Procedimento para mover a torre
    for (casas; casas <= 8; casas++) {         // A rainha se move em todas as posições
        if (casas == 0) continue;              // Movimento para mover a rainha 5 casas à esquerda
        printf("Esquerda\n");             
    }   
}

void moverCavalo (int cima, int direita) {           // Procedimento para mover o cavalo
    for (direita; direita <= 2; direita++) {         // O cavalo se move em L
        if (direita == 0) continue;                  // Movimento para mover o cavalo duas casas
        if (direita == 2) break;                     // para cima e uma para direita
        while (cima <= 2) {
            printf("Cima\n", cima++);
        }   
        printf("Direita\n");           
    }
}

int main () {
    int peca;

    printf("*** Jogo de Xadrez ***\n");
    printf("Escolha a peça a ser usada: \n");
    printf("1. Torre \n");
    printf("2. Bispo \n");
    printf("3. Rainha \n");
    printf("4. Cavalo \n");
    scanf("%d", &peca);

    switch (peca) {
    case 1:
        printf("\nTorre\n\n");
        moverTorre (1);
        break;
    case 2:
        printf("\nBispo\n\n");
        moverBispo (5, 1);
        break;    
    case 3:
        printf("\nRainha\n\n");
        moverRainha (0);
        break;
    case 4:
        printf("\nCavalo\n\n");
        moverCavalo (1, 0);
        break;

    default:
        printf("\nOpção inválida\n");
        break;
    }
}