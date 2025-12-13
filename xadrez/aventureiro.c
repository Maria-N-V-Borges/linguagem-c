#include <stdio.h>

// Constantes para o movimento do cavalo
#define BAIXO 2
#define ESQUERDA 1

int main() {
   
    int i, j;
    
    printf("=== Desafio de Xadrez - MateCheck ===\n");
    printf("Nível Aventureiro - Movimento do Cavalo\n\n");
    
    //==============================
    // Movimentação da Cavalo em L
    // 2 casas para BAIXO
    // 1 casa para a ESQUERDA
    //==============================
    
    printf("Movimento do Cavalo:\n");
    
    // Loop externo - movimento para baixo (FOR)
    for (i = 1; i <= BAIXO; i++) {
        printf("Baixo\n");
        
        // Loop interno - movimento para a esquerda (WHILE)
        j = 1;
        while (j <= ESQUERDA) {
            printf("Esquerda\n");
            j++;
        }
    }
    
    printf("\n=== Fim da Simulacao ===\n");
    
    return 0;
}


