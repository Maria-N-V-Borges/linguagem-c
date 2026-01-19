
#include <stdio.h>
#include <stdlib.h>

#define N 10

void exibirTabuleiro(int tabuleiro[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int main()
{
    int tabuleiro[N][N] = {0};
    
    // --- Cone (parte superior esquerda) ---
    int tamanhoCone = 5;
    for (int i = 0; i < tamanhoCone; i++) {
        for (int j = tamanhoCone - 1 - i; j <= i; j++) {
            tabuleiro[i][j] = 1;
        }
    }
    
    // --- Cruz (centro do tabuleiro) ---
    int centro = N / 2;
    for (int i = 0; i < N; i++) {
        tabuleiro[i][centro] = 1; // coluna central
        tabuleiro[centro][i] = 1; //linha central
    }
    
    // --- Octaedro (parte inferior direita) ---
    int centroOct = 7; // centro aproximado do Octaedro
    int raio = 2; // tamanho do Octaedro
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (abs(i - centroOct) + abs(j - centroOct) <= raio) {
                tabuleiro[i][j] = 1;
            } 
        }
    }

    
    // Exibir tabuleiro final
    printf("=== Tabuleiro 10x10 com Cone, Cruz e Octaedro ===\n");
    exibirTabuleiro(tabuleiro);

    return 0;
}
