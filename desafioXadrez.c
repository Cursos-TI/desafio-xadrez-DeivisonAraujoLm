#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

#define MOVEMENT 5          // Constante para Bispo e Torre
#define QUEEN_MOVEMENT 8    // Constante para Rainha
#define L_MOVEMENTS 2       // Movimentos do Cavalo em L
#define KNIGHT_MOVEMENT 1   // Movimentos do Cavalo no Nível Mestre

// Função recursiva para movimentar o Bispo
void moveBishop(int step) {
    if (step > 0) {
        printf("Bispo - Diagonal Superior Direita - Passo %d\n", step);
        moveBishop(step - 1); // Chamada recursiva
    }
}

// Função recursiva para movimentar a Torre
void moveRook(int step) {
    if (step > 0) {
        printf("Torre - Direita - Passo %d\n", step);
        moveRook(step - 1); // Chamada recursiva
    }
}

// Função recursiva para movimentar a Rainha
void moveQueen(int step) {
    if (step > 0) {
        printf("Rainha - Esquerda - Passo %d\n", step);
        moveQueen(step - 1); // Chamada recursiva
    }
}

int main() {
    // Nível Novato - Movimentação das Peças
    printf("Nível Novato - Movimentação das Peças:\n");

    // Implementação de Movimentação do Bispo
    printf("\nMovimentação do Bispo:\n");
    for (int i = 1; i <= MOVEMENT; i++) {
        printf("Bispo - Diagonal Superior Direita - Passo %d\n", i);
    }

    // Implementação de Movimentação da Torre
    printf("\nMovimentação da Torre:\n");
    for (int i = 1; i <= MOVEMENT; i++) {
        printf("Torre - Direita - Passo %d\n", i);
    }

    // Implementação de Movimentação da Rainha
    printf("\nMovimentação da Rainha:\n");
    for (int i = 1; i <= QUEEN_MOVEMENT; i++) {
        printf("Rainha - Esquerda - Passo %d\n", i);
    }

    // Nível Aventureiro - Movimentação do Cavalo
    printf("\nNível Aventureiro - Movimentação do Cavalo:\n");
    for (int i = 1; i <= L_MOVEMENTS; i++) {
        int steps = i;
        while (steps > 0) {
            printf("Cavalo - Baixo e Esquerda - Movimento em L - Passo %d\n", i);
            steps--;
        }
    }

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    printf("\nNível Mestre - Movimentação das Peças:\n");

    // Movimentação do Bispo com Função Recursiva
    printf("\nMovimentação do Bispo com Função Recursiva:\n");
    moveBishop(MOVEMENT);

    // Movimentação da Torre com Função Recursiva
    printf("\nMovimentação da Torre com Função Recursiva:\n");
    moveRook(MOVEMENT);

    // Movimentação da Rainha com Função Recursiva
    printf("\nMovimentação da Rainha com Função Recursiva:\n");
    moveQueen(QUEEN_MOVEMENT);

    // Movimentação do Cavalo com Loops e Condições Avançadas
    printf("\nMovimentação do Cavalo com Loops e Condições Avançadas:\n");
    for (int i = 1; i <= KNIGHT_MOVEMENT; i++) {
        for (int j = 1; j <= KNIGHT_MOVEMENT; j++) {
            printf("Cavalo - Cima e Direita - Movimento em L\n");
            if (i == j) {
                continue; // Exemplo de uso do 'continue'
            }
        }
        break; // Exemplo de uso do 'break'
    }

    return 0;
}