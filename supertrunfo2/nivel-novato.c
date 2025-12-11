#include <stdio.h>
#include <string.h>

struct Carta {
    char estado[50];
    char codigo[10];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
};

int main() {
    struct Carta carta1, carta2;
    
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Estado: ");
    fgets(carta1.estado, 50, stdin);
    
    printf("Código da carta: ");
    fgets(carta1.codigo, 10, stdin);
    
    printf("Nome da cidade: ");
    fgets(carta1.cidade, 50, stdin);
    
    printf("População: ");
    scanf("%d", &carta1.populacao);
    
    printf("Área (Km²): ");
    scanf("%f", &carta1.area);
    
    printf("PIB (em bilhões): ");
    scanf("%f", &carta1.pib);
    
    printf("Pontos turísticos: ");
    scanf("%d", &carta1.pontos_turisticos);
    
    getchar(); //limpar buffer
    
       printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Estado: ");
    fgets(carta2.estado, 50, stdin);
    
    printf("Código da carta: ");
    fgets(carta2.codigo, 10, stdin);
    
    printf("Nome da cidade: ");
    fgets(carta2.cidade, 50, stdin);
    
    printf("População: ");
    scanf("%d", &carta2.populacao);
    
    printf("Área (Km²): ");
    scanf("%f", &carta2.area);
    
    printf("PIB (em bilhões): ");
    scanf("%f", &carta2.pib);
    
    printf("Pontos turísticos: ");
    scanf("%d", &carta2.pontos_turisticos); 
    
    //Exibição das cartas
    printf("\n==========================\n");
    printf("\n         CARTA1\n");
    printf("\n==========================\n");
    printf("Estado: %s", carta1.estado);
    printf("Código: %s", carta1.codigo);
    printf("Cidade: %s", carta1.cidade);
    printf("População: %d\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhões\n", carta1.pib);
    printf("Pontos turísticos: %d\n", carta1.pontos_turisticos);
    
    printf("\n==========================\n");
    printf("\n         CARTA2\n");
    printf("\n==========================\n");
    printf("Estado: %s", carta2.estado);
    printf("Código: %s", carta2.codigo);
    printf("Cidade: %s", carta2.cidade);
    printf("População: %d\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhões\n", carta2.pib);
    printf("Pontos turísticos: %d\n", carta2.pontos_turisticos);
    
    //===============================
    // COMPARAÇÃO (NÍVEL NOVATO)
    // Atributo escolhido: população
    // Regra: Maior vence
    //================================
    
    printf("\n====== RESULTADO DA COMPARAÇÃO ======");
    printf("Atributo escolhido: População\n\n");
    
    if (carta1.populacao > carta2.populacao) {
        printf(">> A carta vencedora é: %s", carta1.cidade);
    }
    else if (carta2.populacao > carta1.populacao) {
        printf(">> A cartaa vencedora é: %s", carta2.cidade);
    }
    else {
        printf(">> Empate! Ambas as cidades têm a mesma população.\n");
    }
    
    printf("\n===============================\n");
    
    return 0;
    
    
}
