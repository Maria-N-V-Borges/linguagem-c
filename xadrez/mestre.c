#include <stdio.h>

// Constantes de movimento
#define BISPO_CASAS 5
#define TORRE_CASAS 5
#define RAINHA_CASAS 8
#define CAVALO_CASAS 1

// Função Recursiva para o Bispo (Diagonal para cima)
void moverBispo(int casas) {
    if (casas == 0) return; // Caso Base: fim do movimento
    printf("Cima Direita\n");
    moverBispo(casas - 1); // Chama recursiva
}

// Função recursiva para a Torre (Direita)
void moverTorre(int casas) {
    if (casas == 0) return; // Caso base: fim do movimento
    printf("Direita\n");
    moverTorre(casas - 1); // Chamada recursiva
}

// Função Recursiva para a rainha (Esquerda)
void moverRainha(int casas) {
    if (casas == 0) return; // Caso base: fim do movimento
    printf("Esquerda\n");
    moverRainha(casas - 1); // Chamada recursiva
}

// Função para o movimento do cavalo (L para cima e à direita)
void moverCavalo() {
    int i, j;
    for (i = 0; i < CAVALO_CASAS; i++) { // Loop externo (1 casa para cima)
        printf("Cima\n");
        
        for (j = 0; j < CAVALO_CASAS; j++) { // Loop interno (1 casa para direita)
            printf("Direita\n");
        }
    
    }

}

// Função Principal
int main() {
    
    printf("=== Desafio de Xadrez - MateCheck ===\n");
    printf("Nivel Mestre - Movimentacao das Pecas\n\n");
    
    // Movimento do Bispo
    printf("Movimento do Bispo:\n");
    moverBispo(BISPO_CASAS); // Chama a função recursiva para o bispo
    printf("\n");
    
    // Movimento da Torre
    printf("Movimento da Torre:\n");
    moverTorre(TORRE_CASAS); // Chama a função recursiva para a Torre
    printf("\n");
    
    // Movimento da Rainha
    printf("Movimento da Rainha:\n");
    moverRainha(RAINHA_CASAS); // Chama a função recursiva para a Rainha
    printf("\n");
    
    // Movimento do Cavalo
    printf("Movimento do Cavalo:\n");
    moverCavalo(); //Chama a função para o movimento em L do Cavalo
    printf("\n");
    
    return 0;
    
}
    
    
