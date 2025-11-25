#include <stdio.h>

int main() {
    // Dados da primeira carta
    char codigo1[4];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Dados da segunda carta
    char codigo2[4];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // Cadastro da primeira carta
    printf("Digite o codigo da primeira carta (ex: A01): ");
    scanf("%3s", codigo1);

    printf("Populacao: ");
    scanf("%d", &populacao1);

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

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    printf("\n=============================\n");
    printf("      CARTA 1 CADASTRADA\n");
    printf("=============================\n");
    printf("Codigo: %s\n", codigo1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1);

    printf("\n=============================\n");
    printf("      CARTA 2 CADASTRADA\n");
    printf("=============================\n");
    printf("Codigo: %s\n", codigo2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);

    return 0;
}

