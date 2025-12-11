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

// Função para calcular densidade populacional
float densidade(float pop, float area) {
    return pop / area;
}

void mostrarMenuAtributos() {
    printf("\n================ MENU de ATRIBUTOS ==================\n");
    printf("1 - População (maior vence)\n");
    printf("2 - Área (maior vence)\n");
    printf("3 - PIB (maior vence)\n");
    printf("4 - Pontos Turísticos (maior vence)\n");
    printf("5 - Densidade populacional (menor vence)\n");
    printf("\n====================================\n");
}



int main() {
    struct Carta carta1, carta2;
    int atributo1, atributo2;
    
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
    // ESCOLHA DE DOIS ATRIBUTOS
    //=================================
    
    mostrarMenuAtributos();
    printf("Escolha o PRIMEIRO atributo: ");
    scanf("%d", &atributo1);
    
    mostrarMenuAtributos();
    printf("Escolha o SEGUNDO atributo (usado em caso de empate): ");
    scanf("%d", &atributo2);
    
    
    
    //================================
    // OBTENDO VALORES REAIS A SEREM COMPARADOS
    //====================================
    
    float valor1_c1, valor1_c2;
    float valor2_c1, valor2_c2;
    
    //Função auxiliar para pegar o valor do atributo
    auto float getValor(struct Carta c, int atributo) {
        switch(atributo) {
            case 1: return c.populacao;
            case 2: return c.area;
            case 3: return c.pib;
            case 4: return c.pontos_turisticos;
            case 5: return densidade(c.populacao, c.area);
        }
        return -1;
    };
    
    valor1_c1 = getValor(carta1, atributo1);
    valor1_c2 = getValor(carta2, atributo1);
    
    valor2_c1 = getValor(carta1, atributo2);
    valor2_c2 = getValor(carta2, atributo2);
    
    
    //=============================
    // COMPARAÇÃO COM LÓGICA MESTRE
    //============================
    
    int vencedor = -1; // 1 = carta1, 2 - carta2, 0 = empate
    
    int menorVence = (atributo1 == 5); // densidade
    int menorVence2 = (atributo2 == 5); // densidade no desempate
    
    // PRIMEIRO ATRIBUTO - operador ternário
    vencedor = (valor1_c1 == valor1_c2)
        ? 0
        : (
            menorVence
                ? (valor1_c1 < valor1_c2 ? 1 : 2)
                : (valor1_c1 > valor1_c2 ? 1 : 2)
        );
        
    // SE EMPATE, SEGUNDO ATRIBUTO
    if (vencedor == 0) {
        vencedor = (valor2_c1 == valor2_c2)
        ? 0
        : (
            menorVence2
            ? (valor2_c1 < valor2_c2 ? 1 : 2)
            : (valor2_c1 > valor2_c2 ? 1 : 2)
        );
    }
    
    
    
    //=========================
    // RESULTADOS
    //=========================
    
    
    printf("\n=========== RESULTADO DA COMPARAÇÃO ==========\n");
    
    if (vencedor == 1) {
        printf("A carta vencedor é: %s", carta1.cidade);
    }
    else if (vencedor == 2) {
        printf("A carta vencedora é: %s", carta2.cidade);
    }
    else {
        printf("Empate total entre duas cartas!\n");
    }
    
    printf("\n=============================\n");
    
   
    
    return 0;
    
    
}
