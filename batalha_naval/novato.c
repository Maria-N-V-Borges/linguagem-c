#include <stdio.h>

#define TAMANHO_TABULEIRO 10

int main()
{
    // Definição do tabuleiro
    int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO] = {0};
    
    // Definição dos navios
    int tamanhoNavioVertical = 3;
    int tamanhoNavioHorizontal = 4;
    
    // Posição inicial dos navios (inserida manualmente)
    int inicioXVertical = 2, inicioYVertical = 1; // Navio vertical começa em (2,1)
    int inicioXHorizontal = 5, inicioYHorizontal = 4; // Navio horzontal começa em (5,4)
    
    // Posicionamento do navio vertical
    printf("Coordenadas do Navio Vertical:\n");
    for (int i = 0; i < tamanhoNavioVertical; i++) {
        int x = inicioXVertical + i;
        int y = inicioYVertical;
        tabuleiro[x][y] = 1; // Marca no tabuleiro
        printf("(%d, %d)\n", x, y);
    }
    
    // Posicionamento do navio horizontal
    printf("\nCoordenadas do Navio Horizontal:\n");
    for (int j = 0; j < tamanhoNavioHorizontal; j++) {
        int x = inicioXHorizontal;
        int y = inicioYHorizontal + j;
        tabuleiro[x][y] = 1; // Marca no tabuleiro
        printf("(%d, %d)\n", x, y);
    }

    return 0;
}
