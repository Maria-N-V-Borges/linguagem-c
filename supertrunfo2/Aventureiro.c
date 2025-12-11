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
    int opcao;
    
    //===============================
    // CADASTRO DAS CARTAS
    //===============================
    
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
    
    //==================================
    // MENU
    //=================================
    
    printf("\n================ MENU de COMPARAÇÃO ==================\n");
    printf("1 - Comparar população (maior vence)\n");
    printf("2 - Comparar Área (maior vence)\n");
    printf("3 - Comparar PIB (maior vence)\n");
    printf("4 - Comparar Pontos Turísticos (maior vence)\n");
    printf("5 - Comparação completa (comparação aninhada)\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);
    
    printf("\n====================================\n");
    
    
    
    //===============================
    // LÓGICA DE COMPARAÇÃO (SWITCH)
    //================================
    
    switch (opcao) {
        
        case 1:
            printf("Atributo escolhido: População\n");
            if (carta1.populacao > carta2.populacao)
                printf("Vencedora: %s", carta1.cidade);
            else if (carta2.populacao > carta1.populacao)
                printf("Vencedora: %s", carta2.cidade);
            else
                printf("Empate!");
            break;
            
         case 2:
            printf("Atributo escolhido: Área\n");
            if (carta1.area > carta2.area)
                printf("Vencedora: %s", carta1.cidade);
            else if (carta2.area > carta1.area)
                printf("Vencedora: %s", carta2.cidade);
            else
                printf("Empate!");
            break;
            
          case 3:
            printf("Atributo escolhido: PIB\n");
            if (carta1.pib > carta2.pib)
                printf("Vencedora: %s", carta1.cidade);
            else if (carta2.pib > carta1.pib)
                printf("Vencedora: %s", carta2.cidade);
            else
                printf("Empate!");
            break;
            
          case 4:
            printf("Atributo escolhido: Pontos Turísticos\n");
            if (carta1.pontos_turisticos > carta2.pontos_turisticos)
                printf("Vencedora: %s", carta1.cidade);
            else if (carta2.pontos_turisticos > carta1.pontos_turisticos)
                printf("Vencedora: %s", carta2.cidade);
            else
                printf("Empate!");
            break;
          
          case 5:
            //========================
            //COMPARAÇÃO ANINHADA (MULTI-NÍVEL)
            // Ordem de comparação:
            // 1) População
            // 2) Área
            // 3) PIB
            // 4) Pontos Turísticos
            //=========================
            
            printf("Comparação Completa (aninhada)\n");
            
            if (carta1.populacao != carta2.populacao) {
                if (carta1.populacao > carta2.populacao)
                    printf("Vencedora: %s (pela População)\n", carta1.cidade);
                else
                    printf("Vencedora: %s (pela População)\n", carta2.cidade);
            }
            else if (carta1.area != carta2.area) {
                if (carta1.area > carta2.area)
                    printf("Vencedora: %s (pela Área)\n", carta1.cidade);
                else
                    printf("Vencedora: %s (pela Área)\n", carta2.cidade);
            }
            else if (carta1.pib != carta2.pib) {
                if (carta1.pib > carta2.pib)
                    printf("Vencedora: %s (pela PIB)\n", carta1.cidade);
                else
                    printf("Vencedora: %s (pela PIB)\n", carta2.cidade);
            }
            else if (carta1.pontos_turisticos != carta2.pontos_turisticos) {
                if (carta1.pontos_turisticos > carta2.pontos_turisticos)
                    printf("Vencedora: %s (pela Pontos Turísticos)\n", carta1.cidade);
                else
                    printf("Vencedora: %s (pela Pontos Turísticos)\n", carta2.cidade);
            }
            else {
                printf("As cartas são totalmente iguais!\n");
            }
            break;
            
        default:
            printf("Opção inválida!");
    }
    
    printf("\n=============================\n");
    
   
    
    return 0;
    
    
}
