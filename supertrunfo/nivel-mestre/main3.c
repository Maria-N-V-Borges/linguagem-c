#include <stdio.h>

int main() {
    // Dados da primeira carta
    char codigo1[4];
    char nome1[30];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Dados da segunda carta
    char codigo2[4];
    char nome2[30];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // Cadastro da primeira carta
    printf("Digite o codigo da primeira carta (ex: A01): ");
    scanf("%3s", codigo1);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]s", nome1);

    printf("Populacao: ");
    scanf("%lu", &populacao1);

    printf("Area: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

    printf("\n-----------------------------\n");

    // Cadastro da segunda carta
    printf("Digite o codigo da segunda carta (ex: B03): ");
    scanf("%3s", codigo2);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]s", nome2);

    printf("Populacao: ");
    scanf("%lu", &populacao2);

    printf("Area: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    //Cálculos das duas cartas
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    float pibPerCapita1 = pib1 / populacao1;
    float pibPerCapita2 = pib2 / populacao2;

    float densidadeInvertida1 = 1 / densidade1;
    float densidadeInvertida2 = 1 / densidade2;

    float superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + densidadeInvertida1;
    float superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + densidadeInvertida2;

    //=== Comparações ===
    int rPopulacao = populacao1 > populacao2;
    int rArea = area1 > area2;
    int rPib = pib1 > pib2;
    int rPontos = pontosTuristicos1 > pontosTuristicos2;
    int rPibCapita = pibPerCapita1 > pibPerCapita2;
    int rDensidade = densidade1 < densidade2; // Menor vence
    int rSuperPoder = superPoder1 > superPoder2;



    // Saída completa 
    printf("\n=======================\n");
    printf("        RESULTADOS\n");
    printf("\n========================\n");

    printf("\n=== CARTA 1 ===\n");
    printf("Densidade: %.2f\n", densidade1);
    printf("PIB per Capita: %.2f\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    printf("\n=== CARTA 2 ===\n");
    printf("Densidade: %.2f\n", densidade2);
    printf("PIB per Capita: %.2f\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    printf("\n=== Comparacoes (1 = Carta 1 vence, 0 = Carta 2 vence) ===\n");
    printf("Populacao: %d\n", rPopulacao);
    printf("Area: %d\n", rArea);
    printf("PIB: %d\n", rPib);
    printf("Pontos Turisticos: %d\n", rPontos);
    printf("PIB per Capita: %d\n", rPibCapita);
    printf("Densidade (MENOR vence): %d\n", rDensidade);
    printf("Super Poder: %d\n", rSuperPoder);

    return 0;
}
