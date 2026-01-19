#include <stdio.h>

#define TAMANHO_TABULEIRO 10

void exibirTabuleiro(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO]) {
    printf("\n=== Tabuleiro ===\n");
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO] = {0};
    
    // Definção dos tamanho dos navios
    int tamanhoVertical = 3;
    int tamanhoHorizontal = 4;
    int tamanhoDiagonal = 3;
    int tamanhoDiagonal2 = 5;
    
    // Posições iniciais (definidas manualmente)
    int inicioXVertical = 2, inicioYVertical = 1;
    int inicioXHorizontal = 5, inicioYHorizontal = 4;
    int inicioXDiagonal1 = 0, inicioYDiagonal1 = 0;
    int inicioXDiagonal2 = 4, inicioYDiagonal2 = 2;
    
    // Navio vertical
    for (int i = 0; i < tamanhoVertical; i++) {
        tabuleiro[inicioXVertical + i][inicioYVertical] = 3;
    }
    
    // navio horizontal
    for (int j = 0; j < tamanhoHorizontal; j++) {
        tabuleiro[inicioXHorizontal][inicioYHorizontal + j] = 3;
    }
    
    // Navio diagonal (↘)
    for (int k = 0; k < tamanhoDiagonal; k++) {
        tabuleiro[inicioXDiagonal1 + k][inicioYDiagonal1 + k] = 3;
    }
    
    // Navio diagonal (↙)
    for (int m = 0; m < tamanhoDiagonal2; m++) {
        tabuleiro[inicioXDiagonal2 + m][inicioXDiagonal2 - m] = 3;
    }
    
    // Exibir tabulero completp
    exibirTabuleiro(tabuleiro);
    
    
    return 0;
}
