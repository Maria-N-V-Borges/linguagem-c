#include <stdio.h>

// Constantes para definir o número de casas
#define BISPO_CASAS 5
#define TORRE_CASAS 5
#define RAINHA_CASAS 8

int main() {
    
    int i;
    
    printf("=== Desafio de Xadrez - MateCheck ===\n\n");
    
    //==============================
    // Movimentação do BISPO
    // Diagonal superior direita
    //==============================
    printf("Movimento do Bispo:\n");
    
    for (i = 1; i <= BISPO_CASAS; i++) {
        printf("Cima Direita\n");
    }
    
    printf("\n");
    
    //==============================
    // Movimentação da TORRE
    // 5 casas para a direita
    //==============================
    printf("Movimento da Torre:\n");
    
    i = 1;
    while (i <= TORRE_CASAS) {
        printf("Direita\n");
        i++;
    }
    
    printf("\n");
    
    //==============================
    // Movimentação da RAINHA
    // 8 casas para a esquerda
    //==============================
    printf("Movimento da Rainha:\n");
    
    i = 1;
    do {
        printf("Esquerda\n");
        i++;
    } while (i <= RAINHA_CASAS);
    
    printf("\n=== Fim da Simulacao ===\n");
    
    return 0;
}

    











